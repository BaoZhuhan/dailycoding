#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>


void run(){
    int n;
    scanf("%d" , &n);

    int a[100][100];
    memset(a, 0 , sizeof(n));

    int px = 0 , py = 0 ;  
    for(int i = 1 ; i <= n*n ; i++){
        if(i <= n){
            py = i - 1;
            a[px][py] = i;
        }
        else if(i <= 2*n)
    }
}

int main(){
    int T = 1;
    while(T--) run();
    return 0;
}