#include<iostream>
using namespace std;
int i=0;
void add(int a[])
{
    cout<<"enter the number you want to add:"<<endl;
    cin>>a[i];
    i++;
    cout<<"added successfully!"<<endl;
}
void exit(int a[])
{
	
}
void search(int a[])
{
	int n;
	cout<<"enter a number that you want to search:"<<endl;
	cin>>n;
	for(int j=0;j<n;j++)
	{
		if (n==a[j])
		{
			cout<<"your search value="<<a[j]<<endl;
		}
	}
}
void update(int a[])
{
	int n;
	cout<<"enter a number that you want to update:"<<endl;
	cin>>n;
	for(int j=0;j<n;j++)
	{
		if (n==a[j])
		{
			cout<<"your new value="<<endl;
			cin>>a[j];
		}
	}
}
void del(int a[])
{
	int n;
	cout<<"enter a number that you want to update:"<<endl;
	cin>>n;
	for(int j=0;j<n;j++)
	{
		if (n==a[j])
		{
			for(int k=j;k<i;k++)
			{
				a[k]=a[k+1];
			}
		}
		i--;
		break;
	}
}
void show (int a[])
{
	for(int j=0;j<i;j++)
	{
		cout<<"\n"<<a[j];
	}
}
int main()
{
	cout<<"press1 for add"<<endl;
	cout<<"press2 for search"<<endl;
	cout<<"press3 for delete"<<endl;
	cout<<"press4 for update"<<endl;
	cout<<"press5 for show"<<endl;
	cout<<"press6 for exit"<<endl;
	p:
	int choice;
	cout<<"enter your choice:"<<endl;
	cin>>choice;
	int a[20];
	switch(choice)
	{
	case 1:
		add(a);
		break;
	case 2:
		search(a);
		break;
	case 3:
		del(a);
		break;
	case 4:
	update(a);
	break;
	case 5:
		show(a);
		break;
	case 6:
		exit(0);
		break;
	default:
		cout<<"invalid input, try again!"<<endl;
		break;
   }
   goto p;
 
}

