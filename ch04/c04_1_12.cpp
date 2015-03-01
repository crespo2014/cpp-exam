#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;


void print(const int & value) 
{
	cout<<value<<" ";
}

struct Pred
{
	int value;
	Pred(const int & v):value(v){}
	bool operator()(const int & a)
	{
		return a < value;
	}
};

int main()
{
	int t[]={1, 10, 8, 4, 5, 6, 7, 3, 9, 2};
	vector<int> v1(t, t+10);
	cout<<"Source collection:\n";
	cout<<"v1: "; for_each(v1.begin(), v1.end(), print); cout<<endl<<endl;
	
	cout<<"Normal partitioning:\n";
	vector<int>::iterator it = partition(v1.begin(), v1.end(), Pred(5));
	cout<<"Partitioning into two groups: < 5 and > 5:\n";
	cout<<"v1: "; for_each(v1.begin(), v1.end(), print); cout<<endl;
	cout<<"The first group: "; for_each(v1.begin(), it, print); cout<<endl;
	cout<<"The second group: "; for_each(it, v1.end(), print); cout<<endl<<endl;

	cout<<"Stable partitioning:\n";
	copy(t,t+10, v1.begin()); //reinitializing collection;
	it = stable_partition(v1.begin(), v1.end(), Pred(5));
	cout<<"Partitioning into two groups: < 5 and > 5:\n";
	cout<<"v1: "; for_each(v1.begin(), v1.end(), print); cout<<endl;
	cout<<"The first group: "; for_each(v1.begin(), it, print); cout<<endl;
	cout<<"The second group: "; for_each(it, v1.end(), print); cout<<endl;

	return 0;
}
/*
Console output:
Source collection:
v1: 1 10 8 4 5 6 7 3 9 2

Normal partitioning:
Partitioning into two groups: < 5 and > 5:
v1: 1 2 3 4 5 6 7 8 9 10
The first group: 1 2 3 4
The second group: 5 6 7 8 9 10

Stable partitioning:
Partitioning into two groups: < 5 and > 5:
v1: 1 4 3 2 10 8 5 6 7 9
The first group: 1 4 3 2
The second group: 10 8 5 6 7 9
*/
