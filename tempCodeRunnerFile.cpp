#include <iostream>
using namespace std;
template<class T1>
class Test
{
	T1 a;
	public:
	void add (T1 x, T1 y)
{
	a=x+y;
}
	void mul(T1 x, T1 y)
{
	a = x * y;
}
	void div(T1 x, T1 y)
{
	a = x/y;
}
	void sub(T1 x, T1 y)
{
	a = x -y;
}
	void show()
{
	cout<<a<<"\n";
}
};
int main()