#include<iostream>
#include<string.h>
#include<stdint.h>
using namespace std;
class student
{
	private:
		char name[20];
		char address[20];
		int roll;
		long long phone;
		
	public:
		void getdata(char x[],char y[],int z,long long w);
		void display();
};	
	void student::getdata(char x[],char y[],int z,  long long w)	
	{
	strcpy(name,x);
	strcpy(address,y);
	roll = z;
	phone=w;
		
	}
	
	void student::display()
	{
		cout<<"\n Student's name is="<<name;
		cout<<"\n Student's address is="<<address;		
		cout<<"\n Student's roll is="<<roll;
		cout<<"\n Student's phone is="<<phone;
	}


int main()
{
	student s;
	char name[20];
	char address[20];
	cout<<"\n Enter name"; cin>>name;
	cout<<"\n Enter address"; cin>>address;
	s.getdata(name,address, 5001, 9841392833);
	s.display();
	return 0;
}
