//Bubble Sort

#include <iostream>

using namespace std;

int main()
{
	int num,i,j,temp;
	
	cout<<"Enter a number ";
	cin>>num;
	
	int arr[num];
	
	cout<<"Enter "<<num<<" array elements "<<endl;
	
	for(int i=0;i<num;i++)
	{
		cin>>arr[i];
	}
	
	for(i=0;i<num-1;i++)
	{
		for(j=0;j<num-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
	cout<<"Sorted array elements are "<<endl;
	
	for(int i=0;i<num;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	
	return 0;
}
