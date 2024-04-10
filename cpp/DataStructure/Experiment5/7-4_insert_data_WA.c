#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* next;
}node;

node* init() {
    node* H;
    H = (node*)malloc( sizeof( node ) );
    H->next = NULL;

    return H;
}

node* createNode( node* p, int data ) {
    node* now;
    now = (node*)malloc( sizeof( node ) );

    now->data = data;
    now->next = p->next;

    p->next = now;

    return now;
}

node* findNode( node* H, int tar ) {
    node* p = H;
    while (p != NULL) {
        if (p->data == tar) return p;
        p = p->next;
    }
    return NULL;
}

node* findLoc( node* H, int tar ) {
    node* ps = H;
    node* pf = ps->next;

    while (pf != NULL) {
        if (pf->data > tar) return ps;
        ps = pf;
        pf = ps->next;
    }
    return ps;
}

void print( node* H ) {
    node* p = H->next;
    while (p->next != NULL) {
        printf( "%d ", p->data );
        p = p->next;
    }
    printf("%d\n", p->data);

    return;
}

int main() {
    int n;
    scanf( "%d", &n );

    node* H = init();
    node* p = H;

    for (int i = 0; i < n; i++) {
        int tmp;
        scanf( "%d", &tmp );

        p = createNode( p, tmp );
    }

    int tar;
    scanf( "%d", &tar );

    if (findNode( H, tar ) != NULL) {
        print( H );
    } else {
        node* loc = findLoc( H, tar );
        createNode( loc, tar );
        print( H );
    }

    return 0;
}
