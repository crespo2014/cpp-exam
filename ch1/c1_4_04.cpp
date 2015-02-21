#include <vector>
#include <iostream>

using namespace std;

int main()
{
	vector<int> v;
	cout<<"Size and capacity: "<<v.size() << " " << v.capacity() <<endl;
	v.reserve(15);
	cout<<"Size and capacity: "<<v.size() << " " << v.capacity() <<endl;
	cout<<"Adding elements"<<endl;
	for(int i = 0; i < 10; ++i)
	{
		v.push_back(i);
		cout<<"Size and capacity: "<<v.size() << " " << v.capacity() <<endl;
	}
	cout<<"Trying to shrink..."<<endl;
	v.reserve(10);
	cout<<"Size and capacity: "<<v.size() << " " << v.capacity() <<endl;
	return 0;
}

/*
Console output:
Size and capacity: 0 0
Size and capacity: 0 15
Adding elements
Size and capacity: 1 15
Size and capacity: 2 15
Size and capacity: 3 15
Size and capacity: 4 15
Size and capacity: 5 15
Size and capacity: 6 15
Size and capacity: 7 15
Size and capacity: 8 15
Size and capacity: 9 15
Size and capacity: 10 15
Trying to shrink...
Size and capacity: 10 15
*/
