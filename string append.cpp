#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string str1="hello,";
	string str2="world!";
	string result=str1.append(str2);
	cout<<"string:"<<result<<endl;

	return 0;
}
