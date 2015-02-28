
#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;
int main(){
        int mynumbers[] =        { 8, 9, 7, 2, 6 };
        string words[] = {"eight", "nine", "seven", "two", "six"};
        multimap<int,string> m;
        for(int i=0; i<4; i++) {
                m.insert(pair<int,string>(mynumbers[i], words[i]));
                m.insert(pair<int,string>(mynumbers[i], words[i]));
        }
        m.insert(pair<int,string>(0,"zero"));                //LINE I
        for(multimap<int, string>::iterator i=m.begin();i!= m.end(); i++)
                cout<<i->second<<", ";
        return 0;
}

/*
Select correct answer (single choice)
program outputs: zero, two, seven, seven, eight, eight, nine, nine,
program outputs: two, two, seven, seven, eight, eight, nine, nine,
compilation error in LINE I
program outputs: zero, two, two, seven, seven, eight, eight, nine, nine,
runtime error at LINE I
*/
