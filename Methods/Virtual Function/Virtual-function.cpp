//Virtual Function

#include <iostream>
#include <stdlib.h>

using namespace std;

class X
{
	public:
		virtual void fun()
		{
			cout<<"Hello from parent class";
		}
};

class Y: public X
{
	public:
		void fun()
		{
			cout<<"Hello from child class";	
		}
};


int main()
{
	X *pa;
	Y ch;
	pa=&ch;
	pa->fun();
	
	return 0;
}
