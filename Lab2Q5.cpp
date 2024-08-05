#include<iostream>
 #include<conio.h>
 #include<string.h>
 using namespace std;
 class city
 {      float distance;
	char cityname[20];
	float distfromktm;
	public:
	void getdata(char x[],float y)
	{	strcpy(cityname,x);
		distfromktm = y;
	 }
	 void display()
	 {
	 cout<<"City name is    "<<cityname<<endl;
	 cout<<"Distance is    "<<distfromktm<<endl;
	 }
	 void adddistance(city,city);
	 };
	 void city :: adddistance(city c1, city c2)
	 {  distance = c1.distfromktm + c2.distfromktm;
	 cout<<"total distance is="<<distance<<endl;
	 }
	 int main()
	 {
	
	 city s1,s2,s3;

	 s1.getdata("pokhara",250.50);

	 s2.getdata("dhangadi",350.56);
	 s1.display();
	 s2.display();
	 s3.adddistance(s1,s2);
	return 0;


}
