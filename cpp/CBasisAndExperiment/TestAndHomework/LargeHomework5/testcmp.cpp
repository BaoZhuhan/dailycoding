#include <bits/stdc++.h>
using namespace std;

bool cmp(int x, int y){
    if(x >= y){
        return true;
    }else {
        return false;
    }
}
int main(){
    vector<int> a;
    for(int i = 0 ; i <= 5 ; i++){
        a.push_back(i);
    }

    sort(a.begin(),a.end(),cmp);
    
    for(auto i : a){
        cout << i << ' ';
    }
}