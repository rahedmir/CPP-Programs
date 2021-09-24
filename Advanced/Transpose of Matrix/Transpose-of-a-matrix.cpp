//Write a program to find the transpose of a Matrix

#include <iostream>

using namespace std;

int main()
{
  int arr1[20][20], arr2[20][20];
  int i,j,r,c;
  
  cout<<"Enter the number of row & columns of the Matrix "<<endl;
  cin>>r>>c;
  
  cout<<"Enter the "<<r*c<<" elements of the Matrix "<<endl;
  
  for(i=0;i<r;i++)
  {
  	for(j=0;j<c;j++)
  	{
  	  cin>>arr1[i][j];	
	}
  }
  
  cout<<"Transpose of the Matrix is "<<endl;
  
  for(i=0;i<c;i++)
  {
  	for(j=0;j<r;j++)
  	{
  		arr2[i][j]=arr1[j][i];
  		
  		cout<<arr2[i][j]<<" ";
	}
	cout<<endl;
  }
  
  return 0;	
} 
