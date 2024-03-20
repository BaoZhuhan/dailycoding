#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct node {
    int coe ;
    int exp ;
    node* pnext; 
}node;

node* head;
head = NULL;

//docs: s1 ,s2 分别存储两个字符串输入
char s1[100] ;
char s2[100] ;
int s1_size = 0 ;
int s2_size = 0 ;

//docs: strtonum负责将字符串转化为数字，a是字符串地址，p1,p2标识头尾。函数返回数字
int strtonum(char a[] , int p1 , int p2){
    int num = 0;
    for(int i = p1 ; i <= p2 ; i++){
        num *= 10;
        num += (int)(a[i] - '0');
    }
    return num;
}

//docs: cal函数负责切片字符串，并转化一个node结构
node cal(char a[] , int p1 , int p2){
    node now;
    now.pnext = NULL ;
    for(int i = p1 ; i <= p2; i++) {
        if(a[i] == '^'){
            now.coe = strtonum(a , p1, i-1);
            now.exp = strtonum(a , i+1 , p2);
            break;
        }
    }
    return now;
}

//docs: addnode负责新插入链表节点
//fix: 感觉写的有问题。
void addnode(node i){
    if(head == NULL){
        head = &i;
        i.pnext = NULL;
    }
    else{
        node *now;
        now = head;
        while(now->pnext != NULL){
            now = now->pnext;
        }
        now->pnext = &i;
    }
}

//docs : run为主函数。
void run(){
    //p1 , p2分别代表去寻找s1,s2下一个单项式的起点
    int p1 = 0 , p2 = 0;

    while(p1 < s1_size && p2 < s2_size ){
        node n1;
        node n2;

        //对于s1 ,s2字符串，都先读取一个单项式，然后生成该单项式对应的node n1 , n2
        int i , j ;
        for(i = p1 ; ; i++){
            if(s1[i] == ' ' || s1[i] == '\0'){
                n1 = cal(s1 , p1 , i-1);
            }
        }
        for(j = p2 ; ; j++){
            if(s2[j] == ' ' || s2[j] == '\0'){
                n2 = cal(s2 , p2 , j-1);
            }
        }

        //比较n1 , n2 ， 决定是否更新p1 ,p2
        if(n1.exp > n2.exp){
            addnode(n1);
            p1 = i + 1;
        }else if(n1.exp < n2.exp){
            addnode(n2);
            p2 = j + 1;
        }else{
            p1 = i + 1;
            p2 = j + 1;

            node tmp ;
            tmp.pnext = NULL ;
            tmp.coe = n1.coe + n2.coe ;
            if(tmp.coe == 0) continue;
            tmp.exp = n1.exp;
            addnode(tmp);           
        }
    }

    //todo:下面要把s1 或 s2 剩下的单项式加入链表

    //todo：遍历链表输出结果

}

//docs: unit函数负责初始化，读入两个字符串存储在s1,s2
void unit(){
    int i = 0;
    while((s1[i] = getchar()) != '\n') {i++ ;}
    s1[i] = '\0';
    s1_size = i;

    i = 0 ;
    while((s2[i] = getchar()) != '\n') {i++ ;}
    s2[i] = '\0';
    s2_size = i;
}

int main(){
    unit();
    run();
    return 0;
}