//Write a program to print the following structure

/* 11
   1221
   123321
   12344321
   1234554321
*/

#include <iostream>

using namespace std;

int main()
{
	int x,i,j;
	
	cout<<"Enter a number "<<endl;
	cin>>x;
	
	for(j=1;j<=x;j++)
	{
		  for(i=1;i<=j;i++)
	      { 
		  cout<<i;
	      }
	
	      for(i=j;i>0;i--)
	      {
		  cout<<i;
	      }
	
		cout<<endl;
	}
	
	return 0;
}
