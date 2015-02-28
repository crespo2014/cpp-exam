/*
 * u8_1_16.cpp
 *
 *  Created on: 25 Jan 2015
 *      Author: lester
 */




#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double d1=123.455555;
    double d2=123.45;
    unsigned p =  cout.precision();
    cout<<"Mode: default\n";
    cout<<"Precision: " << cout.precision()<<endl;
    cout<<"d1: "<<d1<<endl;
    cout<<"d2: "<<d2<<endl;
    cout<<setprecision(4);
    cout<<"Precision: " << cout.precision()<<endl;
    cout<<"d1: "<<d1<<endl;
    cout<<"d2: "<<d2<<endl;
    cout<<setprecision(2);
    cout<<"Precision: " << cout.precision()<<endl;
    cout<<"d1: "<<d1<<endl;
    cout<<"d2: "<<d2<<endl;
    cout<<endl;

    cout<<"Mode: fixed\n";
    cout<<fixed;
    cout<<setprecision(p);
    cout<<"Precision: " << cout.precision()<<endl;
    cout<<"d1: "<<d1<<endl;
    cout<<"d2: "<<d2<<endl;
    cout<<setprecision(4);
    cout<<"Precision: " << cout.precision()<<endl;
    cout<<"d1: "<<d1<<endl;
    cout<<"d2: "<<d2<<endl;
    cout<<setprecision(2);
    cout<<"Precision: " << cout.precision()<<endl;
    cout<<"d1: "<<d1<<endl;
    cout<<"d2: "<<d2<<endl;
    cout<<endl;

    cout<<"Mode: scientific\n";
    cout<<scientific;
    cout<<setprecision(p);
    cout<<"Precision: " << cout.precision()<<endl;
    cout<<"d1: "<<d1<<endl;
    cout<<"d2: "<<d2<<endl;
    cout<<setprecision(4);
    cout<<"Precision: " << cout.precision()<<endl;
    cout<<"d1: "<<d1<<endl;
    cout<<"d2: "<<d2<<endl;
    cout<<setprecision(2);
    cout<<"Precision: " << cout.precision()<<endl;
    cout<<"d1: "<<d1<<endl;
    cout<<"d2: "<<d2<<endl;
    return 0;
}
/*
Mode: default
Precision: 6
d1: 123.456
d2: 123.45
Precision: 4
d1: 123.5
d2: 123.5
Precision: 2
d1: 1.2e+02
d2: 1.2e+02

Mode: fixed
Precision: 6
d1: 123.455555
d2: 123.450000
Precision: 4
d1: 123.4556
d2: 123.4500
Precision: 2
d1: 123.46
d2: 123.45

Mode: scientific
Precision: 6
d1: 1.234556e+02
d2: 1.234500e+02
Precision: 4
d1: 1.2346e+02
d2: 1.2345e+02
Precision: 2
d1: 1.23e+02
d2: 1.23e+02
*/

