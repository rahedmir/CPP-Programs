//Write a program to check a string Palindrome or not

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	char ch[100],ch1[100],ch2[100],c;
	int i,len;
	
	cout<<"Enter a string "<<endl;
	cin>>ch;
	
	len=strlen(ch);
	
	for(i=0;i<len;i++)
	{
		ch1[i]=ch[len-i-1];	
	}
	
	if(strcmp(ch,ch1)==0)
	{
		cout<<"Input string is Palindrome"<<endl;
	}
	else
	{
		cout<<"Input string is not Palindrome"<<endl;
	}
	
	return 0;
}
