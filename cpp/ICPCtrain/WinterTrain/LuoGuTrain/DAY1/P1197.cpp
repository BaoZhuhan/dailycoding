#include <bits/stdc++.h>
using namespace std;

    int k;
    cin >> k;
    vector<int> v,sp(n+1);
    for(int i = 0 ; i < k ; i++){
        int now;
        cin >> now;
        now++;
        v.push_back(now);
        sp[now] = 1;
    }

    DSU dsu(n);
    int cnt = n - k;
    for(int i = 1 ;i <= n ; i++){
        if(sp[i])continue;
        for(auto x : g[i]){
            if(sp[x]) continue;
            if(!dsu.query(i,x)){
                dsu.merge(i,x);
                cnt--;
            }
        }
    }
    vector<int>ans(k);
    

    cout << cnt