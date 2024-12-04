#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char source[]="hello, world!";
	char destination[50];
	strcpy(destination, source);
	cout<<"source string:"<<source<<endl;
	cout<<"destination string:"<<destination<<endl;
	return 0;
}
