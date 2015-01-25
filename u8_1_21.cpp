#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    char buff[255];
    
    cout << "Reading the whole line:\n";
    cin.getline(buff, 254);
    cout<< "Value read: " << buff << endl << endl;
    
    cout << "Reading the whole line - with delimiter set to space:\n";
    cin.getline(buff, 254, ' ');
    cout<< "Value read: " << buff << endl;
    return 0;
}
/*
Console output:
Reading the whole line:
Hello world!
Value read: Hello world!

Reading the whole line - with delimiter set to space:
Hello world!
Value read: Hello
*/
