#include<iostream>
	using namespace std;
class  Copy
		{
			int id;
			public:
			Copy() { }// constructor
				
			Copy(int x) //constructor
			{
			id = x;
			} 	
			Copy(Copy & y) //copy constructor
			{
			id = y.id;
			} 	 
			void display()
			{ cout<<id; }
		};
int main()
{		
		Copy A (20); 	// object A is created & initialized
		Copy B(A); 	// copy constructor called
		Copy C = A; 	// copy constructor called again
		Copy D; 	// D is created, not initialized
		D = A; 	// copy constructor not called
		
		cout<<"\n id of A: "; A.display();
		cout<<"\n id of B: "; B.display();
		cout<<"\n id of C: "; C.display();
		cout<<"\n id of D: "; D.display();
}	
