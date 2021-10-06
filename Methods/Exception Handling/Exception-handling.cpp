//Exception Handling

#include <iostream>

using namespace std;

int main()
{
	int x=-1;
	
	cout <<"Before try "<<endl;
	
	try
	{
		cout <<"Inside try "<<endl;
		if(x<0)
		{
			throw 10.1;
	
			cout <<"After throw (Never executed) "<<endl;
		}
	}catch(int x) //Specific Exception caught here
	{
		 cout <<"Exception Caught "<<x;
	}
	catch(...) //Default Exception caught here
	{
		cout <<"All Exception Caught "<<endl;
	}
	
	return 0;
}
