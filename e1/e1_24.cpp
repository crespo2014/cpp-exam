#include <vector>
#include <ostream>
#include <sstream>
#include <iostream>
#include <deque>
#include <list>
#include <stack>
#include <queue>

using namespace std;
int main()
{
  std::list<int> l;
  l.clear();
  l.erase(l.begin(), l.end());
  return 0;
}
