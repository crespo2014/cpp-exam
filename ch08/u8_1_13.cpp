/*
 * u8_1_13.cpp
 *
 *  Created on: 25 Jan 2015
 *      Author: lester
 */

#include <iostream>

using namespace std;

int main() {

    int v = 100;
    bool b = true;
    double d = 100;
    cout<<"Without flags:\n";
    cout<<v<<endl<<b<<endl<<d<<endl<<endl;

    cout<<"Flags set:\n";
    cout.setf(ios::showpos);
    cout.setf(ios::boolalpha);
    cout.setf(ios::showpoint);
    cout<<v<<endl<<b<<endl<<d<<endl<<endl;
    return 0;
}
/*
Console output:
Without flags:
100
1
100

Flags set:
+100
true
+100.000
*/

