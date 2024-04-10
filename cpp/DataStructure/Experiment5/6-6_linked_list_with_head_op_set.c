#include <stdio.h>
#include <stdlib.h>

#define ERROR NULL
typedef enum {false, true} bool;
typedef int ElementType;
typedef struct LNode *PtrToLNode;
struct LNode {
    ElementType Data;
    PtrToLNode Next;
};
typedef PtrToLNode Position;
typedef PtrToLNode List;

List MakeEmpty(); 
Position Find( List L, ElementType X );
bool Insert( List L, ElementType X, Position P );
bool Delete( List L, Position P );

int main()
{
    List L;
    ElementType X;
    Position P;
    int N;
    bool flag;

    L = MakeEmpty();
    scanf("%d", &N);
    while ( N-- ) {
        scanf("%d", &X);
        flag = Insert(L, X, L->Next);
        if ( flag==false ) printf("Wrong Answer\n");
    }
    scanf("%d", &N);
    while ( N-- ) {
        scanf("%d", &X);
        P = Find(L, X);
        if ( P == ERROR )
            printf("Finding Error: %d is not in.\n", X);
        else {
            flag = Delete(L, P);
            printf("%d is found and deleted.\n", X);
            if ( flag==false )
                printf("Wrong Answer.\n");
        }
    }
    flag = Insert(L, X, NULL);
    if ( flag==false ) printf("Wrong Answer\n");
    else
        printf("%d is inserted as the last element.\n", X);
    P = (Position)malloc(sizeof(struct LNode));
    flag = Insert(L, X, P);
    if ( flag==true ) printf("Wrong Answer\n");
    flag = Delete(L, P);
    if ( flag==true ) printf("Wrong Answer\n");
    for ( P=L->Next; P; P = P->Next ) printf("%d ", P->Data);
    return 0;
}
/* 你的代码将被嵌在这里 */



List MakeEmpty(){
    List H;
    H = (List)malloc(sizeof(struct LNode));
    H->Next = NULL;
    return H;
}

Position Find( List L, ElementType X ){
    List p = L->Next;
    while(p){
        if(p->Data == X) return p;
        p = p->Next;
    }
    return ERROR;
}

bool Insert( List L, ElementType X, Position P ){
    List p = L;
    int flag = 0;
    while(p){
        if(p->Next == P){
            flag = 1;
            P = p ; 
        }
        p = p->Next;
    }
    if(!flag) printf("Wrong Position for Insertion\n");

    List now;
    now = (List)malloc(sizeof(struct LNode));

    now->Data = X;
    now->next = P;
}

bool Delete( List L, Position P ){
    List p = L;

    if(p->Next == P) {
        p->Next = NULL;
        return 1;
    }else if(p->Next == NULL){
        return 0;
    }
    while(p->Next != P && p->Next != NULL){
        p = p->Next;
    }

    if(p->Next == NULL) return 0;
    else{
        p->Next = p->Next->Next;
        return 1;
    }
}