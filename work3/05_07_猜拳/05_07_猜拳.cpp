#include<bits/stdc++.h>
using namespace std;
int main()
{
	srand(time(0));
	int a,b,c=1;//aΪ������� 
	while(c==1)
	{
		cout<<"��������ֵ��"<<endl;
		cin>>a;
		b=rand()%3;
		if(a!=0&&a!=1&&a!=2)
		{
			cout<<"������������������"<<endl;
		}
		else
		{
			a-=b;
			switch(a)
			{
				case 0:
					cout<<"ƽ��"<<endl;
					break;
				case 1:
					cout<<"������"<<endl;
					break;
				case 2:
					cout<<"��Ӯ��"<<endl;
					break;
				case -1:
					cout<<"��Ӯ��"<<endl;
					break;
				case -2:
					cout<<"������"<<endl;
					break;
			}
			cout<<"�Ƿ�Ҫ��������һ�֣���1���������0�����������"<<endl;
			cin>>c;
		}
	}
	return 0;
}
