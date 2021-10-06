//Destructor

#include <iostream>

using namespace std;

class clg
{
  public:
   clg()
   {
      cout<<"Hello from Constructor "<<endl;	
   }
   ~clg()
   {
   	  cout<<"Hello from Destructor "<<endl;	
   }
};

void fun()
{
	clg c;
}

int main()
{
	fun();
	return 0;
}
