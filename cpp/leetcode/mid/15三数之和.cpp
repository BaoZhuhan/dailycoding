#include <bits/stdc++.h>
using namespace std ;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int> > res;

        sort(nums.begin(),nums.end());

        for(int i = 0 ; i < nums.size() - 2 ; i ++) {
            for(int j = 0 ; j < nums.size() - 1 ; j++) {
                for(int k = 0 ; k < nums.size() ; k++) {
                    if(nums[i] + nums[j] + nums[k] == 0){
                        vector<int> tmp;
                        tmp.push_back(i);
                        tmp.push_back(j);
                        tmp.push_back(k);
                        res.push_back(tmp);
                    }
                }
            }
        }
        return res;
    }
};

int main(){
    Solution s;
    vector<vector<int> > ans ;
    int n ;
    cin >> n;
    vector<int> a(n);
    for(int i = 0 ; i < n ; i ++) cin >> a[i];
    ans = s.threeSum(a);
    for(int i = 0 ;i < ans.size() ; i++){
        for(int j = 0 ; j < ans[i].size() ; j++) {
            cout << ans[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}