#include<iostream>
using namespace std;
class student
{
	private:
		char name[20];
		char address[20];
		int roll;
		char  phone[20];
		
	public:
	void getdata()	
	{
		cout<<"\nEnter student's name, address, roll and phone number";
		cin>>name>>address>>roll>>phone;
		
	}
	
	void display()
	{
		cout<<"\n Student's name is="<<name;
		cout<<"\n Student's address is="<<address;		
		cout<<"\n Student's roll is="<<roll;
		cout<<"\n Student's phone is="<<phone;
	}
};

int main()
{
	student s;
	s.getdata();
	s.display();
	return 0;
}
