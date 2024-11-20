#include<iostream>
using namespace std;
void passbyvalue(int num)
	{
		num=num+10;
		cout<<"inside function"<<num<<endl;
	}
void sub(int num)
{
	int sub=num-10;
	cout<<"subtaction:"<<sub<<endl;
}
void mul(int num)
{
int	mul=num*10;
	cout<<"multiplication:"<<mul<<endl;
}
int main()
{
	int number=5;
	cout<<"before function call"<<number<<endl;
	passbyvalue(number);
	sub(number);
	mul(number);
	cout<<"after function call"<<number<<endl;
	return 0;
}
