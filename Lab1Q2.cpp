#include <iostream>
using namespace std;

void print(int i) 
	{
	cout << " \nThis is int " << i << endl;
	}
	void print(double f) 
	{
	cout << " \nThis is float " << f << endl;
	}
	void print(char c) 
	{
	cout << " \nThis is character  " << c << endl;
	}	

int main() 
{
print(10);
print(10.10);
print('t');
return 0;
}
