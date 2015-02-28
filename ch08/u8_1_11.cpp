/*
 * u8_1-11.cpp
 *
 *  Created on: 25 Jan 2015
 *      Author: lester
 */

#include <iostream>

using namespace std;

int main() {
    int value = 65535;
    cout<<"Default ios::basefield value - dec:\n";
    cout<<value<<endl;

    cout<<"Setting ios::basefield to oct:\n";
    cout.setf(ios::oct, ios::basefield);
    cout<<value<<endl;

    cout<<"Setting ios::basefield to hex:\n";
    cout.setf(ios::hex, ios::basefield);
    cout<<value<<endl;

    cout<<"Setting uppercase flag when displaying value as hex:\n";
    cout.setf(ios::uppercase);
    cout<<value<<endl<<endl;

    cout<<"Display above values using showbase flag:\n";
    cout.setf(ios::dec, ios::basefield);
    cout.setf(ios::showbase);
    cout<<"Default ios::basefield value - dec:\n";
    cout<<value<<endl;

    cout<<"Setting ios::basefield to oct:\n";
    cout.setf(ios::oct, ios::basefield);
    cout<<value<<endl;

    cout<<"Setting ios::basefield to hex:\n";
    cout.setf(ios::hex, ios::basefield);
    cout<<value<<endl;

    cout<<"Setting uppercase flag when displaying value as hex:\n";
    cout.setf(ios::uppercase);
    cout<<value<<endl;
    return 0;
}
/* Console output:
Default ios::basefield value - dec:
65535
Setting ios::basefield to oct:
177777
Setting ios::basefield to hex:
ffff
Setting uppercase flag when displaying value as hex:
FFFF

Display above values using showbase flag:
Default ios::basefield value - dec:
65535
Setting ios::basefield to oct:
0177777
Setting ios::basefield to hex:
0XFFFF
Setting uppercase flag when displaying value as hex:
0XFFFF
*/


