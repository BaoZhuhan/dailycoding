#include<stdio.h>
#include<stdlib.h>

#define ERROR NULL
typedef char ElementType;
typedef struct LNode* PtrToLNode;
struct LNode {
    ElementType data;
    PtrToLNode next;
    PtrToLNode previous;
};
typedef PtrToLNode Position;
typedef PtrToLNode List;

List MakeEmpty();//创建双向链表
void Print( List head );//打印

int main() {
    List L, head, tail, p;
    ElementType X;
    int flag = 0;//判断Insert

    L = MakeEmpty();
    head = L;
    tail = L;
    while ((X = getchar()) != '#') {
        if (X == '[') {
            L = head;
        }
        else if (X == ']') {
            L = tail;
        }
        else if (X == '{') {
            if (L != head) { L = L->previous; }
        }
        else if (X == '}') {
            if (L != tail) { L = L->next; }
        }
        else if (X == '-') {
            if (flag == 0) {
                flag = 1;
            }
            else if (flag == 1) {
                flag = 0;
            }
        }
        else if (X == '=') {
            if (L == tail) {
                tail = L->previous;
            }
            p = L;
            L = L->previous;
            L->next = p->next;
            //free( p );
        }
        else {
            if (flag == 0) {
                p = (List)malloc( sizeof( struct LNode ) );
                p->data = X;
                p->next = L->next;
                p->previous = L;
                L->next = p;
                if (L == tail) {
                    tail = p;
                }
                L = p;
            }
            else {
                L = L->next;
                L->data = X;
            }
        }
    }
    tail->next = NULL;
    Print( head );
}

List MakeEmpty() {
    List p;
    p = (List)malloc( sizeof( struct LNode ) );
    p->next = NULL;
    return p;
}

void Print( List head ) {
    List p;
    p = head->next;
    while (p != NULL) {
        printf( "%c", p->data );
        p = p->next;
    }
    printf( "\n" );
}