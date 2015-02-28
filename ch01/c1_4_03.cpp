#include <vector>
#include <iostream>

using namespace std;

int main()
{
	vector<int> v;
	cout<<"Size and capacity: "<<v.size() << " " << v.capacity() <<endl;

	for(int i = 0; i < 20; ++i)
	{
		v.push_back(i);
		cout<<"Size and capacity: "<<v.size() << " " << v.capacity() <<endl;
	}
	return 0;
}

/*
Console output:
Size and capacity: 0 0
Size and capacity: 1 1
Size and capacity: 2 2
Size and capacity: 3 3
Size and capacity: 4 4
Size and capacity: 5 6
Size and capacity: 6 6
Size and capacity: 7 9
Size and capacity: 8 9
Size and capacity: 9 9
Size and capacity: 10 13
Size and capacity: 11 13
Size and capacity: 12 13
Size and capacity: 13 13
Size and capacity: 14 19
Size and capacity: 15 19
Size and capacity: 16 19
Size and capacity: 17 19
Size and capacity: 18 19
Size and capacity: 19 19
Size and capacity: 20 28
*/
 

