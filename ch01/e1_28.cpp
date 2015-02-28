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
  list<int> l;
  queue<int> q1(l);
  vector<int> v;
  queue<int> q2(v);
  queue<int> q3;
  deque<int> d;
  queue<int> q4(d);
  queue<int, std::vector<int> > q6(v);
  queue<int> q5(d.begin(), d.end());

  return 0;
}
