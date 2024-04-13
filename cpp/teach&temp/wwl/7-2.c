#include <stdio.h>
#include <stdlib.h>

// typedef 命名一个别名 原名字也可以用
typedef struct node {
    int data; // 值
    struct node *next; //指向下一个节点的pointer
}node;

// typedef struct node *node // ,所以课本的函数下面会直接写node ,我懒得写，所以写node*

node* init(){
    //是的，这个函数的作用就是创建一个新链表

    //init的意思是初始化 ， 我觉得比createnode简单

    node *H; //指向头节点的指针

    H = (node*)malloc(sizeof(node)) ;//为头节点申请空间
    H->next = NULL; //空指针
    return H;
}


//o 对了 int *p == int* p
void insert(node* H , int x) {
    //在头指针后面加入一个新节点，
    //那样就是逆序插入
    node *now;
    now = (node*)malloc(sizeof(node));
    now->data = x;

    //思考题，后面怎么写
    now->next = H->next;
    H->next = now;

    //这样就改完了，因为我们始终在头节点后面插入数据，所以没必要返回新节点
    //但是如果我们别的题目要求依次插入，我们就要返回新节点方便下一个值的插入
}

//然后其实这道题已经做完了，这样子的输出就是符合题意的，只不过题目让我删掉；

void print(/*这里面填什么*/node *H){
    node *p = H->next;
    
    while(p != NULL){
        printf("%d " , p->data);
        p = p->next;
    }
}
int main(){
    node *H = init();
    int t = 0;
    scanf("%d" , &t);
    while( t != -1){
        insert(H,t);
        scanf("%d",&t);
    }

    //然后链表就创建好啦，wwl你真棒
    //别急，然后遍历输出
    //也写个函数吧
    print(H);
    //先debug吧，有没有注意到我的文件名是灰色的，你的是红色的

    return 0;
}