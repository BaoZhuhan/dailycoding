#include <bits/stdc++.h>
using namespace std ;

int main(){
    int n ;cin >> n ;
    int ans = 0 ;
    int tmp ; 
    for(int i = 0 ; i < n ; i++){
        cin >> tmp ;
        if(tmp == 1) ans++;
    }
    cout << n - ans ;

    return 0;
}