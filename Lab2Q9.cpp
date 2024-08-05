#include <iostream>
       using namespace std;
	int count = 0;
	class  destruct
	{
	public:
	destruct ()
		{
		count++;
		cout <<"\n no. of object created is" << count;
		}
	  ~destruct ()
		{
		cout <<"\n no. of object destroyed" <<count;
		count --;
		}
	};
	int main()
		{
		destruct d1, d2, d3;
		return 0;
		}
