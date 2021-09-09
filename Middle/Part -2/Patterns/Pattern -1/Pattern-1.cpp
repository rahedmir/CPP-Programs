//Write a program to print following structure

/*   *
     **
     ***
     ****
     *****
     
*/

#include <iostream>

using namespace std;

int main()
{
	int x,i,j;
	
	cout<<"Enter a number "<<endl;
	cin>>x;
	
	for(i=1;i<=x;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	
	return 0;
}
