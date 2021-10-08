//Write a program to write data in a file
/*
File opening modes ios::in, ios::out, ios::app, ios::ate, ios::binary
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream f;
	
	f.open("Data.txt",ios::app);
	
    if(!f)
	{
	   cout<<"Error: file could not be opened"<<endl;
	   exit(1);	
	}
	else
	{
		cout<<"File created/updated successfully!";
		f<<"\nHello World!";
		f.close();
	}
	
	return 0;
}
