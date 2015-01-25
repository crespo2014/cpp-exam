#include <iostream>
using namespace std;

int add(int a, int b)
{
  cout<<"Int function!"<<endl;
  return a + b;
}

int main()
{
	cout << add(5, 10) << endl;
	cout << add(5.0,10.0) << endl;
	return 0;
}
/*
Console output:
Int function!
15
Double function!
15
*/
