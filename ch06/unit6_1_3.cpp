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
	int t1[]={1, 10, 3, 4, 6, 8, 9, 2};
	int t2[]={8, 4, 5, 6, 9, 7};
	deque<int> d1(t1,t1+8);
	deque<int> d2(t2,t2+6);
	deque<int>	d3(d1.size()+d2.size());

	cout<<"Source collections:\n";
	cout<<"d1: "; 	print(d1.begin(), d1.end());cout<<endl;
	cout<<"d2: "; 	print(d2.begin(), d2.end());cout<<endl;
	copy(d1.begin(), d1.end(), d3.begin());
	copy(d2.begin(), d2.end(), d3.begin()+d1.size());
	cout<<"d3: "; 	print(d3.begin(), d3.end());cout<<endl;

	cout<<"Trying to merge (in place) not sorted collections:\n"; 
	//visual studio might rise an exception in debug mode
	inplace_merge(d3.begin(), d3.begin()+d1.size(), d3.end());
	cout<<"d3: "; 	print(d3.begin(), d3.end());cout<<endl<<endl;

	cout<<"Sorting is required - ascending order:\n";
	sort(d1.begin(), d1.end()); sort(d2.begin(), d2.end());
	copy(d1.begin(), d1.end(), d3.begin());
	copy(d2.begin(), d2.end(), d3.begin()+d1.size());
	cout<<"d1: "; 	print(d1.begin(), d1.end());cout<<endl;
	cout<<"d2: "; 	print(d2.begin(), d2.end());cout<<endl;
	cout<<"d3: "; 	print(d3.begin(), d3.end());cout<<endl;

	cout<<"Merging:\n";
	inplace_merge(d3.begin(), d3.begin()+d1.size(), d3.end());
	cout<<"d3: "; 	print(d3.begin(), d3.end());cout<<endl<<endl;

	cout<<"Sorting is required - descending order:\n";
	sort(d1.begin(), d1.end(), compare); sort(d2.begin(), d2.end(), compare);
	copy(d1.begin(), d1.end(), d3.begin());
	copy(d2.begin(), d2.end(), d3.begin()+d1.size());
	cout<<"d1: "; 	print(d1.begin(), d1.end());cout<<endl;
	cout<<"d2: "; 	print(d2.begin(), d2.end());cout<<endl;
	cout<<"d3: "; 	print(d3.begin(), d3.end());cout<<endl;

	cout<<"Merging:\n";
	inplace_merge(d3.begin(), d3.begin()+d1.size()-1, d3.end(), compare);
	cout<<"d3: "; 	print(d3.begin(), d3.end());cout<<endl;
	return 0;
}
/*
Console output:
Source collections:
d1: 1 10 3 4 6 8 9 2
d2: 8 4 5 6 9 7
d3: 1 10 3 4 6 8 9 2 8 4 5 6 9 7
Trying to merge (in place) not sorted collections:
d3: 1 10 3 4 6 8 9 2 8 4 5 6 9 7

Sorting is required - ascending order:
d1: 1 2 3 4 6 8 9 10
d2: 4 5 6 7 8 9
d3: 1 2 3 4 6 8 9 10 4 5 6 7 8 9
Merging:
d3: 1 2 3 4 4 5 6 6 7 8 8 9 9 10

Sorting is required - descending order:
d1: 10 9 8 6 4 3 2 1
d2: 9 8 7 6 5 4
d3: 10 9 8 6 4 3 2 1 9 8 7 6 5 4
Merging:
d3: 10 9 8 6 4 3 2 1 9 8 7 6 5 4
*/

 
