#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

using namespace std;

void print(const int & value) 
{
	cout<<value<<" ";
}


int main()
{
	int t[]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	list<int> l1(t, t+10);
	cout<<"Source collection:\n";
	cout<<"l1: "; for_each(l1.begin(), l1.end(), print); cout<<endl<<endl;
	
	cout<<"Reversing order - copy version:\n";
	vector<int> v1(l1.size());
	reverse_copy(l1.begin(), l1.end(), v1.begin());
	cout<<"Collections after reversal\n";
	cout<<"l1: "; for_each(l1.begin(), l1.end(), print); cout<<endl;
	cout<<"v1: "; for_each(v1.begin(), v1.end(), print); cout<<endl<<endl;

	cout<<"Reversing order:\n";
	reverse(l1.begin(), l1.end());
	cout<<"Collection after reversal:\n";
	cout<<"l1: "; for_each(l1.begin(), l1.end(), print); cout<<endl;

	return 0;
}
/*
Console output:
Source collection:
l1: 1 2 3 4 5 6 7 8 9 10

Reversing order - copy version:
Collections after reversal
l1: 1 2 3 4 5 6 7 8 9 10
v1: 10 9 8 7 6 5 4 3 2 1

Reversing order:
Collection after reversal:
l1: 10 9 8 7 6 5 4 3 2 1
*/
