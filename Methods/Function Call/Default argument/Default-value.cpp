//Default Argument

#include <iostream>

using namespace std;

int add(int a, int b, int c=0, int d=0)
{
	return a+b+c+d;
}

int main()
{
	cout<<add(10,10)<<endl;
	cout<<add(10,10,10)<<endl;
	cout<<add(10,10,10,10)<<endl;
	return 0;
}
