#include<iostream>
using namespace std;
class addition
{
	private:
	int a, b, sum;
	
	public:
		void getdata();
	
		void processing();
		
		void display();
		
	
};
void addition::getdata()
		{
			cout<<"\n Enter two numbers";
			cin>>a>>b;
		}
		
				
void addition::display()
		{
			cout<<"\n Sum of two numbers is ="<<sum;
		}

void addition:: processing()
		{
			sum=a+b;
		}


int main()
{
	addition a;
	a.getdata();
	a.processing();
	a.display();
	return 0;
}
