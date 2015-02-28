#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <iomanip>

using namespace std;
template<class T>
std::string getStatus(const T & stream, char *fileName) {
    ostringstream s;
    if (stream.is_open())
    {
        s << "File: "  << fileName <<" was successfully opened!\n";
    }
    else
    {
        s << "Failed to open file: " << fileName << endl;
    }
    return s.str();
}

std::string getFlags(const ios & stream) {
    stringstream s;
    s << boolalpha << "G:" << stream.good() << " E:" << stream.eof() << " F:" << stream.fail() 
            << " B:" << stream.bad();
    return s.str();
}

int main() {
    char badName[] = {"badfilename.txt"};
    char goodName[] = {"inputfile03.txt"};
    cout<< "Trying to open not existing file: " << badName << "\n";
    ifstream file(badName);
    cout << "Status: " << getStatus(file, badName) << "Flags: " << getFlags(file) << endl <<endl;
    
    cout << "Opening existing file for reading - using the same object, but with different file: " << goodName << "\n";
    file.open(goodName, ios_base::in);
    cout << "Status: " << getStatus(file, goodName) << "Flags: " << getFlags(file) << endl <<endl;
    
    cout << "Reading contents of the file - there is an extra end of line character in the file :\n";
    int v;
    while(file >> v) {
        
        cout << v << ": flags: " << getFlags(file) << endl;
    }  
    cout << "Status: " << getFlags(file) << endl << endl;
    file.close();
    
    cout << "Reading contents of the file - different way:\n";
    file.open(goodName, ios_base::in);
    while(file.good()) {
        file >> v;
        cout << v << ": flags: " << getFlags(file) << endl;
    }
    file.close();
    cout << "Status: " << getFlags(file) << endl;
    file.close();
    return 0;
}

/***
Trying to open not existing file: badfilename.txt
Status: Failed to open file: badfilename.txt
Flags: G:false E:false F:true B:false

Opening existing file for reading - using the same object, but with different file: inputfile03.txt
Status: File: inputfile03.txt was successfully opened!
Flags: G:true E:false F:false B:false

Reading contents of the file - there is an extra end of line character in the file :
1: flags: G:true E:false F:false B:false
2: flags: G:true E:false F:false B:false
3: flags: G:true E:false F:false B:false
4: flags: G:true E:false F:false B:false
5: flags: G:true E:false F:false B:false
Status: G:false E:true F:true B:false

Reading contents of the file - different way:
1: flags: G:true E:false F:false B:false
2: flags: G:true E:false F:false B:false
3: flags: G:true E:false F:false B:false
4: flags: G:true E:false F:false B:false
5: flags: G:true E:false F:false B:false
5: flags: G:false E:true F:true B:false
Status: G:false E:true F:true B:false
***/

