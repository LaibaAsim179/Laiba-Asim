#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string str1="hello,";
	string str2="world!";
	//concatenating using + operator
	//str1.append(str2);
	string result=str1+str2;
	cout<<"concatenated string:"<<result<<endl;
	return 0;
}

