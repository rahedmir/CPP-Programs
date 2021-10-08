//Write a program to read data from a file

#include <iostream>
#include <fstream>

/*
File opening modes ios::in, ios::out, ios::app, ios::ate, ios::binary
*/

using namespace std;

int main()
{
	ifstream f;
	
	f.open("Data.txt",ios::in);
	
	if(!f)
	{
	   cout<<"Error: file could not be opened"<<endl;
	   exit(1);	
	}
	else
	{
		char ch;
		
		ch=f.get();
		
		while(!f.eof())
		{
			cout<<ch;
			ch=f.get();
		}
		
		f.close();
	}
	
	return 0;
}
