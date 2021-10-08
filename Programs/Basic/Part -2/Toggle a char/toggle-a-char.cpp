//Write a program to toggle a character

#include <iostream>

using namespace std;

int main()
{
	char ch; 
	
	cout<<"Before toggle "<<endl;
	
	cout<<"Enter a character "<<endl;
	cin>>ch;
	
	cout<<"After toggle "<<endl;
	
	if(ch>=97)
	{
		cout<<char(ch-32)<<endl;
	}
	else if (ch>=65)
	{
		cout<<char(ch+32)<<endl;
	}
	else
	{
		cout<<"Bad Character!!"<<endl;
	}
	
	return 0;
}
