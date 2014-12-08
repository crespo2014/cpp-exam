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
#include "test2.h"
#include "test3.h"
#include "test4.h"
#include "unit5.h"
#include "test5.h"
#include "unit7.h"

int main()
{
  enum E{
    a,b,c
  };
  E e;
  e = static_cast<E>(1);
  try{
    throw 10.7;
  }
  catch (int i) {
    std::cout << "int";
  }
  catch (float i) {
    std::cout << "float";
  }
  catch (double i) {
    std::cout << "float";
  }
  catch (...) {
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

  s2t01::main();
  cout << endl;
  s2t02::main();
  cout << endl;
  s2t03::main();
  cout << endl;
  s2t05::main();
  cout << endl;
  s2t05::main();
  cout << endl;
  s2t06::main();
  cout << endl;
  s2t07::main();
  cout << endl;
  s2t08::main();
  cout << endl;
  s2t09::main();
  cout << endl;
  s2t10::main();
  cout << endl;
  s2t11::main();
  cout << endl;
  s2t12::main();
  cout << endl;
  s2t13::main();
  cout << endl;
  s2t14::main();
  cout << endl;
  s2t15::main();
  cout << endl;
  s2t16::main();
  cout << endl;
  s2t17::main();
  cout << endl;
  s2t18::main();
  cout << endl;
  s2t19::main();
  cout << endl;
  s2t20::main();
  cout << endl;
  s2t21::main();
  cout << endl;
  s2t22::main();
  cout << endl;
  s2t23::main();
  cout << endl;
  s2t24::main();
  cout << endl;
  s2t25::main();
  cout << endl;
  s2t26::main();
  cout << endl;
  s2t27::main();
  cout << endl;
  s2t28::main();
  cout << endl;

  t0301::main();
  cout << endl;
  t0302::main();
  cout << endl;
  t0303::main();
  cout << endl;
  t0304::main();
  cout << endl;
  t0305::main();
  cout << endl;
  t0306::main();
  cout << endl;
  t0307::main();
  cout << endl;
  t0308::main();
  cout << endl;
  t0309::main();
  cout << endl;
  t0310::main();
  cout << endl;
  t0311::main();
  cout << endl;
  t0312::main();
  cout << endl;
  t0313::main();
  cout << endl;
  t0314::main();
  cout << endl;
  t0315::main();
  cout << endl;
  t0316::main();
  cout << endl;
  t0317::main();
  cout << endl;
  t0318::main();
  cout << endl;
  t0319::main();
  cout << endl;
  t0320::main();
  cout << endl;
  t0321::main();
  cout << endl;
  t0322::main();
  cout << endl;
  t0323::main();
  cout << endl;
  t0324::main();
  cout << endl;
  t0325::main();
  cout << endl;
  t0326::main();
  cout << endl;
  t0327::main();
  cout << endl;
  t0328::main();
  cout << endl;

  t0401::main();
  cout << endl;
  t0402::main();
  cout << endl;
  t0403::main();
  cout << endl;
  t0404::main();
  cout << endl;
  t0405::main();
  cout << endl;
  t0406::main();
  cout << endl;
  t0407::main();
  cout << endl;
  t0408::main();
  cout << endl;
  t0409::main();
  cout << endl;
  t0410::main();
  cout << endl;
  t0411::main();
  cout << endl;
  t0412::main();
  cout << endl;
  t0413::main();
  cout << endl;
  t0414::main();
  cout << endl;
  t0415::main();
  cout << endl;
  t0416::main();
  cout << endl;
  t0417::main();
  cout << endl;
  t0418::main();
  cout << endl;
  t0419::main();
  cout << endl;
  t0420::main();
  cout << endl;
  t0421::main();
  cout << endl;
  t0422::main();
  cout << endl;
  t0423::main();
  cout << endl;
  t0424::main();
  cout << endl;
  t0425::main();
  cout << endl;
  t0426::main();
  cout << endl;
  t0427::main();
  cout << endl;
#endif
  t0501::main();
  cout << endl;
  t0502::main();
  cout << endl;
  t0503::main();
  cout << endl;
  t0504::main();
  cout << endl;
  t0505::main();
  cout << endl;
  t0506::main();
  cout << endl;
  t0507::main();
  cout << endl;
  t0508::main();
  cout << endl;
  t0509::main();
  cout << endl;
  t0510::main();
  cout << endl;
  t0511::main();
  cout << endl;
  t0512::main();
  cout << endl;
  t0513::main();
  cout << endl;
  t0514::main();
  cout << endl;
  t0515::main();
  cout << endl;
  t0516::main();
  cout << endl;
  t0517::main();
  cout << endl;
  t0518::main();
  cout << endl;
  t0519::main();
  cout << endl;
  t0520::main();
  cout << endl;
  t0521::main();
  cout << endl;
  t0522::main();
  cout << endl;
  t0523::main();
  cout << endl;
  t0524::main();
  cout << endl;
  return 0;
}

