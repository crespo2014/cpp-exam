/*
 * main.cpp
 *
 *  Created on: 17 Nov 2014
 *      Author: lester
 */

#include <vector>
#include <deque>
#include <list>
#include <stdio.h>
#include <ostream>
#include <iostream>
#include <algorithm>
#include <utility>
#include <queue>
#include <stack>
#include <map>
#include <set>

using namespace std;

template<class T>
void doit_1(T t)
{
  t(0);
}

template<class T>
void doit_2(T& t)
{
  t(0);
}

template<class T>
void doit_3(const T& t)
{
  t(0);
}

struct g
{
  g(){};
  //g(const g&){};
  void operator() (int a) const {};
};

template<class T>
void f(T& a)
{
  a =9;
}

void f(float& g)
{
  g =8;
}

int main()
{
  doit_1(g());
  doit_2(g());
  doit_3(g());
  float a = 2.6676767686868;
  f(a);

  cout << a << " " << 6.0f << 56.28987378293f << endl;


  return 0;
}

