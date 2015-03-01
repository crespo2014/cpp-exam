#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <iterator>

using namespace std;

//template
void print(const int & value) 
{
	cout<<value<<" ";
}

int main()
{
	cout<<"Simple swap of values:\n";
	int a=10, b=100;
	cout<<"a: "<<a<<" b: "<<b<<endl;
	swap(a,b);
	cout<<"After swap:\n";
	cout<<"a: "<<a<<" b: "<<b<<endl;
	cout<<endl;

	cout<<"Simple iterator swap:\n";
	int t[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	list<int> l1(t,t+10);
	for_each(l1.begin(), l1.end(), print); cout<<endl;
	cout<<"Swapping first and last elements:\n";
	for_each(l1.begin(), l1.end(), print); cout<<endl;
	list<int>::iterator it = l1.end(); 
	advance(it, -1);
	iter_swap(l1.begin(), it);
	cout<<"After swap:\n";
	for_each(l1.begin(), l1.end(), print); cout<<endl;
	cout<<endl;

	cout<<"Swapping iterator ranges - switching halves of the list:\n";
	for_each(l1.begin(), l1.end(), print); cout<<endl;
	advance(it,-4);
	swap_ranges(l1.begin(), it, it);
	cout<<"After swap:\n";
	for_each(l1.begin(), l1.end(), print); cout<<endl;
	
	return 0;
}
/*
Console output:
Simple swap of values:
a: 10 b: 100
After swap:
a: 100 b: 10

Simple iterator swap:
1 2 3 4 5 6 7 8 9 10
Swapping first and last elements:
1 2 3 4 5 6 7 8 9 10
After swap:
10 2 3 4 5 6 7 8 9 1

Swapping iterator ranges - switching halves of the list:
10 2 3 4 5 6 7 8 9 1
After swap:
6 7 8 9 1 10 2 3 4 5
*/
