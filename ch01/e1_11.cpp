#include <vector>
#include <ostream>
#include <sstream>
#include <iostream>
#include <deque>
#include <list>
#include <stack>
#include <queue>

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

   list<int>::const_iterator it = l1.begin() + 3;        //LINE I
  l1.erase(it, advance(it, 1));                          //LINE II
  print(l1.begin(), l1.end());
  l1.clear();                                           //LINE III
  cout << l1.size() << endl;
  return 0;
}
/*
 * Select correct answers (multiple choice)
code will not compile due to error in line LINE III
program will run successfuly and display: 1 2 3 5 6 7 8 9 10 0
code will not compile due to error in line LINE II
program will run successfuly and display: 1 2 3 5 6 7 8 9 10 9
code will not compile due to error in line LINE I
 */
