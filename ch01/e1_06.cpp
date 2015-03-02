//What will happen when you attempt to compile and run the following code? Choose all that apply:
#include <vector>
#include <ostream>
#include <sstream>
#include <iostream>
#include <deque>

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
  deque<int> d1(tab, tab + 10);

  deque<int>::const_iterator it = d1.begin() + 3;
  d1.erase(it, it + 1);
  print(d1.begin(), d1.end());
  d1.clear();
  cout << d1.size() << endl;
  return 0;
}
/*
Select correct answer (single choice)
program will run successfuly and display: 1 2 3 6 7 8 9 10 8
program will run successfuly and display: 1 2 3 5 6 7 8 9 10 0
program will run successfuly and display: 1 2 3 5 6 7 8 9 10 9
program will run successfuly and display: 1 2 3 6 7 8 9 10 0
code will not compile
*/
