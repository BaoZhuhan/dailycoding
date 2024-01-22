#include <bits/stdc++.h>
using namespace std;
struct node
{
	int score;
	int win;
	int zwin;
	int name;
};

bool cmp(node x, node y){
	if(x.score > y.score)
	{
		return true;
	}
	else if(x.score < y.score)
	{
		return false;
	}
	else if(x.win > y.win)
	{
		return true;
	}
	else if(x.win < y.win)
	{
		return false;
	}
	else if(x.zwin > y.zwin)
	{
		return true;
	}
	else if(x.zwin < y.zwin)
	{
		return false;
	}
	else if(x.name < y.name)
	{
		return true;
	}
	else if(x.name > y.name)
	{
		return false;
	}
}

int main(){
    int n;
	int i,j,p,q;
	struct node a[1000];
	scanf("%d",&n);
	for(int m=0;m<n;m++)
	{
		a[m].name=i+1;
	}
	
    for(int k=0;k<n*(n-1)/2;k++)
	{
		scanf("%d %d %d %d\n",&i,&j,&p,&q);
		if(p>q)
		{
			a[i-1].score=a[i-1].score+3;
		}
		else if(p<q)
		{
			a[j-1].score=a[j-1].score+3;
		}
		else
		{
			a[i-1].score++;
			a[j-1].score++;
		}
		a[i-1].win=a[i-1].win+p-q;
		a[j-1].win=a[j-1].win+q-p;
		a[i-1].zwin=a[i-1].zwin+p;
		a[j-1].zwin=a[j-1].zwin+q;
	}
	
    sort(a,a + n,cmp);

	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i].name);
	}
	return 0;

}