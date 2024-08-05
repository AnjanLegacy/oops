#include<iostream>
using namespace std;
class weight
{
	float w;
	public:
	void process(float m, float g=9.8)  //here g = 9.8 is used as default argument
	{
		w= m*g;
		cout<<"weight="<<w;
		
	}
};

int main()
{
	weight ob;
	ob.process(10,1.6);
	return 0;
}
