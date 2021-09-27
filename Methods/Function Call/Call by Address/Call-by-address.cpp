//Call by Address

#include<iostream>

using namespace std;

int add(int *a, int *b)
{
   int c;
   c=*a+*b;
   return c;	
}

int main()
{
	int x,y;
	
	x=10;
	y=10;
	
	cout<<add(&x,&y);
	
	return 0;
}
