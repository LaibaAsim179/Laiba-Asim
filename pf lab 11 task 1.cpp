#include<iostream>
using namespace std;
struct book
{
	char bookstitle[20];
	char author[20];
	int yearofpublication;
	int numberofpages;
};
int main()
{
	book b1[5];
	for(int i=0;i<5;i++)
	{
		cout<<"enter the details for book:"<<i+1<<endl;
		cout<<"book'stitle:"<<endl;
		cin.getline(b1[i].bookstitle,20);
		cout<<"enter author:"<<endl;
		cin.getline(b1[i].author,20);
		cout<<"enter year of publication:"<<endl;
		cin>>b1[i].yearofpublication;
		cout<<"enter number of pages:"<<endl;
		cin>>b1[i].numberofpages;
		cin.ignore();
	}
	for(int i=0;i<5;i++)
	{
		cout<<"\n book informations:\n";
		cout<<"book title:"<<b1[i].bookstitle;
		cout<<"author:"<<b1[i].author;
		cout<<"year of publication:"<<b1[i].yearofpublication;
		cout<<"number of pages:"<<b1[i].numberofpages;
	}
	return 0;
}
