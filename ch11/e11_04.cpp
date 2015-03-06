/*
 Which of the following examples show(s) the proper way to create a new queue container assuming all necessary declarations have been performed.
 Choose all that apply:
 Select correct answers (multiple choice)
 */
#include <vector>
#include <queue>
#include <iostream>
#include <list>
using namespace std;
int main()
{

  {
    queue<int> q;
  }
  {
    deque<int> d;
    queue<int> q(d);
  }
  {
    array_list<int> l;
    queue<int> q(l);
  }
  {
    vector<int> v;
    queue<int> q(v);
  }
  {
    list<int> l;
    queue<int> q(l);
  }
}
