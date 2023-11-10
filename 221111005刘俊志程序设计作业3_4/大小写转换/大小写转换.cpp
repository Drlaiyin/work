#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	getline(cin,a);
	int len=a.length();
	for(int i=0;i<len;i++)
	{
		if(a[i]<='Z'&&a[i]>='A')
		{
			a[i]+=32;
		}
		else if(a[i]>='a'&&a[i]<='z')
		{
			a[i]-=32;
		}
		cout<<a[i];
	}
	return 0;
}
