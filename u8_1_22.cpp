#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
    string buff;
    
    cout << "Reading the whole line:\n";
    getline(cin, buff);
    cout<< "Value read: " << buff << endl << endl;
    
    cout << "Reading the whole line - with delimiting character set to space:\n";
    getline(cin, buff, ' ');
    cout<< "Value read: " << buff << endl;
    return 0;
}
/*
Console output:

Reading the whole line:
Hello world!
Value read: Hello world!

Reading the whole line - with delimiting character set to space:
Hello world!
Value read: Hello
*/
