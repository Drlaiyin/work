#include<bits/stdc++.h>
using namespace std;
int feibo(int a)
{
	int b=0;
	if(a<=2)
	{
		b+=1;
		return b;
	}
	else
	{
		b+=feibo(a-1)+feibo(a-2);
	}
}
int main()
{
	int a,c;
	cin>>a;
	int b[a];
	for(int i=0;i<a;i++)
	{
		cin>>b[i];
	}
	for(int i=0;i<a;i++)
	{
		c=feibo(b[i]);
		cout<<c<<endl;
	}
	return 0;
}
