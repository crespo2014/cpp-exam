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
  deque<int> d;
  stack<int> s1(d);
  stack<int> s2(d.begin(), d.end());
  list<int> l;
  stack<int> s3(l);
  stack<int> s4;
  vector<int> v;
  stack<int> s5(v);

  return 0;
}
