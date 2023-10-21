#include<bits/stdc++.h>
using namespace std;
int main()
{
	double a,b,c,d,x1,x2;//a，b，c分别为三个参数。d为Δ 
	cin>>a>>b>>c;
	if(a==0)
	{
		cout<<"a能为0"<<endl;
	}
	d=b*b-a*c*4;
	if(d>0)
	{
		d=sqrt(d);
		x1=(d-b)/a/2;
		x2=(0-d-b)/a/2;
		cout<<"x1为："<<x1<<endl<<"x2为："<<x2<<endl;
	}
	else if(d<0)
	{
		cout<<"方程没有根"<<endl;
	}
	else
	{
		x1=(0-b)/a/2; 
		cout<<"方程有两个相等的实根：x1=x2="<<x1<<endl;
	}
	return 0;
}
