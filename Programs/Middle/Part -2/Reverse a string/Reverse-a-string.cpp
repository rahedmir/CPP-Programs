//Write a program to reverse a string

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	string  s;
	int i;
	
	cout<<"Enter a string "<<endl;
	getline(cin,s);
	
	for(i=s.length()-1;i>=0;i--)
	{
		cout<<s[i];
	}
	
	return 0;
}

