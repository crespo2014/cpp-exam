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

#include "test1.h"
#include "unit5.h"
#include "test5.h"
#include "unit7.h"

int main()
{
  enum E
  {
    a, b, c
  };
  E e;
  e = static_cast<E>(1);
  try
  {
    throw 10.7;
  } catch (int i)
  {
    std::cout << "int";
  } catch (float i)
  {
    std::cout << "float";
  } catch (double i)
  {
    std::cout << "float";
  } catch (...)
  {
    std::cout << "none";
  }
  std::cout << endl;
#if 0
  t11 e11;
  t12 e12;
  t13 e13;
  t14 e14;
  t15 e15;
  t16 e16;
  t17 e17;
  t18 e18;
  t19 e19;
  t110 e110;
  t111 e111;
  t112 e112;
  t113 e113;
  t114 e114;
  t115 e115;
  t116 e116;
  t117 e117;
  t118 e118;
  t119 e119;
  t120 e120;
  t121 e121;
  t122 e122;
  t123 e123;
  t124 e124;
  t125 e125;
  t126 e126;
  t127 e127;
  t128 e128;
  t129 e129;
  t130 e130;
#endif
  return 0;
}

