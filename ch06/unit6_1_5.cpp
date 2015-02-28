#include <deque>
#include <string>
#include <iostream>
#include <functional>
#include <algorithm>

using namespace std;

template<class T> void print(T start, T end) {
        for ( ;start != end; ++start) {
        		std::cout << *start << " "; 
        }
    }

int compare(int a, int b)
{
	return b < a;
}


int main()
{
	int t1[]={1, 10, 3, 4, 6, 8, 9, 2, 5, 7};
	int t2[]={8, 4, 5, 0};
	deque<int>  d1(t1,t1+10);
	deque<int>  d2(t2,t2+4);
	deque<int>  d3(d1.size()+d2.size());

	cout<<"Source collections:\n";
	cout<<"d1: "; 	print(d1.begin(), d1.end());cout<<endl;
	cout<<"d2: "; 	print(d2.begin(), d2.end());cout<<endl;

	cout<<"Trying to perform set_intersection - with not sorted collections:\n"; 
	//visual studio might rise an exception in debug mode
	deque<int>::iterator resultEnd = set_intersection(d1.begin(), d1.end(), d2.begin(), d2.end(), d3.begin());
	cout<<"d3: "; 	print(d3.begin(), resultEnd);cout<<endl<<endl;

	cout<<"Sorting is required - ascending order:\n";
	sort(d1.begin(), d1.end()); sort(d2.begin(), d2.end());
	cout<<"d1: "; 	print(d1.begin(), d1.end());cout<<endl;
	cout<<"d2: "; 	print(d2.begin(), d2.end());cout<<endl;

	cout<<"set operations:\n";
	resultEnd = set_union(d1.begin(), d1.end(), d2.begin(), d2.end(), d3.begin());
	cout<<"union: "; print(d3.begin(), resultEnd);cout<<endl;
	resultEnd = set_intersection(d1.begin(), d1.end(), d2.begin(), d2.end(), d3.begin());
	cout<<"intersection: "; print(d3.begin(), resultEnd);cout<<endl;
	resultEnd = set_difference(d1.begin(), d1.end(), d2.begin(), d2.end(), d3.begin());
	cout<<"difference: "; print(d3.begin(), resultEnd);cout<<endl;
	resultEnd = set_symmetric_difference(d1.begin(), d1.end(), d2.begin(), d2.end(), d3.begin());
	cout<<"symmetric difference: "; print(d3.begin(), resultEnd);cout<<endl<<endl;

	cout<<"Sorting is required - descending order:\n";
	sort(d1.begin(), d1.end(), compare); sort(d2.begin(), d2.end(), compare);
	cout<<"d1: "; 	print(d1.begin(), d1.end());cout<<endl;
	cout<<"d2: "; 	print(d2.begin(), d2.end());cout<<endl;

	cout<<"set operations:\n";
	resultEnd = set_union(d1.begin(), d1.end(), d2.begin(), d2.end(), d3.begin(), compare);
	cout<<"union: "; print(d3.begin(), resultEnd);cout<<endl;
	resultEnd = set_intersection(d1.begin(), d1.end(), d2.begin(), d2.end(), d3.begin(), compare);
	cout<<"intersection: "; print(d3.begin(), resultEnd);cout<<endl;
	resultEnd = set_difference(d1.begin(), d1.end(), d2.begin(), d2.end(), d3.begin(), compare);
	cout<<"difference: "; print(d3.begin(), resultEnd);cout<<endl;
	resultEnd = set_symmetric_difference(d1.begin(), d1.end(), d2.begin(), d2.end(), d3.begin(), compare);
	cout<<"symmetric difference: "; print(d3.begin(), resultEnd);cout<<endl<<endl;

	
	return 0;
}
/*
Console output:
Source collections:
d1: 1 10 3 4 6 8 9 2 5 7
d2: 8 4 5 0
Trying to perform set_intersection - with not sorted collections:
d3:

Sorting is required - ascending order:
d1: 1 2 3 4 5 6 7 8 9 10
d2: 0 4 5 8
set operations:
union: 0 1 2 3 4 5 6 7 8 9 10
intersection: 4 5 8
difference: 1 2 3 6 7 9 10
symmetric difference: 0 1 2 3 6 7 9 10

Sorting is required - descending order:
d1: 10 9 8 7 6 5 4 3 2 1
d2: 8 5 4 0
set operations:
union: 10 9 8 7 6 5 4 3 2 1 0
intersection: 8 5 4
difference: 10 9 7 6 3 2 1
symmetric difference: 10 9 7 6 3 2 1 0
*/
