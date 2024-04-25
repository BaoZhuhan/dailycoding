
typedef struct node {
    double coe;
    int exp;
}node;

void unit(){
    while(1){
        node now;
        char tmp;
        scanf("%lf^%d%c", &now.coe , &now.exp , &tmp);
        if(tmp == '\n') break; 
    }
}