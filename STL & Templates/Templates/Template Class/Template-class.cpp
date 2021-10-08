//Template Class

#include <iostream>

using namespace std;

template <class T> class Add
{
	private:
		
		T x,y;
		
	public:
		
		T add_num(T a, T b)
		{
			x=a;
			y=b;
			
			return x+y;
		}
};

int main()
{
	Add <int> in;
	Add <float> fl;
	
	cout<<in.add_num(20,10);
	cout<<endl;
	cout<<fl.add_num(5.5,2.3);
	
	return 0;
}
