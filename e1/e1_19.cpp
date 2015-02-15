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
  vector<int> v1(tab, tab + 10);

  vector<int>::const_iterator it = v1.begin() + 3;
  v1.erase(it, it + 1);
  print(v1.begin(), v1.end());
  v1.empty();
  cout << v1.size() << endl;
  return 0;
}
