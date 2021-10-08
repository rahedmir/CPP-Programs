//Friend function using class-object as an argument

#include<iostream>

using namespace std;

class B;
class A
{
	private:
		int a;
	public:
		friend int fun(A,B);
		setData(int x)
		{
			a = x;
		}
};

class B
{
	private:
		int b;
	public:
		friend int fun(A,B);
		setData(int y)
		{
			b = y;
		}
};

int fun(A obj1, B obj2)
{
	return obj1.a + obj2.b;
}

int main()
{
	A o1;
	B o2;
	o1.setData(5);
	o2.setData(4);
	cout<<"Sum is "<<fun(o1,o2);
	return 0;
}
