//Template Function
//template <class A, class B> A big(A x,B y) - for two different values

#include <iostream>

using namespace std;

template <class T> T big(T x,T y)
{
	if(x>y)
	{
		return x;
	}
	else
	{
		return y;
	}
}

int main()
{
	cout<<big(10,20);
	cout<<endl;
	cout<<big(50.56,18.80);
	
	return 0;
}
