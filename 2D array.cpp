#include<iostream>
using namespace std;
int main()
{
	int rows,columns,sum=0,avg;
	cout<<"enter the number of rows:"<<endl;
	cin>>rows;
	cout<<"enter the number of columns:"<<endl;
	cin>>columns;
	int arr[rows][columns];
	cout<<"enter elements of array:\n";
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<columns;j++)
		{
			cout<<"elements["<<i<<"]["<<j<<"]:";
			cin>>arr[i][j];
			sum+=arr[i][j];
			avg=sum/arr[i][j];
		}
	}
	cout<<"\n the 2D array is:\n";
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<columns;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
		cout<<"sum="<<sum<<endl;
		cout<<"avg="<<avg<<endl;
	}
	return 0;
}
