#include <bits/stdc++.h>
using namespace std;

//a-j mean 0-9 and S - Y mean 1e1 - 1e8
char mp[15] = {'a','b','c','d','e','f','g','h','i','j','S','B','Q','W','Y'};
string num;
vector<char> out;

int main(){
    cin >> num;
    int l = num.length();
    
    //store every num to the location in the 4-site-layer
    int a[((l+3)/4)][4];
    memset(a, 0 ,sizeof(a));
    for(int i = l - 1; i >= 0 ; i-- ){
        a[(( l - 1 ) - i ) / 4][(( l - 1 ) - i ) % 4] = (int)(num[i] - '0');
    }
    
    //from high to low layer , change the num into letter
    for(int i = ((l+3)/4) - 1; i >= 0 ; i--){
        for(int j = 3 ; j >= 0 ; j-- ){
            if()
        }
    }


}