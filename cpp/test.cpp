#include <bits/stdc++.h>
using namespace std;

struct node{
    string name;
    string meet;
    int happiness;
};

int main(){
    struct node me;
    struct node you;
    cin >> you.name,me.meet = you.name;
    while(me.meet == you.name){
        me.happiness++;
    }
    return 0;
}