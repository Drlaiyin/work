#include<bits/stdc++.h>
using namespace std;
int main()
{
	double a,b,c,d,x1,x2;//a��b��c�ֱ�Ϊ����������dΪ�� 
	cin>>a>>b>>c;
	if(a==0)
	{
		cout<<"a��Ϊ0"<<endl;
	}
	d=b*b-a*c*4;
	if(d>0)
	{
		d=sqrt(d);
		x1=(d-b)/a/2;
		x2=(0-d-b)/a/2;
		cout<<"x1Ϊ��"<<x1<<endl<<"x2Ϊ��"<<x2<<endl;
	}
	else if(d<0)
	{
		cout<<"����û�и�"<<endl;
	}
	else
	{
		x1=(0-b)/a/2; 
		cout<<"������������ȵ�ʵ����x1=x2="<<x1<<endl;
	}
	return 0;
}
