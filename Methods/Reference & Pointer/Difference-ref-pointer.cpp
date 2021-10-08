//Difference between Pointer & Reference variable

#include <iostream>

using namespace std;

int main()
{
	int x=20, *y; //Pointer
	y=&x;
	y++;
	cout<<y<<" "<<x<<endl;
	
	int a=20; //Reference
	int &b=a;
	b++;
	cout<<b<<" "<<a<<endl;
	
	return 0;
}
