//Write a program to display the number of characters with-space, without-space and, space

#include <iostream>

using namespace std;

int main()
{
	char ch[100];
	int tString=0,space=0,count=0,i;
	
	cout<<"Enter the string "<<endl;
	gets(ch);
	
	for(i=0;ch[i]!=0;i++)
	{
		tString++;		
	}
	
	for(i=0;i<tString;i++)
	{
		if(ch[i]==' ')
		{
			space++;
		}
	}
	
	count=tString-space;
	
	cout<<"Total number of character is "<<tString<<endl;
	cout<<"Number of character with space is "<<space<<endl;
	cout<<"Number of character without space is "<<count<<endl;
	
	return 0;
}
