#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c=0; 
	for(int i=200;i<=300;i++)
	{
		a=sqrt(i*1.0);//因数的上限 
		for(int j=2;j<i;j++)
			{
				b=i%j;//取模之后判断是否为0 
				if(b==0)
				{
					c++;//成功找到一个因数 
				}
			}
		if(c==0)
		{
			cout<<i<<"是质数"<<endl;	
		}
		c=0;	
	}
	return 0;
}
