/*
 * u8_1_17.cpp
 *
 *  Created on: 25 Jan 2015
 *      Author: lester
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int value = 65535;
    cout<<nouppercase;
    cout<<"Default ios::basefield value - dec:\n";
    cout<<value<<endl;

    cout<<"Setting ios::basefield to oct:\n";
    cout<<oct;
    cout<<value<<endl;

    cout<<"Setting ios::basefield to hex:\n";
    cout<<hex;
    cout<<value<<endl;

    cout<<"Setting uppercase flag when displaying value as hex:\n";
    cout<<uppercase;
    cout<<value<<endl<<endl;

    cout<<nouppercase;
    cout<<"Display above values using showbase flag:\n";
    cout<<showbase<<setbase(10);
    cout<<"Default ios::basefield value - dec:\n";
    cout<<value<<endl;

    cout<<"Setting ios::basefield to oct:\n";
    cout<<setbase(8);
    cout<<value<<endl;

    cout<<"Setting ios::basefield to hex:\n";
    cout<<setbase(16);
    cout<<value<<endl;

    cout<<"Setting uppercase flag when displaying value as hex:\n";
    cout<<uppercase;
    cout<<value<<endl;

    cout<<"How long is change of base valid:\n";
    cout<<noshowbase<<value<<endl;
    return 0;
}
/*
Console output:
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
0xffff
Setting uppercase flag when displaying value as hex:
0XFFFF
How long is change of base valid:
FFFF
*/


