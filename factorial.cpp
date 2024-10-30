#include<iostream>
using namespace std;
int main()
{
	//5!=5*4*3*2*1=120
	int n,i;
	long factorial=1.0;
	cout<<"Enter a positive number"<<endl;
	cin>>n;
	if(n<0)
	{
		cout<<"Error! Factorial of a negative number doesn't exists"<<endl;
	}
	else
	{
		for(i=1;i<=n;n++)
		{
			factorial*=i;
		}
		cout<<"factorial of "<<n<<"="<<factorial;
	}
	return 0;
}
