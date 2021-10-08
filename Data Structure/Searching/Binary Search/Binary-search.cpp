//Binary Search
//-> ascending or descending order 

#include <iostream>

using namespace std;

int main()
{
	int num,first=0,middle=0,last,search,a=1,d=1;
	
	cout<<"Enter a number "<<endl;
	cin>>num;
	
	int arr[num];
	
	cout<<"Enter "<<num<<" array elements "<<endl;
	
	for(int i=0;i<num;i++)
	{
		cin>>arr[i];
	}
	
   int i=0;	
   
   while ((a==1||d==1) && i<num-1) 
   {
     if (arr[i]<arr[i+1])
     {
    	 d=0;
	 }  
     else if (arr[i]>arr[i+1])
     {
    	 a=0;
	 }   
    i++; 
   }
	
	cout<<"Enter search value "<<endl;
	cin>>search;
	
	last=num-1;
	middle=(first+last)/2;
	
	 if(a==1)
	{
		while(first<=last)
	    {
		if(arr[middle]<search)
		{
			first=middle+1;
			middle=(first+last)/2;
		}
		else if(arr[middle]==search)
		{
			cout<<search<<" found in the array "<<endl;
			break;
		}
		else if(arr[middle]>search)
		{
			last=middle-1;
			middle=(first+last)/2;
		}
	    }
	}
	
	if(d==1)
	{
		while(first<=last)
	    {
		if(arr[middle]<search)
		{
			last=middle-1;
			middle=(first+last)/2;
		}
		else if(arr[middle]==search)
		{
			cout<<search<<" found in the array "<<endl;
			break;
		}
		else if(arr[middle]>search)
		{
			
			first=middle+1;
			middle=(first+last)/2;
		}
	    }
	}
	
	
	if(first>last)
	{
		cout<<"Search value is not found in the array "<<endl;
	}
	
		
	return 0;
}
