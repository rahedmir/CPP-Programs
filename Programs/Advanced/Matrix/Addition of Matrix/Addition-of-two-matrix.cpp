//Write a program to perform the addition of two Matrices

#include <iostream>

using namespace std;

int main()
{
	int col,row,i,j;
	int a[20][20], b[20][20], c[20][20];
	
	cout<<"Enter the number of rows "<<endl;
	cin>>row;
	cout<<"Enter the number of columns "<<endl;
	cin>>col;
	
	cout<<"Enter "<<row*col<<" elements of first Matrix"<<endl;
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cin>>a[i][j];
		}
		
	}
	
	cout<<"Enter "<<row*col<<" elements of second Matrix"<<endl;
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cin>>b[i][j];
		}
		
	}
	
	cout<<"Sum of the two Matrix is "<<endl;
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
		   c[i][j] = a[i][j] + b[i][j];
		   
		   cout<<c[i][j]<<"  ";
		   
		}
		cout<<endl;
	}
	
	return 0;
}
