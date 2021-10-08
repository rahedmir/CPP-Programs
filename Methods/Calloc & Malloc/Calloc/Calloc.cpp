//Memory allocation using Calloc

#include <iostream>
#include<stdlib.h>

using namespace std;

int main()
{
	int x,*p,i;
	
	cout<<"Enter a number "<<endl;
	cin>>x;
	
	p=(int*)calloc(x, sizeof(x));
	
	if(p==NULL)
	{
		cout<<"Memory is not allocated";
		exit(0);
	}
	else
	{
		cout<<"Memory is allocated "<<endl;
		
		for(i=0;i<x;++i)
		{
			p[i]=i+1;
			cout<<p[i]<<" ";
		}
		
	}
	
	free(p);

return 0;	
}
