#include<iostream>
using namespace std;
struct user
{
	//char username;
	string username;
};
int main()
{
	user u1;
	string enteredusername;
	string correctusername="abcxyz";
	cout<<"enter the username:"<<endl;
	cin>>enteredusername;
	if (enteredusername==correctusername)
	{
		cout<<"welcome!login successful:"<<endl;
	}
	else
	{
		cout<<"invalid input,username cannot matched!"<<endl;
	}
	return 0;
}
