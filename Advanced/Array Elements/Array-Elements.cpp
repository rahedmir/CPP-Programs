//Write a program to input 'n' number of elements into an array & display the elements

#include <iostream>

using namespace std;

int main()
{
	int x,i;
	
	cout<<"Enter the number of items "<<endl;
	cin>>x;
	
	int *arr=new int(x);
	
	cout<<"Enter "<<x<<" items"<<endl;
	
	for(i=0;i<x;i++)
	{
		cin>>arr[i];
	}
	
	for(i=0;i<x;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
