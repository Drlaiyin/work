#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c=0; 
	for(int i=200;i<=300;i++)
	{
		a=sqrt(i*1.0);//���������� 
		for(int j=2;j<i;j++)
			{
				b=i%j;//ȡģ֮���ж��Ƿ�Ϊ0 
				if(b==0)
				{
					c++;//�ɹ��ҵ�һ������ 
				}
			}
		if(c==0)
		{
			cout<<i<<"������"<<endl;	
		}
		c=0;	
	}
	return 0;
}
