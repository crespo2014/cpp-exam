/*
 * main.cpp
 *
 *  Created on: 17 Nov 2014
 *      Author: lester
 */

#include <vector>
#include <stdio.h>
#include <ostream>
#include <iostream>
#include <algorithm>
#include <utility>

using namespace std;

template<class C>
void printout(C& c)
{
  for (auto &t : c)
  {
    cout << t << " , ";
  }
  cout << endl;
}

// Try uninitialize iterator
void unitialize_it()
{
  std::vector<int> v;
  std::vector<int> a { 1, 2, 3, 4 };
  std::vector<int> b(10);
  std::vector<int> c{10};
  std::vector<int> d{10,2};
  std::vector<int> e(10,2);
  std::vector<int>::iterator it;
  it = a.begin();
  cout << *it << endl;
  printout(a);
  printout(b);
  printout(c);
  printout(d);
  printout(e);
  int aa[] = { 2,3,4,5,6};
  std::vector<int> f(aa,aa+4);
  std::vector<int> g{aa,aa+4};
  printout(f);
  printout(g);

  std::vector<int> h{g};
  std::vector<int> i{std::move(g)};
  printout(h);
  printout(g);
  printout(i);

}

int main()
{
  unitialize_it();
  return 0;
}

