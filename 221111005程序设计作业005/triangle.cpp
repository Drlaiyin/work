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
				if(a<b+c)//判断能否组成三角形 
				{
					if(b==c)
						cout<<"该三角形是等腰三角形"<<endl;//1代表等腰三角形 
					else
						cout<<"该三角形是普通三角形"<<endl;//普通三角形 
				}
				else
					cout<<"该边无法组成三角形" <<endl;
			}
			else if(b>c)
			{
				if(b<c+a)
				{
					if(a==c)
						cout<<"该三角形是等腰三角形"<<endl;
					else
						cout<<"该三角形是普通三角形"<<endl;
				}
				else
					cout<<"该边无法组成三角形" <<endl;
			}
			else if(c>a&&c>b)
			{
				if(c<b+a)
				{
					if(a==b)
						cout<<"该三角形是等腰三角形"<<endl;
					else
						cout<<"该三角形是普通三角形"<<endl;
				}
				else
					cout<<"该边无法组成三角形" <<endl;
			}
			else
				cout<<"该三角形是等边三角形"<<endl;
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
