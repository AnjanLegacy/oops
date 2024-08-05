#include <iostream>
       using namespace std;
	class  param
		{
			int a, b;
			public:
			param (int, int);
			void display ()
			{
			cout <<a<<"  "<<b<<endl;
			}
		};
		param:: param (int x, int y)
			{
			a = x; 
			b = y;
			}
		int main()
		{
			param p1 = param (10, 20); // expilit call
			param p2(50,60);//implicit call
			p1.display();
			p2.display();
		}	
