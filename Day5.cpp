#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"size=";
	cin>>size;
	int arr[size];
	int temp;
	int flag=0;
	
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
		for(int i=0;i<size;i++)
	{
		cout<<arr[i];
	}
	for(int i=0;i<size;i++)
	{
		if(arr[i]>arr[i+1])
		{
			flag=1;
			break;
			//cout<<"yes";
		}
		
		if(flag==0)
		{
			cout<<"yes";
		}	
		else
		{
			cout<<"no";
		}
//	}
return 0;
}
