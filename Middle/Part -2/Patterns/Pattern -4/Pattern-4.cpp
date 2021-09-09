//Write a program to print following structure

/*   1
     23
     456
     78910
     1112131415
     
*/

#include <iostream>

using namespace std;

int main()
{
	int x,i,j,k=0;
	
	cout<<"Enter a number "<<endl;
	cin>>x;
	
	for(i=1;i<=x;i++)
	{
		for(j=1;j<=i;j++)
		{
			k++;
			cout<<k;	
		}
		
		cout<<endl;
		
	}
	
	return 0;
}
