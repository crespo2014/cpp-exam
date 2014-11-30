/*
 * unit5.h
 *
 *  Created on: 30 Nov 2014
 *      Author: lester
 */

#ifndef UNIT5_H_
#define UNIT5_H_

#include <string>
#include <algorithm>

class u0501
{
public:
  template<class T>
  static void print(const T & value)
  {
    cout << value << " ";
  }

  static char t(char c)
  {
    return tolower(c);
  }
  static string toLower(const string & v)
  {
    string ret(v);
    transform(ret.begin(), ret.end(), ret.begin(), t);
    return ret;
  }

  static bool descending_caseinsensitive(const string & a, const string & b)
  {
    return toLower(b) < toLower(a);
  }

  static bool descending_casesensitive(const string & a, const string & b)
  {
    return b < a;
  }

  static bool ascending_caseinsensitive(const string & a, const string & b)
  {
    return toLower(a) < toLower(b);
  }

  static int main()
  {
    string t[] = { "AB", "dC", "ba", "aB", "BC", "bc", "BA", "cd", "Cd", "ab" };
    vector < string > v1(10);

    copy(t, t + 10, v1.begin());
    cout << "Source collection:\n";
    cout << "v1: ";
    for_each(v1.begin(), v1.end(), print<string>);
    cout << endl;

    cout << "Sorting in ascending order:\n";
    cout << "Normal sort:\n";
    sort(v1.begin(), v1.end());
    cout << "v1: ";
    for_each(v1.begin(), v1.end(), print<string>);
    cout << endl;
    cout << "Stable sort:\n";
    copy(t, t + 10, v1.begin());
    stable_sort(v1.begin(), v1.end(), ascending_caseinsensitive);
    cout << "v1: ";
    for_each(v1.begin(), v1.end(), print<string>);
    cout << endl << endl;

    cout << "Sorting in descending order:\n";
    cout << "Normal sort:\n";
    sort(v1.begin(), v1.end(), descending_casesensitive);
    cout << "v1: ";
    for_each(v1.begin(), v1.end(), print<string>);
    cout << endl;
    cout << "Stable sort:\n";
    copy(t, t + 10, v1.begin());
    stable_sort(v1.begin(), v1.end(), descending_caseinsensitive);
    cout << "v1: ";
    for_each(v1.begin(), v1.end(), print<string>);
    cout << endl << endl;

    return 0;
  }
};

#endif /* UNIT5_H_ */
