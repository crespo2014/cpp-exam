#include <iostream>
#include <vector>
#include <algorithm>
#include <ctype.h>
#include <iterator>

using namespace std;

void print(const char & value) 
{
	cout<<value<<" ";
}

bool compare(const char &f, const char &s)
{
	return tolower(f)==tolower(s);
}

int main()
{
	char t[]={'a','b', 'c', 'd', 'A', 'b','D', 'A', 'b', 'C', 'a', 'f'};
	vector<int> v1(t,t+12);
	for_each(v1.begin(), v1.end(), print); cout<<endl;
	cout<<endl;
	char ts[]={'b','c'};
	cout<<"Searching for the sequence a, b from the beginning:\n";
	vector<int>::iterator found = search(v1.begin(), v1.end(), ts, ts+2, compare);
	if (found != v1.end())
	{
		cout<<"Sequence a, b has been found at position: " <<distance(v1.begin(), found)<<endl;
	}
	else
	{
		cout<<"Sequence a, b could not  be found\n";
	}
	cout<<endl;
	cout<<"Searching for the sequence a, b from the end:\n";
	found = find_end(v1.begin(), v1.end(), ts, ts+2, compare);
	if (found != v1.end())
	{
		cout<<"Sequence a, b has been found at position: " <<distance(v1.begin(), found)<<endl;
	}
	else
	{
		cout<<"Sequence a, b could not  beefound\n";
	}
	cout<<endl;
	cout<<"Searching for the sequence a, b from the end - case sensitive comparison:\n";
	found = find_end(v1.begin(), v1.end(), ts, ts+2);
	if (found != v1.end())
	{
		cout<<"Sequence a, b has been found at position: " <<distance(v1.begin(), found)<<endl;
	}
	else
	{
		cout<<"Sequence a, b could not  be found\n";
	}
	return 0;
}
/*
Console output:
a b c d A b D A b C a f

Searching for the sequence a, b from the beginning:
Sequence a, b has been found at position: 1

Searching for the sequence a, b from the end:
Sequence a, b has been found at position: 8

Searching for the sequence a, b from the end - case sensitive comparison:
Sequence a, b has been found at position: 1
*/
