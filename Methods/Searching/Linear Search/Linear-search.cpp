//Linear Search

#include <iostream>

using namespace std;

int main()
{
	int num,search,count=0;
	
	cout<<"Enter a number ";
	cin>>num;
	
	int arr[num];
	
	cout<<"Enter "<<num<<" array elements "<<endl;
	
	for(int i=0;i<num;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Enter search value "<<endl;
	cin>>search;
	
	for(int i=0;i<num;i++)
	{
		if (arr[i]==search)
		{
			count++;
		}
	}
	
	if(count==0)
	{
		cout<<"Search value is not found in the array "<<endl;
	}
	else
	{
		cout<<search<<" is found "<<count<<" times in the array "<<endl;
	}
	
	return 0;
}
