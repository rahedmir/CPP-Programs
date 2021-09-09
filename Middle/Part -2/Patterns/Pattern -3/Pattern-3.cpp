//Write a program to print following structure

/*   1
     22
     333
     4444
     55555
     
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
			cout<<i;
		}
		cout<<endl;
	}
	
	return 0;
}
