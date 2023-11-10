#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x=0;
	long double a,b;
	cin>>a>>b;
	while(b>=a)
	{
		b/=a;
		x++;
	}
	cout<<x<<endl;
	return 0;
	
}
