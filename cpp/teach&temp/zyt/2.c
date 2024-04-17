#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode* next;
};

struct ListNode* init(){
    struct ListNode* H ;
    H = (struct ListNode* )malloc(sizeof(struct ListNode));
    H->next = NULL;
    return H;
}

struct ListNode* insert(struct ListNode* pre , int x){
    struct ListNode* now;
    now = (struct ListNode* )malloc(sizeof(struct ListNode));
    now->data = x;
    now->next = pre->next;
    pre->next = now;
    return now;
}

struct ListNode* readlist(){
    struct ListNode *H = init();
    
    int t;
    scanf("%d" , &t);

    struct ListNode* p = H;
    while(t != -1){
        p = insert(p , t);
        scanf("%d" , &t);
    }

    return H;
}


void del(struct ListNode *pre){
    if(pre == NULL || pre->next == NULL){ return;}
    
    //struct ListNode* now = pre->next;

    pre->next = pre->next->next;

    //free(now);
}

struct ListNode* getodd(struct ListNode **L) {
    struct ListNode *p = head;
    //struct ListNode *H = init();

    while(p->next != NULL){
        while(p->next != NULL && p->next->data % 2 == 1){
            del(p);
        }
        p = p->next;
    }

    return head->next;
}