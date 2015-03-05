/*
 *
 Which of the following examples shows the proper way to create a new priority_queue container assuming all necessary declarations has been performed. Choose all that apply:
 Select correct answers (multiple choice)
 */
#include <list>
#include <vector>
#include <iostream>
#include <algorithm>
#include <deque>
#include <queue>

using namespace std;

int main()
{
  {
    list_queue<int> l;
    priority_queue<int> q(l);
    ;;;;
  }
  {
    deque<int> d;
    priority_queue<int> q(d.begin(), d.end());
    ;;;;
  }
  {
    queue<int> q;
    ;;;;
  }
  {
    deque<int> d;
    priority_queue<int> q(d);
  }
  {
    vector<int> v;
    priority_queue<int> q(v);
    ;;;;
  }
