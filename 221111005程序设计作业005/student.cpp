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
			 	cout<<"һ��������"<<e<<"��ѧ��"<<endl; 
			 }
		}
		void out()
		{
			if(score>=90)
			{
				cout<<name<<"�ɼ�ΪA"<<endl;
			}
			else if(score<90&&score>=70)
			{
				cout<<name<<"�ɼ�ΪB"<<endl;
			}
			else if(score<70&&score>=60)
			{
				cout<<name<<"�ɼ�ΪC"<<endl;
			}
			else
			{
				cout<<name<<"�ɼ�ΪD"<<endl;
			}
		}
			
};
int main()
{
	cout<<"������ѧ�����ݣ���end����"<<endl;
	student b;
	int a=0;
	b.sd();
	return 0;
}
