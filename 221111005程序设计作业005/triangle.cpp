#include<bits/stdc++.h>
using namespace std;
class triangle
{
private: 
		int a,b,c;
public: 
		void cd(int a2,int b2,int c2)
		{
			a=a2;
			b=b2;
			c=c2;
		}
		void pd()
		{
			if(a>b&&a>c)
			{
				if(a<b+c)//�ж��ܷ���������� 
				{
					if(b==c)
						cout<<"���������ǵ���������"<<endl;//1������������� 
					else
						cout<<"������������ͨ������"<<endl;//��ͨ������ 
				}
				else
					cout<<"�ñ��޷����������" <<endl;
			}
			else if(b>c)
			{
				if(b<c+a)
				{
					if(a==c)
						cout<<"���������ǵ���������"<<endl;
					else
						cout<<"������������ͨ������"<<endl;
				}
				else
					cout<<"�ñ��޷����������" <<endl;
			}
			else if(c>a&&c>b)
			{
				if(c<b+a)
				{
					if(a==b)
						cout<<"���������ǵ���������"<<endl;
					else
						cout<<"������������ͨ������"<<endl;
				}
				else
					cout<<"�ñ��޷����������" <<endl;
			}
			else
				cout<<"���������ǵȱ�������"<<endl;
		}

};
int main()
{
	triangle d;
	int a1,b1,c1;
	cin>>a1>>b1>>c1;
	d.cd(a1,b1,c1);
	d.pd();
	return 0;
}
