#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c=-1,d;//a是需要的行数，b是空格数量，c是*号数量 
	cin>>a;
	b=a*2-1;
	while(a>0)
	{
		d=a-1;
		c+=2;
		for(int i=1;i<=b;i++)
		{
			if(i<=d)
				cout<<' ';
			if(i<=d+c&&i>d)
				cout<<'*';			
		}
		cout<<endl;
		a--;
	}
	return 0;
}
