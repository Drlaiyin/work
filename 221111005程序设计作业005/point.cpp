#include<bits/stdc++.h>
using namespace std;
class point
{
private:
		int x,y;
public:
		void cd(int a,int b)
		{
			x=a;
			y=b;	
		}
		void show()	
		{
			cout<<"原点坐标为"<<"("<<x<<","<<y<<")"<<endl;
		}		
};
class rectangle:public point
{
private:
		int m,n;
public:
		void cd1(int c,int d)
		{
			m=c;
			n=d;
		}
		void zc()
		{
			int e=0;
			e=m+m+n+n;
			cout<<"该矩形周长为"<<e<<endl;
		}
		void mj()
		{
			int f=0;
			f=m*n;
			cout<<"该矩形面积为"<<f<<endl;
		}
};
int main()
{
	cout<<"请输入原点坐标"<<endl; 
	rectangle p1;
	int a1,b1,a2,b2;
	cin>>a1>>b1;
	cout<<"请输入长和宽"<<endl;
	cin>>a2>>b2;
	p1.cd(a1,b1);
	p1.show();
	p1.cd1(a2,b2);
	p1.zc();
	p1.mj(); 
	return 0;
}
