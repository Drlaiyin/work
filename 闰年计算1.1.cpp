#include<bits/stdc++.h>
using namespace std;
void pd(int c)//声明判断函数 
{
	int e;//e用于判断余数 
	if(c>0)//公元后年份 
	{
		if(c%4==0&&c%100!=0)//非整百年份的闰年
		{
			cout<<c<<"是闰年"<<endl;
			c+=4;//判断下一次闰年
			if(c%100==0&&c%400==0)//类似396的情况 
			{
				cout<<"下一次闰年是4年后，是"<<c<<"年"<<endl;
			} 
			else if(c%100==0&&c%400!=0)//类似596的情况
			{
				c+=4;
				cout<<"下一次闰年是8年后，是"<<c<<"年"<<endl; 
			} 
			else//其他常见情况 
			{
				cout<<"下一次闰年是4年后，是"<<c<<"年"<<endl; 
			}
		}
		else if(c%100==0&&c%400==0)//整400情况 
		{
			cout<<c<<"是闰年"<<endl;
			c+=4;
			cout<<"下一次闰年是4年后，是"<<c<<"年"<<endl;
		} 
		else if(c%100==0&&c%400!=0)//非整400的整百情况 
		{
			cout<<c<<"不是闰年"<<endl;
			c+=4;
			cout<<"下一次闰年是4年后，是"<<c<<"年"<<endl;
		}
		else//其他非闰年情况 
		{
			e=c%4;
			cout<<c<<"不是闰年"<<endl;
			e=4-e;
			c+=e;
			cout<<"下一次闰年是"<<e<<"年后，是"<<c<<"年"<<endl;
		}
	}
	if(c<0)//公元前年份
/*
需要注意的是由于没有公元0年这一说，所以公元前1年是闰年。
也因此导致公元前年份的判断需要模4得1
*/ 
	{
		int d;//d用于求绝对值 
		d=abs(c);//求绝对值
		if(d%4==1&&d%100!=1)//非整百年份的闰年
		{
			cout<<c<<"是闰年"<<endl;
			c+=4;//判断下一次闰年
			if(c>=0)//判断是否跨过公元前
			{
				c++;
			} 
			if(d%100==1&&d%400==1)//类似396的情况 
			{
				cout<<"下一次闰年是4年后，是"<<c<<"年"<<endl;
			} 
			else if(d%100==1&&d%400!=1)//类似596的情况
			{
				c+=4;
				cout<<"下一次闰年是8年后，是"<<c<<"年"<<endl; 
			} 
			else//其他常见情况 
			{
				cout<<"下一次闰年是4年后，是"<<c<<"年"<<endl; 
			}
		}
		else if(d%100==1&&d%400==1)//整400情况 
		{
			cout<<c<<"是闰年"<<endl;
			c+=4;
			if(c>=0)//判断是否跨过公元前
			{
				c++;
			} 
			cout<<"下一次闰年是4年后，是"<<c<<"年"<<endl;
		} 
		else if(d%100==1&&d%400!=1)//非整400的整百情况 
		{
			cout<<c<<"不是闰年"<<endl;
			c+=4;
			if(c>=0)//判断是否跨过公元前
			{
				c++;
			} 
			cout<<"下一次闰年是4年后，是"<<c<<"年"<<endl;
		}
		else
		{
			cout<<c<<"不是闰年"<<endl;
			e=d%4-1;
			c+=e;
			if(c>=0)//判断是否跨过公元前
			{
				c++;
			} 
			cout<<"下一次闰年是"<<e<<"年后，是"<<c<<"年"<<endl;
		}
	} 
}
int main()
{
	int a[3];
	cout<<"请输入三个年份，以空格隔开（公元前年份请以负值表示）："<<endl;
	for(int i=0;i<=2;i++)
	{
		cin>>a[i];//循环输入三个年份 
	}
	sort(a,a+3);//利用sort函数将三个年份排序
	cout<<"将三个年份排序后得到"<<a[0]<<' '<<a[1]<<' '<<a[2]<<endl;
	for(int i=0;i<=2;i++)
	{
		pd(a[i]);//调用三次判断函数 
	} 
	return 0;
}
