#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num1,b=0,c,num2=0;
	cin>>num1;
	do
	{
		b+=1;
		c=num1%10;
		num2=num2*10+c;
		num1/=10;
	}while(num1>0);
	cout<<num2<<endl;
	cout<<b<<endl;
	return 0;	
} 
