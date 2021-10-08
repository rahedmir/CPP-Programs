//Operator Overloading

#include<iostream>

using namespace std;

class add
{
	private:
		int num;
		
	public:
		void operator + (int x)
		{
			num=1;
			num=num+2+x;
			cout<<"The Number is "<<num<<endl;
		}
};

int main()
{
	add a;
	a.operator +(5);
	return 0;
}
