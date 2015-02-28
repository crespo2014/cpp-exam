

//What happens when you attempt to compile and run the following code?

#include <iostream>
#include <map>
#include <vector>
#include <sstream>
#include <string>
using namespace std;
int main() {
        int mynumbers[] =        { 3, 9, 3, 2, 1, 4, 5 };
        vector<int> v(mynumbers, mynumbers+7);
        map<int, string> m;
        for (vector<int>::iterator i = v.begin(); i != v.end(); i++) {
                stringstream s;
                s << *i;
                m.insert(pair<int, string>(*i, s.str()));
        }
        pair<map<int, string>::iterator, map<int, string>::iterator> range;
        range = m.equal_range(3);
        map<int, string>::iterator i = range.first;//LINE I
        for (; i != range.second; i++) {
                cout << i->second << ", " << i->first << ", ";
        }
        return 0;
}

/*
Select correct answer (single choice)
program outputs: 3, 3, 9, 9, 3, 3,
program outputs: 3, 3,
runtime error at LINE I
program outputs: 0, 0, 3, 3,
compilation error in LINE I
*/
