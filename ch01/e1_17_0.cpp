/*
 Which of the following examples shows the proper way to create a new stack container assuming all necessary declarations has been performed. Choose all that apply:
 Select correct answers (multiple choice)
 */
#include <vector>
#include <deque>
#include <stack>
#include <list>

using namespace std;

int main()
{
  {
    vector<int> v;
    stack<int> s(v);
  }
  {
    stack<int> s;
  }
  {
    deque<int> d;
    stack<int> s(d);
  }
  {
    list<int> l;
    stack<int> s(l);
  }
  {
    deque<int> d;
    stack<int> s(d.begin(), d.end());
  }
}
