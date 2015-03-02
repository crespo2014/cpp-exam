#include <vector>
#include <ostream>
#include <sstream>
#include <iostream>
#include <deque>
#include <list>
#include <stack>
#include <queue>

using namespace std;
template<typename T> ostream & print(const T & start, const T & end)
{
  T tmp = start;
  for (; tmp != end; ++tmp)
  {
    cout << *tmp << " ";
  }
  return cout;
}

int main()
{
  int tab[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  vector<int> v1(tab, tab + 10);
  vector<int> v2;
  v2.reserve(10);

  while (!v1.empty())
  {
    v2.insert(v2.begin(), v1.pop_back());
  }
  print(v2.rbegin(), v2.rend()) << ": " << v2.size() << endl;
  return 0;
}

/*
 * Select correct answer (single choice)
program will run successfuly and display: 10 9 8 7 6 5 4 3 2 1 : 20
program will run successfuly and display: 1 2 3 4 5 6 7 8 9 10 : 10
program will run successfuly and display: 1 2 3 4 5 6 7 8 9 10 : 20
program will run successfuly and display: 10 9 8 7 6 5 4 3 2 1 : 10
code will not compile
 */
