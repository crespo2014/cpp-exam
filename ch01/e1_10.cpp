#include <vector>
#include <ostream>
#include <sstream>
#include <iostream>
#include <deque>
#include <list>

using namespace std;
template<typename T> ostream & print(T & start, T & end)
{
  for (; start != end; ++start)
  {
    cout << *start << " ";
  }
  return cout;
}

int main()
{
  int tab[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  list<int> l1(tab, tab + 10);
  list<int> l2;
  list<int>::iterator it;
  for (it = l1.begin(); it != l1.end(); ++it)
  {
    l2.push_back(l1[l1.end() - it - 1]);        //LINE I
  }
  print(l2.begin(), l2.end()) << endl;        //LINE II
  return 0;
}

/*
 * Select correct answer (single choice)
program will run successfuly and display: 1 2 3 4 5 6 7 8 9 10
code will not compile due to error in line LINE II
code will not compile due to error in line LINE I
program will run successfuly and display: 10 9 8 7 6 5 4 3 2 1
the result of program execution is unpredictable or there might be run time exception
*/

