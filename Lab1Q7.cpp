#include<iostream>
using namespace std;
void swap ( int &a, int &b)
	{          int t = a;
		a = b;
		b = t;		
	}

int main()
{	int m = 10;
	int n = 20;
	cout<<"\nBefore swap  "<<"m= "<<m<<"n= "<<n;
	swap(m, n);
	cout<<"\nAfter swap   "<<"m= "<<m<<"n= "<<n;
	return 0;
}

