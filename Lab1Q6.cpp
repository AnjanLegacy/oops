#include<iostream>
using namespace std;
int main()
{
int m=5;
int &n=m;

cout<<"m="<<m<<"  n="<<n<<endl;
n++;
//n is reference of m so m and n have now same value
cout<<"m="<<m<<"  n="<<n<<endl;
}
