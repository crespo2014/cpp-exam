#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    char c = 'a';
    unsigned char uc = 'b';
    bool b = true;
    int i = 1 << 32 - 1 ;
    unsigned int ui = (1 << 32) - 1;
    long l = 1 << 32 - 1 ;
    long ll = 1 << 32 - 1 ;
    float f = 2.13f;
    double d = 2.13;
    const char *text = "Hello world!";
    cout<<"bool: "<<b<<endl;
    cout<<"char: "<<c<<endl;
    cout<<"unsigned char: "<<uc<<endl;
    cout<<"int: "<<i<<endl;
    cout<<"unsigned int: "<<ui<<endl;
    cout<<"long: "<<l<<endl;
    cout<<"long long: "<<ll<<endl;
    cout<<"float: "<<f<<endl;
    cout<<"double: "<<d<<endl;
    cout<<"char *: "<<text<<endl;
    return 0;
}
/*
Console output:
bool: 1
char: a
unsigned char: b
int: -2147483648
unsigned int: 4294967295
long: -2147483648
float: 2.13
double: 2.13
char *: Hello world!
*/
