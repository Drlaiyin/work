#include<bits/stdc++.h>
using namespace std;
class circle
{
private:
		int r; 
public:
		void cd(int e)
		{
			r=e;
		}
		void zc()
		{
			double b=0;
			b=r*2.0*3.1415926;
			cout<<"�ܳ�Ϊ"<<b<<endl;
		}
		void mj()
		{
			double c=0;
			c=r*r*1.0*3.1415926;
			cout<<"���Ϊ"<<c<<endl;
		}
};
int main()
{
	circle d;
	int a;
	cin>>a;
	d.cd(a);
	d.mj();
	d.zc();
	return 0;
}
