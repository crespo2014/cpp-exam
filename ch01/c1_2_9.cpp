#include <vector>
#include <iostream>

using namespace std;

class A
{
	int number;
	int number2;
public:
	A(int _number):number(_number),number2(0)
	{
		cout<<"Normal constructor\n";
	}
	A()
	{
		cout<<"Default constructor\n";
	}
	
	A(const A& source)
	{
		number = source.number;
		number2 = source.number2;
		cout<<"Copy constructor\n";
	}

	A & operator=(const A& source)
	{
		number = source.number;
		number2 = source.number2;
		cout<<"Assignment operator\n";
		return *this;
	}
};

int main()
{
	vector<A> v1(1); //(1)
	v1.push_back(1); //(2)  1 to const A&, vectro try to do move from const A&, create new element from const A&
	v1[0]=10; 	   //(3)
	return 0;
}
/*
Default constructor  1
Normal constructor   2
Copy constructor     2
Copy constructor     2
Normal constructor   3
Assignment operator  3
 */
/*
Output:
Default constructor ****(1)
Copy constructor     ****(1)
Normal constructor ****(2)
Copy constructor     ****(2)
Copy constructor     ****(2)
Normal constructor ****(3)
Assignment operator  ****(3)
*/
