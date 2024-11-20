#include<iostream>
using namespace std;

	void passbyvalue(int num)
	{
		num=num+10;
		cout<<"inside function"<<num<<endl;
	}
int main()
{
	int number=5;
	cout<<"before function call"<<number<<endl;
	passbyvalue(number);
	cout<<"after function call"<<number<<endl;
	return 0;
}
