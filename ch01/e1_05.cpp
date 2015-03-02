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
  deque<int> d2;
  deque<int>::iterator it;
  for (it = d1.begin(); it != d1.end(); ++it)
  {
    d2.push_back(d1[d1.end() - it - 1]);        //LINE I
  }
  print(d2.rbegin(), d2.rend()) << endl;        //LINE II
  return 0;
}
/*
Select correct answer (single choice)
program will run successfuly and display: 1 2 3 4 5 6 7 8 9 10
the result of program execution is unpredictable or there might be run time exception
code will not compile due to error in line LINE II
program will run successfuly and display: 10 9 8 7 6 5 4 3 2 1
code will not compile due to error in line LINE I
*/
