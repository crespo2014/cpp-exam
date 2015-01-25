/*
 * u8_1_10.cpp
 *
 *  Created on: 25 Jan 2015
 *      Author: lester
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    cout<<"Current fill character: " << cout.fill() <<", code: " <<(int)cout.fill()<<endl;
    cout<<"Current field width : " << cout.width() <<endl;
    cout<<1<<2<<3<<endl;
    // changing width;
    cout.width(3);
    cout<<"Field width after change : " << cout.width() <<endl;
    cout<<1<<2<<3<<endl;
    cout<<"Width after output : " << cout.width() <<endl;
    // changing width and fill
    cout.width(3);
    cout.fill('_');
    cout<<"Current fill character: " << cout.fill() <<", code: " <<(int)cout.fill()<<endl;
    cout<<1<<2<<3<<endl<<endl;

    cout<<"Setting width before each write:\n";
    cout<<"adjustfield - not set/default:\n";
    for(unsigned i=1; i <= 3; ++i) {
        cout.width(3);
        cout<<i;
    }
    cout<<endl;

    cout<<"adjustfield - left:\n";
    cout.setf(ios::left, ios::adjustfield);
    for(unsigned i=1; i <= 3; ++i) {
        cout.width(3);
        cout<<i;
    }
    cout<<endl;

    cout<<"adjustfield - internal:\n";
    cout.setf(ios::internal, ios::adjustfield);
    for(unsigned i=1; i <= 3; ++i) {
        cout.width(3);
        cout<<i;
    }
    cout<<endl;

    cout<<"adjustfield - right:\n";
    cout.setf(ios::right, ios::adjustfield);
    for(unsigned i=1; i <= 3; ++i) {
        cout.width(3);
        cout<<i;
    }
    cout<<endl;
    return 0;
}
/*
Console output:

Current fill character:  , code: 32
Current field width : 0
123
Field width after change : 3
123
Width after output : 0
Current fill character: _, code: 95
123

Setting width before each write:
adjustfield - not set/default:
__1__2__3
adjustfield - left:
1__2__3__
adjustfield - internal:
__1__2__3
adjustfield - right:
__1__2__3
*/


