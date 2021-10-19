//Inline Function

#include <iostream>

using namespace std;

inline int add(int,int);

int main()
{
	
	int sum;

	sum=add(5,6);
	cout<<"The Sum is "<<sum<<endl;
	
	return 0;
}

int add(int x,int y)
{
	return x+y;
}
