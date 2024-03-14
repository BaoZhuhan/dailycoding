#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
    char loc[100];
    char wrd;
    char nxt[100];
}node;

node *a;
int ans[26] = {0};
int sum = 0 ;

void run(){
    char head[100] ;
    int n ;

    int i = 0;
    while((head[i] = getchar()) != ' ') { i++; }
    head[i] = '\0';
    scanf("%d", &n);
    getchar();

    a = (node*)malloc(n * sizeof(node));

    for(i = 0 ; i < n ; i ++){
        node now;

        char nowloc[100];
        char nowwrd;
        char nownxt[100];

        int j = 0 ;
        while((nowloc[j] = getchar()) != ' ') {j++;}
        nowloc[j] = '\0';

        scanf("%c" , &nowwrd);

        j = 0;
        while((nownxt[j] = getchar()) != '\n') {j++;}
        nownxt[j] = '\0'; 

        a[i] = now;
    }

    int flag = 1;
    char p[100] ;
    strcpy(&p , &head);

    while(flag == 1) {
        for(i = 0 ; i < n ; i++) {
            if(strcmp(a[i].loc , p) == 0){
                ans[(a[i].wrd - 'A')] ++;
                sum ++;
                strcpy(&p , &a[i].nxt);
                break;
            }
        }

        if(strcmp(a[i].loc , "-1\0") == 0) flag = 0;
    }    

    for(i = 0 ; i < 26 ; i++){
        if(ans[i] != 0 ) printf("%c %.2f\%\n",'A'+i , ((float)ans[i]/(float)sum)*100  );
    }
}


int main(){
    run();
    return 0;
}


