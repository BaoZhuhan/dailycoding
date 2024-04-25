#include<stdio.h>
#include <stdlib.h>
typedef struct Node* List;
struct Node {
    char Data;
    struct Node* Next;
    struct Node* b;
};
void put( List h );
int main() {
    List q = (List)malloc( sizeof( struct Node ) );
    q->Next = NULL;
    List p;
    List h = q, e = q;
    char a;
    int i = 1;
    h = q;
    e = q;
    while (1) {
        a = getchar();
        put( h );
        printf("\n-------\n ,test a = %c\n" , a);
        if (a == '#')
            break;
        switch (a) {
        case '[':
            q = h;
            break;
        case ']':
            q = e;
            break;
        case '{':
            if (q != h) {
                q = q->b;
            }break;
        case '}':
            if (q != e) {
                q = q->Next;
            }break;
        case '-':
            if (i == 1) {
                i = 0;
            }
            else {
                i = 1;
            }break;
        case '=':
            if (q == e) {
                e = q->b;
                p = q;
                e->Next = q->Next;
                q = e;
                //free( p );
            }
            else {
                p = q->b;
                p->Next = q->Next;
                q->Next->b = p;
                q = p;
                p = e->b;
                p->Next = e->Next;
                e = q;
                //free( p );
            }
            break;
        default:
            if (i == 0) {
                q = q->Next;
                q->Data = a;
            }
            else {
                p = (List)malloc( sizeof( struct Node ) );
                p->Data = a;
                p->Next = q->Next;
                q->Next = p;
                p->b = q;
                if (q == e) {
                    e = p;
                }
                q = p;
            }
        }
    }
    q = e;
    q->Next = NULL;
    put( h );
    return 0;
}void put( List h ) {
    List p;
    p = h->Next;
    while (p) {
        printf( "%c", p->Data );
        p = p->Next;
    }
}