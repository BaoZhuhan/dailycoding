#include <bits/stdc++.h>
using namespace std;
#define endl '\n'                                                                 

struct node
{
    //index 储存编号 ， score储存积分 ， goal储存进球 ， af_goal储存净进球
    int index = 0;
    int score = 0;
    int goal = 0;
    int af_goal = 0;
};

vector<node> arr;

void input()
{

    int i, j, p, q;
    cin >> i >> j >> p >> q;
    //计算积分    
    if(p == q){
        arr[i-1].score += 1;
        arr[j-1].score += 1;
    }else if(p > q){
        arr[i-1].score += 3;
    }else{
        arr[j-1].score += 3;
    }
    //计算进球数
    arr[i-1].goal += p;
    arr[j-1].goal += q;
    //计算净进球数
    arr[i-1].af_goal += (p - q);
    arr[j-1].af_goal += (q - p);
}

bool cmp(node x, node y){
    //为sort函数手写自定义判断函数cmp
    if(x.score > y.score){
        return true;//判断积分
    }else if(x.score < y.score){
        return false;
    }else if(x.af_goal > y.af_goal){
        return true;//判断净进球
    }else if(x.af_goal < y.af_goal){
        return false;
    }else if(x.goal > y.goal){
        return true;//判断进球
    }else if(x.goal < y.goal){
        return false;
    }else if(x.index < y.index){
        return true;//判断队伍编号
    }else{
        return false;
    }    
}

int main()
{
    int n;
    cin >> n;
    //向数组添加队伍
    for (int i = 1; i <= n; i++)
    {
        node tmp;
        tmp.index = i;
        arr.push_back(tmp);
    }
    //计算单循环场次
    int t = (n * (n - 1)) / 2;
    //添加t场比赛
    for (int i = 0; i < t; i++)
    {
        input();
    }
    //利用sort函数配合自定义cmp函数实现队伍由高到低排名
    sort(arr.begin(),arr.end(),cmp);
    //遍历数组输出
    for(auto i : arr){
        cout << i.index << ' ';
    }
    
    return 0;
}