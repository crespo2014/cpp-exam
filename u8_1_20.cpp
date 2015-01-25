#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    char c;
    char buff[255];
    
    cout << "Reading single character:\n";
    c = cin.get();
    cout << "Value read: " << c << endl;
    
    cin.get(c);
    cout << "Value read: " << c << endl << endl;
    
    cout<< "Something wrong - remember get does not extract delimiting character!\n";
    cout << "Reading single character again:\n";
    cin.get(c);
    cin.get(); // just to skip newline
    cout << "Value read: " << c << endl << endl;
    
    cout << "Reading the whole line:\n";
    cin.get(buff, 254);
    c = cin.get();
    cout<< "Value read: " << buff << endl;
    cout<< "NOT read delimeter: " << (int)c << endl << endl;
    
    cout << "Reading the whole line - with delimeter set to space:\n";
    cin.get(buff, 254, ' ');
    c = cin.get();
    cout<< "Value read: " << buff << endl;
    cout<< "NOT read delimeter: " << (int)c << endl;
    return 0;
}

/*
Console output:

Reading single character:
a
Value read: a
Value read: 


Something wrong - remember get does not extract delimiting character!
Reading single character again:
A
Value read: A

Reading the whole line:
Hello world!
Value read: Hello world!
NOT read delimeter: 10

Reading the whole line - with delimeter set to space:
Hello world!
Value read: Hello
NOT read delimeter: 32
*/
