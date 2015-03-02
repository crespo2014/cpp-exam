
#include <vector>
#include <ostream>
#include <sstream>
#include <iostream>
#include <deque>

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
  deque<int> d1(tab, tab + 10);
  deque<int> d2;

  while (!d1.empty())
  {
    d2.push_front(d1.back());                //        LINE I
    d1.pop_front();                                        //        LINE II
  }
  print(d2.begin(), d2.end()) << ": " << d2.size() << endl;
  return 0;
}
/*
Select correct answer (single choice)
program will run successfuly and display: 10 10 10 10 10 10 10 10 10 10 : 10
program will run successfuly and display: 1 2 3 4 5 6 7 8 9 10 : 10
program will run successfuly and display: 1 1 1 1 1 1 1 1 1 1 : 10
code will not compile due to error in line marked LINE II
code will not compile due to error in line marked LINE I
*/
