#include <bits/stdc++.h>
using namespace std;

struct node{
    int xs;
    int zs;
};

string s1 ,s2;
vector<node> ans;


int strtonum(char s[] , int p1 ,int p2){
    int num = 0 ;
    for(int i = p2 ; i >= p1 ; i--){
        num *= 10;
        num += int(s[i]-'0');
    }
    return num;
}


void cal(char s[], int p1 , int p2){
    int loc;
    int num;
    for(int i = p1 ; i <= p2 ; i++ ){
        if(s[i] == '^'){
            num = strtonum(s , p1 , i-1);
            loc = strtonum(s , i+1 , p2);
        }
    }
  
}
void run(){
    getline(cin,s1);
    getline(cin,s2);

    int p1 = 0 ,p2 = 0;
    for(int i = 0 ; i < s1.size() ; i++) {
        if(s1[i] == ' '){
            p2 = i-1;
            cal(s1, p1 , p2);
            p1 = i+1;
        }

    }
}
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int T = 1;
    //cin >> T;
    while(T--) {run();}
    return 0;
}