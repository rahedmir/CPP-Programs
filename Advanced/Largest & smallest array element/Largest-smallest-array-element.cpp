//Write a program to find the largest & smallest element from an array with it's index

#include <iostream>

using namespace std;

int main()
{
	int x,i,max,min,ind_max=0,ind_min=0;
	
	cout<<"Enter the number of items "<<endl;
	cin>>x;
	
	int *arr=new int(x);
	
	cout<<"Enter "<<x<<" items"<<endl;
	
	for(i=0;i<x;i++)
	{
		cin>>arr[i];
	}
	
	max=arr[0];
	min=arr[0];
	
	for(i=0;i<x;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
			ind_max=i+1;
		}
		
		if(arr[i]<min)
		{
			min=arr[i];
			ind_min=i+1;
		}
	}
	
	cout<<"Maximum number is "<<max<<" and it's index is "<<ind_max<<endl;
	cout<<"Minimum number is "<<min<<" and it's index is "<<ind_min<<endl;
	
	return 0;
}
