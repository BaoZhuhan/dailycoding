#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode* next;
};

struct ListNode* createlist();
struct ListNode* deleteeven( struct ListNode* head );
void printlist( struct ListNode* head ) {
    struct ListNode* p = head;
    while (p) {
        printf( "%d ", p->data );
        p = p->next;
    }
    printf( "\n" );
}

int main() {
    struct ListNode* head;

    head = createlist();
    head = deleteeven( head );
    printlist( head );

    return 0;
}


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

struct ListNode* createlist(){
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


// struct ListNode* createlist() {
//     struct ListNode* head = NULL, * p1, * p2;
//     while (p1->data != -1 || head == NULL) {
//         p1 = (struct ListNode*)malloc( sizeof( struct ListNode* ) );
//         scanf( "%d", &p1->data );
//         if (head == NULL)
//             head = p1;
//         else {
//             p1->next = NULL;
//             p2->next = p1;
//         }
//         p2 = p1;
//     }
//     return head;
// }

void del(struct ListNode *pre){
    if(pre == NULL || pre->next == NULL){ return;}
    
    //struct ListNode* now = pre->next;

    pre->next = pre->next->next;

    //free(now);
}
struct ListNode* deleteeven(struct ListNode* head) {
    struct ListNode *p = head;

    while(p->next != NULL){
        while(p->next != NULL && p->next->data % 2 == 0){
            del(p);
        }
        p = p->next;
    }

    return head->next;
}
// struct ListNode* deleteeven( struct ListNode* head ) {
//     struct ListNode* p, * r, * s;
//     p = head;
//     while (p != NULL) {
//         if (head == p) {
//             if (p->data % 2 == 0) {
//                 head = p->next;
//                 s = p;
//                 free( s );
//             }
//         }
//         else {
//             if (p->data % 2 == 0) {
//                 s = r->next;
//                 r->next = s->next;
//                 free( s );
//             }
//         }

//         r = p;
//         p = p->next;
//     }
//     return head;
// }