#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;


void print(const int & value) 
{
	cout<<value<<" ";
}

int main()
{
	int t[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	vector<int> v1(t, t+10);
	cout<<"Source collection:\n";
	cout<<"v1: "; for_each(v1.begin(), v1.end(), print); cout<<endl<<endl;
	
	cout<<"Randomly shuffling elements:\n";
	random_shuffle(v1.begin(), v1.end());
	cout<<"v1: "; for_each(v1.begin(), v1.end(), print); cout<<endl<<endl;

	cout<<"Randomly shuffling elements - again:\n";
	random_shuffle(v1.begin(), v1.end());
	cout<<"v1: "; for_each(v1.begin(), v1.end(), print); cout<<endl<<endl;

	return 0;
}
/*
Console output:
Source collection:
v1: 1 2 3 4 5 6 7 8 9 10

Randomly shuffling elements:
v1: 9 2 10 3 1 6 8 4 5 7

Randomly shuffling elements - again:
v1: 8 1 7 4 3 9 2 5 6 10
*/
