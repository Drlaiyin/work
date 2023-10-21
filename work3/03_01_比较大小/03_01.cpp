 #include <iostream>
using namespace std;
int main()
{
	int a1,a2;
	cin >>a1>>a2;
	if (a1>a2)
 		cout <<a1<<" > "<<a2<< endl;
	else if (a1==a2)
		 cout <<a1<< " = " <<a2<< endl;
	else if (a1<a2)
		cout <<a1<< " < " <<a2<< endl;
	system("pause");
	return 0;
}

