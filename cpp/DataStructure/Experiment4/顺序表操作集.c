#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 5
#define ERROR -1
typedef enum {false, true} bool;
typedef int ElementType;
typedef int Position;
typedef struct LNode *List;
struct LNode {
    ElementType Data[MAXSIZE];
    Position Last; 
};

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
    L = MakeEmpty();
    scanf("%d", &N);
    while ( N-- ) {
        scanf("%d", &X);
        if ( Insert(L, X, 0)==false )
            printf(" Insertion Error: %d is not in.\n", X);
    }
    scanf("%d", &N);
    while ( N-- ) {
        scanf("%d", &X);
        P = Find(L, X);
        if ( P == ERROR )
            printf("Finding Error: %d is not in.\n", X);
        else
            printf("%d is at position %d.\n", X, P);
    }
    scanf("%d", &N);
    while ( N-- ) {
        scanf("%d", &P);
        if ( Delete(L, P)==false )
            printf(" Deletion Error.\n");
        if ( Insert(L, 0, P)==false )
            printf(" Insertion Error: 0 is not in.\n");
    }
    return 0;
}

List MakeEmpty(){
    List L;
    L = (List)malloc(sizeof(struct LNode));
    L->Last = -1;
    return L;
}

Position Find( List L, ElementType X ){
    if(L->Last == -1) return -1;
    Position p = 0 ;
    while(p <= L->Last){
        if(L->Data[p] == X){
            return p;
        }
        p++;
    }

    return -1;
}

bool Insert( List L, ElementType X, Position P ){
    if(P < 0 || P > L->Last+1) return false;
    if(L->Last == MAXSIZE) return false;

    Position p = L->Last+1;
    
    if(L->Last != -1){
        while(p != P){
            L->Data[p] = L->Data[p-1];
            p--;
        }
    }

    L->Data[p] = X;

    L->Last++;

    return true;
}

bool Delete( List L, Position P ){
    if(P < 0 || P > L->Last) return false;
    
    Position p = P;
    while(p <= L->Last){
        L->Data[p] = L->Data[p+1];
        p++;
    }

    L->Last--;
    return true;
}