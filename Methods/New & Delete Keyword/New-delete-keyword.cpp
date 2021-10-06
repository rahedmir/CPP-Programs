//New-Delete Keyword

#include <iostream>

using namespace std;

int main()
{
	int n;
	float *p,total=0;
	
	cout<<"Enter number of subjects "<<endl;
	cin>>n;
	
	p=new float[n];
	
	cout<<"Enter Marks "<<endl;
	
	for(int i=0;i<n;i++)
	{
		cout<<"Subject "<<i+1<<" ";
		cin>>p[i];
	}
	
	cout<<"Total Marks is ";
	
	for(int i=0;i<n;i++)
	{
		total=total+p[i];
	}
	
	cout<<total;
	
	delete[] p;
	
	return 0;
}
