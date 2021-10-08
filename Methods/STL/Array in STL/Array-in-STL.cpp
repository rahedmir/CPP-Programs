//Array in STL (Standard Template Library)

#include <iostream>
#include <array>

using namespace std;

int main()
{
	array <int,4> arr={1,2,3,4};
	array <int,4> arr2={10,20,30,40};
	
	cout<<arr.at(0)<<endl; //Array index
	cout<<arr[1]<<endl;
	cout<<arr.front()<<endl; //Array front value
	cout<<arr.back()<<endl; //Array back value
	
	arr.fill(10); //Fillup the Array with the same value
	
	for(int i=0;i<4;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	cout<<endl;
	
	arr.swap(arr2); //Swap the values between two similar Arrays
	
	for(int i=0;i<4;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	cout<<endl;
	
	for(int i=0;i<4;i++)
	{
		cout<<arr2[i]<<" ";
	}
	
	cout<<endl;
	
	cout<<"The Array size is "<<arr.size(); //Return the size of the Array
	
	return 0;
}
