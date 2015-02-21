#include <list>
#include <vector>
#include <deque>
#include <iostream>

using namespace std;

int main()
{
	//containers
	vector<int> v(10);
	deque<int> d(10);
	list<int> l(10);
	
	int i = 1;
	//vector
	vector<int>::iterator itV;
	for(itV = v.begin()  ; itV != v.end(); ++itV,++i)
	{
		*itV = i;
	}
	for(itV = v.begin();  itV != v.end(); ++itV)
	{
		cout << *itV << " ";
	}
	cout<<endl;
	//deque
	deque<int>::iterator itD = d.begin();
	for(itD = d.begin()  ; itD != d.end(); ++itD,++i)
	{
		*itD = i;
	}
	for( itD = d.begin() ; itD != d.end(); ++itD)
	{
		cout << *itD << " ";
	}
	cout<<endl;

	list<int>::iterator itL = l.begin();
	for( ; itL != l.end(); ++itL,++i)
	{
		*itL = i;
	}
	for( itL = l.begin() ; itL != l.end(); ++itL)
	{
		cout << *itL << " ";
	}
	cout<<endl;
	return 0;
}
/*
Console output:
1 2 3 4 5 6 7 8 9 10
11 12 13 14 15 16 17 18 19 20
21 22 23 24 25 26 27 28 29 30
*/
