//Write a program to check the array order (ascending or descending)

#include <iostream>

using namespace std;

int main()
{
	int num,a=1,d=1;
	
	cout<<"Enter a number "<<endl;
	cin>>num;
	
	int arr[num];
	
	cout<<"Enter "<<num<<" array elements"<<endl;
	
	for(int i=0;i<num;i++)
	{
		cin>>arr[i];
	}
	
	int i=0;
	
	while((a==1||d==1) && i<num-1)
	{
		if(arr[i]<arr[i+1])
		{
			d=0;
		}
		else if(arr[i]>arr[i+1])
		{
			a=0;
		}
		
		i++;
	}
	
	if(a==1)
	{
		cout<<"The array is in the Ascending order"<<endl;
	}
	else if(d==1)
	{
		cout<<"The array is in the Descending order"<<endl;
	}
	else
	{
		cout<<"Neither ascending nor, in the descending order"<<endl;
	}
	
	return 0;
}
