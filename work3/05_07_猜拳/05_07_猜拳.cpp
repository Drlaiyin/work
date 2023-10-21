#include<bits/stdc++.h>
using namespace std;
int main()
{
	srand(time(0));
	int a,b,c=1;//a为玩家输入 
	while(c==1)
	{
		cout<<"请输入数值："<<endl;
		cin>>a;
		b=rand()%3;
		if(a!=0&&a!=1&&a!=2)
		{
			cout<<"输入有误，请重新输入"<<endl;
		}
		else
		{
			a-=b;
			switch(a)
			{
				case 0:
					cout<<"平局"<<endl;
					break;
				case 1:
					cout<<"你输了"<<endl;
					break;
				case 2:
					cout<<"你赢了"<<endl;
					break;
				case -1:
					cout<<"你赢了"<<endl;
					break;
				case -2:
					cout<<"你输了"<<endl;
					break;
			}
			cout<<"是否要重新再来一局？（1代表继续，0代表结束）："<<endl;
			cin>>c;
		}
	}
	return 0;
}
