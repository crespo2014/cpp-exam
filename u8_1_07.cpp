#include <iostream>

using namespace std;

int main() {
    double d1=123.455555;
    double d2=123.45;
    unsigned p =  cout.precision();
    cout<<"Mode: default\n";
    cout<<"Precision: " << cout.precision()<<endl; 
    cout<<"d1: "<<d1<<endl;
    cout<<"d2: "<<d2<<endl;
    cout.precision(4);
    cout<<"Precision: " << cout.precision()<<endl;
    cout<<"d1: "<<d1<<endl;
    cout<<"d2: "<<d2<<endl;
    cout.precision(2);
    cout<<"Precision: " << cout.precision()<<endl;
    cout<<"d1: "<<d1<<endl;
    cout<<"d2: "<<d2<<endl;
    cout<<endl;
    
    cout<<"Mode: fixed\n";
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(p);
    cout<<"Precision: " << cout.precision()<<endl; 
    cout<<"d1: "<<d1<<endl;
    cout<<"d2: "<<d2<<endl;
    cout.precision(4);
    cout<<"Precision: " << cout.precision()<<endl;
    cout<<"d1: "<<d1<<endl;
    cout<<"d2: "<<d2<<endl;
    cout.precision(2);
    cout<<"Precision: " << cout.precision()<<endl;
    cout<<"d1: "<<d1<<endl;
    cout<<"d2: "<<d2<<endl;
    cout<<endl;
    
    cout<<"Mode: scientific\n";
    cout.setf(ios::scientific, ios::floatfield);
    cout.precision(p);
    cout<<"Precision: " << cout.precision()<<endl; 
    cout<<"d1: "<<d1<<endl;
    cout<<"d2: "<<d2<<endl;
    cout.precision(4);
    cout<<"Precision: " << cout.precision()<<endl;
    cout<<"d1: "<<d1<<endl;
    cout<<"d2: "<<d2<<endl;
    cout.precision(2);
    cout<<"Precision: " << cout.precision()<<endl;
    cout<<"d1: "<<d1<<endl;
    cout<<"d2: "<<d2<<endl;
    return 0;
}

/*
Console output:
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
