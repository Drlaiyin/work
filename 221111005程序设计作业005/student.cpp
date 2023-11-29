#include<bits/stdc++.h>
using namespace std;

static int e;
class student
{
private:
		string name;
		int Class;
		int id;
		int score;


public:
		void sd()
		{
			 cin>>name;
			 if(name!="end")
			 {
			 	cin>>Class;
			 	cin>>id;
			 	cin>>score;
			 	out();
			 	e+=1;
			 	sd();
			 }
			 else
			 {
			 	cout<<"一共输入了"<<e<<"个学生"<<endl; 
			 }
		}
		void out()
		{
			if(score>=90)
			{
				cout<<name<<"成绩为A"<<endl;
			}
			else if(score<90&&score>=70)
			{
				cout<<name<<"成绩为B"<<endl;
			}
			else if(score<70&&score>=60)
			{
				cout<<name<<"成绩为C"<<endl;
			}
			else
			{
				cout<<name<<"成绩为D"<<endl;
			}
		}
			
};
int main()
{
	cout<<"请输入学生数据，以end结束"<<endl;
	student b;
	int a=0;
	b.sd();
	return 0;
}
