////Write a program to print the minimum value of an array that are multiples of 11

#include <iostream>

using namespace std;

int main()
{
	int x,i,min;
	
	cout<<"Enter a number ";
	cin>>x;
	
	int *arr=new int(x);
	
	cout<<"Enter "<<x<<" elements of the array"<<endl;
	
	for(i=0;i<x;i++)
	{
		cin>>arr[i];
	}
	
	min=arr[0];
	
	for(i=0;i<x;i++)
	{
		if(arr[i]%11==0 && arr[i]!=0)
		{
			if(arr[i]<min)
			{
				min=arr[i];	
			}
							
		}
		
	}
	
   if(min%11!=0)
	{
		cout<<"Can't find the minimum value that multiples of 11"<<endl;
	}
	else
	{
		cout<<min<<endl;
	}
	
	return 0;
}
