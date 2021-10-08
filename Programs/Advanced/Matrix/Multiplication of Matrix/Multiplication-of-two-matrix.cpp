//Write a program to find the multiplication of two Matrix

#include <iostream>

using namespace std;

int main()
{
	int max1[20][20], max2[20][20], mult[20][20];
	int i,j,r1,c1,r2,c2,k;
	
	cout<<"Enter row & column size of the first Matrix "<<endl;
	cin>>r1>>c1;
	
	cout<<"Enter row & column size of the second Matrix "<<endl;
	cin>>r2>>c2;
	
	if(c1!=r2)
	{
		cout<<"Matrix multiplication is not possible "<<endl;
	}
	else
	{
		cout<<"Enter "<<r1*c1<<" elements of the first Matrix "<<endl;
		
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				cin>>max1[i][j];
			}
		}
		
		cout<<"Enter "<<r2*c2<<" elements of the second Matrix "<<endl;
		
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				cin>>max2[i][j];
			}
		}
		
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				mult[i][j]=0;
			}
		}
		
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{    
			    
				for(k=0;k<c1;k++)
				{
					mult[i][j] += max1[i][k]*max2[k][j];
					
				}
			}
		}
		
		cout<<"Multiplication of the two matrix is "<<endl;
		
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
			
				cout<<mult[i][j]<<" ";
			}
			cout<<endl;
		}
	}
	
	return 0;
}
