//Write a program to print following structure

/*   A
     BC
     DEF
     GHIJ
     KLMNO
     
*/

#include <iostream>

using namespace std;

int main()
{
	int x,i,j,k=64;
	
	cout<<"Enter a number "<<endl;
	cin>>x;
	
	for(i=1;i<=x;i++)
	{
		for(j=1;j<=i;j++)
		{
			k++;
		    cout<<(char)k;
		}
		
		cout<<endl;	
	}
	
	return 0;
}
