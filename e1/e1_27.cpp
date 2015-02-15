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
  std::deque<int> d;
  queue<int, std::map<int> > q1;
  queue<int, std::vector<int> > q2;
  queue<int, std::list<int> > q3(l);
  queue<int, std::deque<int> > q4(d);
  queue<int, std::set<int> > q5;
  q2.push(2);
  q2.pop();
  q5.push(2);
  q5.pop();

  return 0;
}
