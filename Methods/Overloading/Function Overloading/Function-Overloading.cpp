//Function Overloading

#include <iostream>

using namespace std;

void print(int i) 
{
  cout << "Here is int " <<i<<endl;
}

void print(double  f) 
{
  cout << "Here is float " <<f<< endl;
}

void print(char c) 
{
  cout << "Here is char " <<c<< endl;
}
 
int main() 
{
  print(10);
  print(10.12);
  print('t');
  
  return 0;
}
