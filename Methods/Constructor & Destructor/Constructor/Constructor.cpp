//Constructor

#include <iostream>

using namespace std;

class cls
{

  private:
  	
  	int x,y;
	
  public:
  	
  	cls() //Default Constructor
  	{
	  cout<<"Hello from Default Constructor "<<endl;
	} 
  	
  	cls(int a, int b) //Parameterized Constructor
  	{
  		x=a;
  		y=b;
	}
	
	void add_num()
	{
		cout<<x+y<<endl;
	}
	
	cls(cls &c) //Copy Constructor
	{
		x=c.x;
		y=c.y;
	}
	
	void display()
	{
		cout<<"X="<<x<<" and "<<"Y="<<y<<endl;
	}
		
};

int main()
{
	cls df;
	
	cls pm(10,20);
	pm.add_num();
	
	cls cp(pm);
	cp.display();
	
	return 0;
}
