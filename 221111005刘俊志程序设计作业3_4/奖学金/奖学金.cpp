#include<bits/stdc++.h>
using namespace std;
struct Student
{
	string name;
	int a;//期末成绩 
	int b;//班级评议成绩 
	char c;//班干部 
	char d;//西部学生 
	int e;//论文数 
	int sum;
};
int main()
{
	int n,x=0;
	cin>>n;
	Student f[n];
	for(int i=0;i<n;i++)
	{
		cin>>f[i].name>>f[i].a>>f[i].b>>f[i].c>>f[i].d>>f[i].e;
		f[i].sum=0;
		if(f[i].a>80&&f[i].e>=1)
			f[i].sum+=8000;
		if(f[i].a>85&&f[i].b>80)
			f[i].sum+=4000;
		if(f[i].a>90)
			f[i].sum+=2000;
		if(f[i].a>85&&f[i].d=='Y')
			f[i].sum+=1000;
		if(f[i].b>80&&f[i].c=='Y')
			f[i].sum+=850;
		x+=f[i].sum;
	}
	int max=-1,b;
	for(int i=0;i<n;i++)
	{
		if(f[i].sum>max)
		{
			max=f[i].sum;
			b=i;
		}
	}
	cout<<f[b].name<<endl<<f[b].sum<<endl<<x<<endl;
	return 0;
}
