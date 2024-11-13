#include<iostream>
using namespace std;
int main()
{
	int sum=0;
	int arr[5]={2,3,5,6,7};
	cout<<"element of array are:"<<endl;
	for(int i=0;i<5;i++)
	{
		sum+=arr[i];
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<"sum="<<sum<<endl;
	return 0;
}
