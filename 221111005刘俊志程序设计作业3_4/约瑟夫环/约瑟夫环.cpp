#include<bits/stdc++.h>
using namespace std;
int Josephus(int a,int b)
{
	if(a==1)
		return 0;
	else
	{
		return ((Josephus(a-1,b)+b)%a); 
	}
}
int main()
{
	int n[100],m[100],c,d;
	for(int i=1;;i++)
	{
		cin>>n[i]>>m[i];
		if(n[i]==0&&m[i]==0)
		{
			c=i;
			break;
		}
	}
	for(int i=1;i<c;i++)
	{
		d=Josephus(n[i],m[i])+1;
		cout<<d<<endl;
	}
	return 0;
}
