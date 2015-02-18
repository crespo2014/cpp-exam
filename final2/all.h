/*
 * all.h
 *
 *  Created on: 17 Feb 2015
 *      Author: lester
 */
#ifndef ALL_H_
#define ALL_H_


Exam
CPP - Final Assessment
Time left: 1:29:58
Which sentences are 100% true about the code below (multiple choice) when control reaches return:

#include <vector>
#include <iostream>
using namespace std;
int main ()
{
        vector<int>        v1(10, -1);
        vector<int> v2;
        v2.reserve(10);
        for(unsigned i=0; i < 10; i++)
        {
                v2.push_back(i);
        }
        cout << v2[0] << ", " << v1[0];
        return 0;
}

Select correct answers (multiple choice)
program outputs: 0, -1
program outputs: -1, 0
both vectors v1 and v2 have the same capacity
value returned by size() is the same for vectors v1 and v2
program outputs: 0, 0
program outputs: -1, 10

Which methods from std::deque class can be used to check if there are elements in the container. Choose all that apply:
Select correct answers (multiple choice)
empty()
isfull()
there is no such method
size()
isempty()
clear()

What will happen when you attempt to compile and run the following code?

#include <vector>
#include <queue>
#include <iostream>
using namespace std;
int main()
{
        int t[] = {1, 5, 1, 4, 2};
        vector<int>        v(t, t+5);
        priority_queue<int> q(v.begin(), v.end());//LINE I
        q.push(4);//LINE II
        cout<<q.top()<<", ";
        q.push(3);
        cout<<q.top()<<endl;
        return 0;
}


Select correct answer (single choice)
compilation error in LINE II
program outputs: 4, 3
runtime error at LINE II
program outputs: 4, 4
program outputs: 5, 5
compilation error in LINE I

Which of the following examples show(s) the proper way to create a new queue container assuming all necessary declarations have been performed.
Choose all that apply:
Select correct answers (multiple choice)
queue<int> q;
deque<int> d; queue<int> q(d);
array_list<int> l; queue<int> q(l);
vector<int> v; queue<int> q(v);
list<int> l; queue<int> q(l);

What will happen when you attempt to compile and run the following code?

#include <vector>
#include <iostream>
#include <string>
using namespace std;
template<typename T> ostream & print(const T & start, const T & end)
{
        T tmp = start;
        for(; tmp != end; ++tmp)
        {
                cout<< *tmp<< " ";                        //LINE I
        }
        return cout;
}
class A
{
public:
        int a;
public:
        A(int a):a(a) {}
};
ostream & operator<<(ostream & c, const A & o )
{
        c<<o.a;
        return c;
}
int main()
{
        int tab[]={1, 5, 3, 3, 5, 6};
        vector<A> v1(tab, tab+6);                //LINE II
        v1.insert(v1.end(), A(0));
        print(v1.begin(), v1.end())<<endl;
        return 0;
}


Select correct answer (single choice)
runtime error at LINE II
program outputs: 1, 5, 3, 3, 5, 6,
compilation error in LINE II
program outputs: 1, 5, 3, 3, 5, 6, 0,
compilation error in LINE I
program outputs: 1, 5, 3, 3, 5, 6, 1

What happens when you attempt to compile and run the following code?

#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main(){
        int mynumbers[] =        { 8, 9, 7, 6, 4, 1 };
        vector<int>        v(mynumbers, mynumbers+6);
        set<int> s1(v.begin(),v.end());
        s1.erase(s1.lower_bound(4),s1.upper_bound(9));//LINE I
        s1.insert(10);//LINE II
        s1.insert(v.begin(),v.end());
        for(set<int>::iterator i=s1.begin();i!= s1.end(); i++)
                cout<<*i<<", ";
        return 0;
}


Select correct answer (single choice)
program outputs: 1, 4, 6, 7, 8, 9,
program outputs: 1, 4, 9, 10,
program outputs: 1, 10,
compilation error in LINE II
program outputs: 1, 4, 6, 7, 8, 9, 10,
runtime error at LINE II
compilation error in LINE I

What happens when you attempt to compile and run the following code?

#include <iostream>
#include <map>
#include <string>
using namespace std;
int main(){
        int mynumbers[] =        { 8, 9, 7, 6, 4, 1 };
        string words[] = {"eight", "nine", "seven", "six", "four", "one"};
        map<int,string> m;
        for(int i=0; i<6; i++)
                m.insert(pair<int,string>(mynumbers[i], words[i]));//LINE I
        if (m[2].value == "seven")//LINE II
                cout<<"seventh element, ";
        for(map<int, string>::iterator i=m.begin();i!= m.end(); i++)
                cout<<i->second<<", ";
        cout<<m.size();//LINE III
        return 0;
}


Select correct answer (single choice)
program outputs: one, , four, six, seven, eight, nine, 7
compilation error in LINE I
compilation error in LINE III
compilation error in LINE II
program outputs: one, , four, six, seven, eight, nine,
runtime error at LINE II
program outputs: seventh element, one, , four, six, seven, eight, nine, 7

What happens when you attempt to compile and run the following code?

#include <iostream>
#include <map>
using namespace std;
int main() {
        int mynumbers[] =        { 8, 9, 7, 6, 4, 1, 4 };
        string words[] = {"eight", "nine", "seven", "six", "four", "one", "four"};
        map<int, string> m;
        for (int i = 0; i < 7; i++) {
                m.insert(pair<int, string>(mynumbers[i], words[i]));//LINE I
        }
        if (m.count(4) == 2)
                m.erase(2);//LINE II
        for (map<int, string>::iterator i = m.begin(); i != m.end(); i++) {
                cout << i->first << ", ";
        }
        return 0;
}


Select correct answer (single choice)
program outputs: 1, 6, 7, 8, 9, 4
runtime error at LINE II
program outputs: 1, 4, 6, 7, 8, 9,
program outputs: 1, 4, 7, 8, 9, 4,
compilation error in LINE I
compilation error in LINE II
program outputs: 1, 4, 6, 7, 8, 9, 4,

What happens when you attempt to compile and run the following code?

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


Select correct answer (single choice)
program outputs: 3, 3, 9, 9, 3, 3,
program outputs: 3, 3,
runtime error at LINE I
program outputs: 0, 0, 3, 3,
compilation error in LINE I

What will happen when you attempt to compile and run the following code?

#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <set>
using namespace std;
void myprint(int i) {
        cout << i << ", ";
}
int main() {
        int mynumbers[] = { 8, 9, 7, 6, 4, 1 };
        vector<int> v1(mynumbers, mynumbers + 6);
        v1.pop_back();
        v1.pop_back();
        v1.pop_back();
        set<int> s1(mynumbers, mynumbers + 6);
        deque<int> d1(mynumbers, mynumbers + 6);
        d1.pop_front();//LINE I
        d1.pop_front();
        d1.pop_front();
        for_each(v1.begin(), v1.end(), myprint);//LINE II
        for_each(s1.begin(), s1.end(), myprint);
        for_each(d1.begin(), d1.end(), myprint);
        return 0;
}


Select correct answer (single choice)
compilation error in LINE II
runtime error at LINE I
program outputs: 8, 9, 7, 1, 4, 6, 7, 8, 9,
program outputs: 8, 9, 7, 6, 4, 1, 4, 6, 7, 8, 9, 6, 4, 1,
program outputs: 8, 9, 7, 1, 4, 6, 7, 8, 9, 6, 4, 1,
compilation error in LINE I

What will happen when you attempt to compile and run the following code?

#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <set>
using namespace std;
int main() {
        int mynumbers[] = { 8, 9, 7, 6, 4, 1 };
        vector<int> v1(mynumbers, mynumbers + 6);
        deque<int> d1(mynumbers, mynumbers + 6);
        set<int> s1(mynumbers, mynumbers + 6);
        vector<int>::iterator founded = find(v1.begin(), v1.end(), 3);
        if(founded!=v1.end())
                cout << "founded" << ", ";
        cout<<find(d1.begin(), d1.end(), 9)<<", ";//LINE I
        cout<<find(s1.begin(), s1.end(), 6);//LINE II
        return 0;
}


Select correct answers (multiple choice)
compilation error in LINE II
program outputs: 8, 9, 7, 6, 4, 1, 1, 4, 6, 7, 8, 9,
compilation error in LINE I
program outputs: founded, 8, 9, 7, 6, 4, 1, 1, 4, 6, 7, 8, 9,
program outputs: 9, 6,
runtime error at LINE I

What will happen when you attempt to compile and run the following code?

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main () {
        int mynumbers [] = { 8, 9, 7, 6, 4, 1 };
        vector<int> v (mynumbers, mynumbers + 6);
        vector<int>::iterator it;
        int m1[] = {7, 6, 4 };
        it = find_end (v.begin(), v.end(), m1, m1+3);//LINE I
        if (it != v.end())
                cout << "Found at position: " << it-v.begin() << endl; //LINE II
        return 0;
}


Select correct answer (single choice)
program outputs: Found at position:
program outputs: Found at position: 2
compilation error in LINE II
runtime error at LINE I
compilation error in LINE I
program outputs: Found at position: 1

What will happen when you attempt to compile and run the following code?

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class A {
        int a;
public:
        A(int a) :    a(a) {}
        int getA() const { return a; }    void setA(int a) { this->a = a; }
        bool operator==(const A & b) const { return a == b.a; }
};
bool compare(const A & a, const A & b) { return a == b; }
int main () {
        int mynumbers[] =  { 3, 9, 9, 9, 0, 2, 5 };
        vector<A> v (mynumbers, mynumbers + 7);
        vector<A>::iterator it = v.begin();
        while ( (it = adjacent_find (it, v.end(), compare)) != v.end()) {//LINE I
                cout<<it-v.begin()<<", ";it++;//LINE II
        }
        cout<< endl;
        return 0;
}


Select correct answer (single choice)
runtime error at LINE I
compilation error in LINE II
program outputs: 2, 3,
program outputs: 3, 4,
program outputs: 1, 2,
compilation error in LINE I

What will happen when you attempt to compile and run the following code?

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main () {
        int mynumbers[] = { 8, 9, 7, 6, 1, 1, 6, 6 };
        vector<int> v (mynumbers, mynumbers + 8);
        vector<int>::iterator it = search_n(v.begin(), v.end(), 2, 1);//LINE I
        cout<< it-v.begin()<<", ";//LINE II
        return 0;
}


Select correct answer (single choice)
compilation error in LINE I
program outputs: 1,
program outputs: 4,
program outputs: 2,
compilation error in LINE II
runtime error at LINE I
program outputs: 8,

What will happen when you attempt to compile and run the following code?

#include <vector>
#include <iostream>
#include <set>
#include <deque>
#include <algorithm>
using namespace std;
template<class T>struct Out {
        ostream  & out;
        Out(ostream & o): out(o){}
        void operator()(const T & val ) {
                out<<val<<", ";
        }
};
struct Sequence {
        int start;
        Sequence(int start):start(start){}
        int operator()()
        {
                return start++ % 7;
        }
};
int main() {
        vector<int> v1(3);
        generate(v1.begin(), v1.end(), Sequence(10));//LINE I
        set<int> s1(v1.rbegin(), v1.rend());
        deque<int> d1(s1.rbegin(), s1.rend());
        reverse(v1.begin(),v1.end());
        reverse(d1.begin(), d1.end());//LINE II
        for_each(s1.begin(), s1.end(), Out<int>(cout) );
        for_each(d1.begin(), d1.end(), Out<int>(cout) );
        return 0;
}


Select correct answer (single choice)
runtime error at LINE I
program outputs: 3, 4, 5, 3, 4, 5,
compilation error in LINE II
compilation error in LINE I
program outputs: 3, 4, 5, 5, 4, 3,
program outputs: 3, 4, 5, 3, 4, 5, 3, 4, 5,

What will happen when you attempt to compile and run the following code?

#include <vector>
#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;
template<class T>struct Out {
        ostream  & out;
        Out(ostream & o): out(o){}
        void operator()(const T & val ) {
                out<<val<<", ";
        }
};
struct Sequence {
        int start;
        Sequence(int start):start(start){}
        int operator()()
        {
                return start++ % 7;
        }
};
int main() {
        vector<int> v1(5);
        generate(v1.rbegin(), v1.rend(), Sequence(8));//LINE I
        rotate(v1.begin(),v1.begin() + 1, v1.end() );//LINE II
        for_each(v1.begin(), v1.end(), Out<int>(cout) );
        return 0;
}


Select correct answer (single choice)
runtime error at LINE I
compilation error in LINE II
compilation error in LINE I
program outputs: 4, 3, 2, 1, 5, 6
program outputs: 4, 3, 2, 1, 5,
program outputs: 5, 4, 3, 2, 6,

What will happen when you attempt to compile and run the following code?

#include <deque>
#include <iostream>
#include <algorithm>
using namespace std;
void printer(int i) {
        cout << i << ", ";
}
int main() {
        int mynumbers[] = { 8, 9, 7, 6, 4, 1 };
        deque<int> d1(mynumbers, mynumbers + 6);
        deque<int>::iterator it = lower_bound(d1.begin(), d1.end(), 3);
        d1.push_back(4);//LINE I
        for_each(it, d1.end(), printer);//LINE II
        return 0;
}


Select correct answer (single choice)
compilation error in LINE I
compilation error in LINE II
program outputs: 8, 9, 7, 6, 4, 4,
runtime error at LINE I
program outputs: 8, 9, 7, 6, 4, 1, 4
program outputs: 8, 9, 7, 6, 4, 1,

What will happen when you attempt to compile and run the following code?

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Pocket {
        int value;
public:
        Pocket(int value):value(value){}
        int getValue() const
        { return value; }
        bool operator < (const Pocket & _Right) const
        { return value < _Right.value; }
};
bool operator == (Pocket &_Left, int _Right)
{
        return (_Left.getValue()== _Right);
}
ostream & operator <<(ostream & stream, const Pocket & pocket)
{
        stream << pocket.getValue();
        return stream;
}
void printer(Pocket i) {
        cout << i << ", ";
}
int main() {
        int mynumbers[] = { 8, 9, 7, 6, 4, 1 };
        vector<Pocket> v1(mynumbers, mynumbers + 6);
        sort(v1.begin(), v1.end());//LINE I
        remove(v1.begin(), v1.end(), 2);//LINE II
        for_each(v1.begin(), v1.end(), printer);
        return 0;
}


Select correct answer (single choice)
compilation error in LINE II
compilation error in LINE I
program outputs: 8, 9, 7, 6, 4, 1,
program outputs: 1, 4, 7, 8, 9
runtime error at LINE I
program outputs: 1, 4, 6, 7, 8, 9,

What will happen when you attempt to compile and run the following code?

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
template<typename T>
class Pocket {
        T value;
public:
        Pocket(T value):value(value){}
        T getValue() const
        { return value; }
        bool operator < (const Pocket & _Right) const
        { return value < _Right.value; }
};
template<typename T>
ostream & operator <<(ostream & stream, const Pocket<T> & pocket)
{
        stream << pocket.getValue();
        return stream;
}
void printer(Pocket<double> i) {
        cout << i << ", ";
}
bool Compare(const Pocket<double> &_Left, const Pocket<double> &_Right)
{ return int(_Left.getValue()) < int(_Right.getValue());}
int main() {
        double mynumbers[] = { 1.11, 3.13, 2.12, 5.15, 6.16, 1.15 };
        vector<double> v1(mynumbers, mynumbers + 6);//LINE I
        stable_sort(v1.begin(), v1.end(), Compare);//LINE II
        for_each(v1.begin(), v1.end(), printer);
        return 0;
}


Select correct answer (single choice)
runtime error at LINE II
program outputs: 1.11, 3.13, 2.12, 5.15, 6.16, 1.15,
program outputs: 1.11, 2.12, 3.13, 5.15, 6.16, 1.15,
compilation error in LINE II
compilation error in LINE I
program outputs: 1.11, 1.15, 2.12, 3.13, 5.15, 6.16,
runtime error at LINE I

What will happen when you attempt to compile and run the following code?

#include <deque>
#include <iostream>
#include <algorithm>
using namespace std;
class Pocket {
        int value;
public:
        Pocket(int value):value(value){}
        int getValue() const
        { return value; }
        bool operator < (const Pocket & _Right) const
        { return value < _Right.value; }
};
ostream & operator <<(ostream & stream, const Pocket & pocket)
{
        stream << pocket.getValue();
        return stream;
}
void printer(Pocket i) {
        cout << i << ", ";
}
int main() {
        int mynumbers[] = { 8, 9, 7, 6, 4, 1 };
        deque<Pocket> d1(mynumbers, mynumbers + 6);
        d1.push_back(4);//LINE I
        deque<Pocket>::iterator it = lower_bound(d1.begin(), d1.end(), 3);//LINE II
        for_each(it, d1.end(), printer);
        return 0;
}


Select correct answer (single choice)
compilation error in LINE II
runtime error at LINE I
program outputs: 8, 9, 7, 6, 4, 1,
compilation error in LINE I
program outputs: 8, 9, 7, 6, 4, 4,
program outputs: 8, 9, 7, 6, 4, 1, 4,

What will happen when you attempt to compile and run the following code?

#include <deque>
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
class Pocket {
        int value;
public:
        Pocket(int value):value(value){}
        int getValue() const
        { return value; }
        bool operator > (const Pocket & _Right) const
        { return value > _Right.value; }
};
ostream & operator <<(ostream & stream, const Pocket & pocket)
{
        stream << pocket.getValue();
        return stream;
}
void printer(Pocket i) {
        cout << i << ", ";
}
int main() {
        int mynumbers[] = { 8, 9, 7, 6, 4, 1 };
        deque<Pocket> d1(mynumbers, mynumbers + 6);
        sort(d1.begin(), d1.end(), greater<Pocket>());//LINE I
        deque<Pocket>::iterator it = lower_bound(d1.begin(), d1.end(), 6, greater<Pocket>());//LINE II
        for_each(it, d1.end(), printer);
        return 0;
}


Select correct answer (single choice)
program outputs: 4, 1,
runtime error at LINE I
program outputs: 8, 9, 7, 6,
compilation error in LINE I
runtime error at LINE II
compilation error in LINE II
program outputs: 6, 4, 1,

What will happen when you attempt to compile and run the following code?

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void printer(int i) {
        cout << i << ", ";
}
int main() {
        int mynumbers1[]={8, 9, 7, 6};
        int mynumbers2[]={4, 1, 4, 5};
        vector<double> v1(7);
        sort(mynumbers2, mynumbers2 + 4);
        sort(mynumbers1, mynumbers1 + 4);//LINE I
        merge(mynumbers1, mynumbers1+2, mynumbers2, mynumbers2+2, v1.begin());//LINE II
        for_each(v1.begin(), v1.end(), printer);
        return 0;
}


Select correct answer (single choice)
program outputs: 1, 4, 6, 7, 0, 0, 0,
compilation error in LINE I
program outputs: 1, 4, 6, 7, 0, 0,
compilation error in LINE II
program outputs: 1, 4, 4, 6,
runtime error at LINE I

What will happen when you attempt to compile and run the following code?

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void printer(int i) {
        cout << i << ", ";
}
int main() {
        int mynumbers1[]={8, 9, 7, 6};
        int mynumbers2[]={4, 1, 4, 5};
        vector<int> v1(3);
        sort(mynumbers2, mynumbers2 + 3);
        sort(mynumbers1, mynumbers1 + 3);//LINE I
        set_symmetric_difference(mynumbers1, mynumbers1+1, mynumbers2, mynumbers2+2, v1.begin());//LINE II
        for_each(v1.begin(), v1.end(), printer);
        return 0;
}


Select correct answer (single choice)
compilation error in LINE I
program outputs: 1, 4, 7, 0, 0,
compilation error in LINE II
program outputs: 1, 4, 7,
runtime error at LINE I
runtime error at LINE II
program outputs: 1, 4, 4,

What will happen when you attempt to compile and run the following code?

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Pocket {
        int value;
public:
        Pocket(int value):value(value){}
        int getValue() const
        { return value; }
        bool operator < (const Pocket & _Right) const
        { return value < _Right.value; }
};
ostream & operator <<(ostream & stream, const Pocket & pocket)
{
        stream << pocket.getValue();
        return stream;
}
void printer(Pocket i) {
        cout << i << ", ";
}
int main() {
        int mynumbers1[]={8, 9, 7, 6};
        int mynumbers2[]={4, 1, 4, 5};
        vector<Pocket> v1(7, 0);
        sort(mynumbers2, mynumbers2 + 4);
        copy(mynumbers1, mynumbers1+3, v1.begin());
        copy(mynumbers2, mynumbers2+3, v1.begin()+3);
        sort(mynumbers1, mynumbers1 + 4);//LINE I
        inplace_merge(v1.begin(), v1.begin()+4, v1.end());//LINE II
        for_each(v1.begin(), v1.end(), printer);
        return 0;
}


Select correct answers (multiple choice)
runtime error at LINE I
program outputs: 4, 4, 0, 8, 9, 7, 1,
you can't call inplace_merge function on non ordered v1 vector ;;;;
program outputs: 4, 4, 0, 8, 9, 7,
compilation error in LINE II
program outputs: 4, 4, 8, 9, 7, 1,
compilation error in LINE I

What will happen when you attempt to compile and run the following code?

#include <deque>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
class Pocket {
        int value;
public:
        Pocket(int value):value(value){}
        int getValue() const
        { return value; }
        bool operator < (const Pocket & _Right) const
        { return value < _Right.value; }
};
ostream & operator <<(ostream & stream, const Pocket & pocket)
{
        stream << pocket.getValue();
        return stream;
}
int main() {
        Pocket mynumbers1[] = { 8, 9, 7, 6, 4, 1 };
        Pocket mynumbers2[]={Pocket(3),Pocket(2),Pocket(4),Pocket(1)};
        deque<Pocket> d1(mynumbers1, mynumbers1+6);
        set<Pocket> s1(mynumbers1, mynumbers1+6);
        sort(d1.begin(), d1.end());
        sort(mynumbers1, mynumbers1+5);
        sort(mynumbers2, mynumbers2+4);
        cout<<includes(d1.begin(),d1.end(), mynumbers1, mynumbers1+4)<<", "//LINE I
                <<includes(s1.begin(),s1.end(), mynumbers2, mynumbers2+3);//LINE II
        return 0;
}


Select correct answer (single choice)
compilation error in LINE I
program outputs: 0, 1
runtime error at LINE I
program outputs: 8, 9, 7, 6, 3, 2, 4
compilation error in LINE II
program outputs: 1, 0

What will happen when you attempt to compile and run the following code?

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Pocket {
        int value;
public:
        Pocket(int value):value(value){}
        int getValue() const
        { return value; }
        bool operator < (const Pocket & _Right) const
        { return value < _Right.value; }
        bool operator < (const int & _Right) const
        { return value < _Right; }
        operator int() const
        { return value;        }
};
ostream & operator <<(ostream & stream, const Pocket & pocket)
{
        stream << pocket.getValue();
        return stream;
}
void printer(Pocket i) {
        cout << i << ", ";
}
int main() {
        Pocket mynumbers1[]={4, 9, 1, 6};
        int mynumbers2[]={4, 1, 4, 5};
        vector<Pocket> v1(7,0);
        sort(mynumbers2, mynumbers2 + 4);
        sort(mynumbers1, mynumbers1 + 4);//LINE I
        set_intersection(mynumbers1, mynumbers1+3, mynumbers2, mynumbers2+3, v1.begin());//LINE II
        for_each(v1.begin(), v1.end(), printer);
        return 0;
}


Select correct answer (single choice)
program outputs: 4, 1,
program outputs: 0, 0, 0, 0, 0, 0, 0,
runtime error at LINE I
compilation error in LINE I
compilation error in LINE II
program outputs: 1, 4, 0, 0, 0, 0, 0,

What will happen when you attempt to compile and run the following code?

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Pocket {
        int value;
public:
        Pocket(int value):value(value){}
        int getValue() const
        { return value; }
        bool operator < (const Pocket & _Right) const
        { return value < _Right.value; }
        bool operator < (const int & _Right) const
        { return value < _Right; }
        operator int() const
        { return value;        }
};
ostream & operator <<(ostream & stream, const Pocket & pocket)
{
        stream << pocket.getValue();
        return stream;
}
void printer(Pocket i) {
        cout << i << ", ";
}
int main() {
        Pocket mynumbers1[]={8, 9, 7, 6};
        int mynumbers2[]={4, 1, 4, 5};
        vector<Pocket> v1(7,0);
        sort(mynumbers2, mynumbers2 + 4);
        sort(mynumbers1, mynumbers1 + 4);//LINE I
        set_symmetric_difference(mynumbers1, mynumbers1+3, mynumbers2, mynumbers2+3, v1.begin());//LINE II
        for_each(v1.begin(), v1.end(), printer);
        return 0;
}


Select correct answer (single choice)
program outputs: 4, 8, 3, 1,
compilation error in LINE II
compilation error in LINE I
program outputs: 1, 4, 4, 6, 7, 8, 0,
runtime error at LINE I
program outputs: 1, 4, 4, 6, 7, 8,

What will happen when you attempt to compile and run the following code?

#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
void printer(int i) {
        cout << i << ", ";
}
int main() {
        int mynumbers[] = { 8, 9, 7, 6, 4, 1 };
        vector<int> v1(mynumbers, mynumbers + 6);
        for_each(v1.begin(), v1.end(), bind2nd(plus<int>(), 1));//LINE I
        for_each(v1.rbegin(), v1.rend(), printer);//LINE II
        return 0;
}


Select correct answer (single choice)
program outputs: 8, 9, 7, 6, 4, 1,
compilation error in LINE I
program outputs: 2, 5, 7, 8, 10, 9,
compilation error in LINE II
program outputs: 1, 4, 6, 7, 9, 8,
runtime error at LINE I

What will happen when you attempt to compile and run the following code?

#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
void printer(int i) {
        cout << i << ", ";
}
int main() {
        int mynumbers1[] = {8, 9, 7, 6, 4, 1};
        int mynumbers2[] = {7, 8, 7, 4, 5, 1};
        vector<int> v1(mynumbers1, mynumbers1+6);
        vector<int> v2(mynumbers1, mynumbers1+6);
        vector<int> v3(mynumbers2, mynumbers2+6);//LINE I
        transform(v1.begin(), v1.end(), v2.rbegin(), v3.begin(), minus<int>());//LINE II
        for_each(v3.rbegin(), v3.rend(), printer);
        return 0;
}


Select correct answer (single choice)
compilation error in LINE I
program outputs: 1, 1, 0, 2, -1, 0,
program outputs:-7, -5, -1, 1, 5, 7,
runtime error at LINE I
compilation error in LINE II
program outputs: 0, -1, 2, 0, 1, 1,

What will happen when you attempt to compile and run the following code?

#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
struct Add : public binary_function<int, int, int> {
        int operator()(const int & _Left, const int & _Right) const//LINE I
        { return _Left+_Right;}
};
void printer(int i) {
        cout << i << ", ";
}
int main() {
        int mynumbers[] = { 8, 9, 7, 6, 4, 1 };
        vector<int> v1(mynumbers, mynumbers + 6);
        vector<int> v2(7);
        transform(v1.begin(), v1.end(), v2.begin(), bind1st(Add(), -1));//LINE II
        for_each(v2.rbegin(), v2.rend(), printer);
        return 0;
}


Select correct answer (single choice)
compilation error in LINE I
runtime error at LINE II
program outputs: 7, 8, 6, 8, 7,
runtime error at LINE I
program outputs: 0, 0, 3, 5, 6, 8, 7,
compilation error in LINE II
program outputs: 0, 3, 5, 6, 8, 7,

What will happen when you attempt to compile and run the following code?

#include <deque>
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
void printer(int i) {
        cout << i << ", ";
}
struct MultiAdd : public binary_function<int, int, int> {
        int operator()(const int & _Left, const int & _Right) const
        { return 2*(_Left+_Right);}
};
int main() {
        int mynumbers[] = { 8, 9, 7, 6, 4, 1 };
        deque<int> d1(mynumbers, mynumbers + 6);
        deque<int> d2(6);//LINE I
        transform(d1.begin(), d1.end(), d2.begin(), bind2nd(MultiAdd(), 1));//LINE II
        for_each(d2.begin(), d2.end(), printer);
        return 0;
}


Select correct answer (single choice)
program outputs: 32, 36, 28, 24, 16, 4,
compilation error in LINE II
program outputs: 4, 10, 14, 16, 18, 20,
compilation error in LINE I
program outputs: 18, 20, 16, 14, 10, 4,
runtime error at LINE I

What will happen when you attempt to compile and run the following code?

#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
int Mul(int & _Left)
{
        if (_Left<=3)
                return 2*_Left;
        else
                return 6;
}
int main() {
        int mynumbers[] = { 8, 9, 7, 2, 4, 1 };
        vector<int> v1(mynumbers, mynumbers + 6);
        vector<int> v2(7);
        transform(v1.begin(), v1.end(), v2.begin(), ptr_fun(Mul));//LINE I
        vector<int>::iterator it = find_if(v2.begin(), v2.end(), bind2nd(equal_to<int>(), 4));//LINE II
        cout<<*it<<endl;//LINE III
        return 0;
}


Select correct answer (single choice)
program outputs: 0
compilation error in LINE II
runtime error at LINE I
compilation error in LINE III
compilation error in LINE I
program outputs: 3
program outputs: 4

What will happen when you attempt to compile and run the following code?

#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
class Pocket {
        int value;
public:
        Pocket(int value):value(value){}
        int getValue() const
        { return value; }
        operator int() const
        { return value;        }
        bool operator < (const Pocket & _Right) const
        { return value < _Right.value; }
};
ostream & operator <<(ostream & stream, const Pocket & pocket)
{
        stream << pocket.getValue();
        return stream;
}
void printer(Pocket i) {//LINE I
        cout << i << ", ";
}
int main() {
        Pocket mynumbers1[] = { 8, 9, 7, 6, 4, 1 };
        Pocket mynumbers2[] = { 8, 9, 1, 2, 2, 1 };
        vector<Pocket> v1(mynumbers1, mynumbers1+6);
        vector<Pocket> v2(mynumbers2, mynumbers2+6);
        vector<Pocket> v3(6, 0);
        transform(v1.begin(), v1.end(), v2.begin(), v3.begin(), minus<Pocket>());//LINE II
        for_each(v1.rbegin(), v1.rend(), printer);
        return 0;
}


Select correct answer (single choice)
program outputs: 0, 3, 5, 6, 8, 7,
runtime error at LINE I
compilation error in LINE II
program outputs: 0, 0, 0, 0, 0, 0,
compilation error in LINE I
program outputs: 1, 4, 6, 7, 9, 8,

What will happen when you attempt to compile and run the following code?

#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
class Pocket {
        int value;
public:
        Pocket(int value):value(value){}
        int getValue() const
        { return value; }
        operator int() const
        { return value;        }
        bool operator < (const Pocket & _Right) const
        { return value < _Right.value; }
};
ostream & operator <<(ostream & stream, const Pocket & pocket)
{
        stream << pocket.getValue();
        return stream;
}
void printer(Pocket i) {//LINE I
        cout << i << ", ";
}
struct Add : public binary_function<Pocket, Pocket, Pocket> {
        Pocket operator()(const Pocket &_Left, const Pocket &_Right) const
        { return _Left+_Right;   }
};
int main() {
        Pocket mynumbers1[] = { 8, 9, 7, 6, 4, 1 };
        vector<Pocket> v1(mynumbers1, mynumbers1+6);
        vector<Pocket> v2(6, 0);
        transform(v1.begin(), v1.end(), v2.begin(), bind2nd(Add(),1));//LINE II
        for_each(v2.rbegin(), v2.rend(), printer);
        return 0;
}


Select correct answer (single choice)
compilation error in LINE I
program outputs: 0, 0, 0, 0, 0, 0,
compilation error in LINE II
program outputs: 2, 5, 7, 8, 10, 9,
runtime error at LINE I
program outputs: 9, 10, 8, 7, 5, 2,

What will happen when you attempt to compile and run the following code?

#include <iostream>
using namespace std;
int main()
{
        cout<<31<<", ";
        cout.setf(ios::hex);//LINE I
        cout<<31<<", ";
        cout.setf (ios::showbase, ios::basefield );  //LINE II
        cout<<63<<", ";
        return 0;
}


Select correct answer (single choice)
compilation error in LINE II
program outputs: 31, 31, 63
compilation error in LINE I
runtime error at LINE I
program outputs: 31, 31, 3f,
program outputs: 31, 31, ,

What will happen when you attempt to compile and run the following code?

#include <iostream>
using namespace std;
int main()
{
        cout<<31<<", ";
        cout.setf(ios::hex, ios::basefield);
        cout.setf (ios::showbase);  //LINE I
        cout<<31<<", ";
        cout.unsetf(ios::showbase);  //LINE II
        cout<<63<<", ";
        return 0;
}


Select correct answer (single choice)
compilation error in LINE I
runtime error at LINE I
program outputs: 31, 0x1f, 3f,
program outputs: 31, 31, 63
program outputs: 31, 31, 3f,
compilation error in LINE II

What will happen when you attempt to compile and run the following code?

#include <iostream>
using namespace std;
int main()
{
        cout<<31<<", ";
        cout.setf(ios::oct, ios::basefield);
        cout.setf (ios::showbase);  //LINE I
        cout<<31<<", ";
        cout.unsetf(ios::showbase);  //LINE II
        cout<<63<<", ";
        return 0;
}


Select correct answer (single choice)
compilation error in LINE I
program outputs: 31, 31, 63
runtime error at LINE I
compilation error in LINE II
program outputs: 31, 037, 77,
program outputs: 31, 31, 77,

What will happen when you attempt to compile and run the following code?

#include <iostream>
using namespace std;
int main()
{
        cout<<31.23<<", ";
        cout.setf(ios::hex, ios::basefield);
        cout.setf (ios::showbase);  //LINE I
        cout<<31.23<<", ";
        cout.unsetf(ios::showbase);  //LINE II
        cout<<63.23<<", ";
        return 0;
}


Select correct answer (single choice)
program outputs: 31.23, 31.27, 77.27,
program outputs: 31.23, 037.27, 77.27,
compilation error in LINE I
runtime error at LINE I
compilation error in LINE II
program outputs: 31.23, 31.23, 63.23

What will happen when you attempt to compile and run the following code?

#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
        double goodpi=3.141593;
        double badpi = 3.5;
        cout<<goodpi<<", ";
        cout<<setprecision(3);//LINE I
        cout<<goodpi<<", "; //LINE II
        cout<<badpi<<", ";
        return 0;
}


Select correct answer (single choice)
compilation error in LINE II
program outputs: 3.14159, 3.14, 3.5,
compilation error in LINE I
runtime error at LINE I
program outputs: 3.14159, 3.140, 3.500,
program outputs: 3.14159, 3.14, 3.50,

What will happen when you attempt to compile and run the following code assuming that you will enter following sequence: 4 5 6<enter>?

#include <iostream>
#include <string>
using namespace std;
int main ()
{
        string s;
        getline(s); //LINE I
        cout << s << ", " << s << ", " << endl; //LINE II
        return 0;
}


Select correct answer (single choice)
compilation error in LINE II
compilation error in LINE I
runtime error at LINE I
program outputs: 4, 5, 6, ,4, 5, 6,
program outputs: 4 5 6 4 5 6,
program outputs: 4 5 6, 4 5 6,

What will happen when you attempt to compile and run the following code assuming that you will enter following sequence: false 0 1<enter>?

#include <iostream>
using namespace std;
int main ()
{
        bool c1, c2, c3;
        cin >> boolalpha >> c1 >> c2 >> c3;
        cout << boolalpha << c3 << ", " << c1 << ", " << c2 << ", " << endl;//LINE I
        return 0;
}


Select correct answer (single choice)
compilation error in LINE I
program outputs: true, false, true,
program outputs: 1, 0, 1,
program outputs: false, false, true,
runtime error at LINE I

What will happen when you attempt to compile and run the following code assuming that you will enter following sequence: i j k jk q<enter>?

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
void printer(string i) {
        cout << i << ", ";
}
int main ()
{
        vector<string> v1;
        string s;
        do
        {
                cin >> s;
                v1.push_back(s);//LINE I
        }
        while (s != "q" && cin.good());//LINE II
        for_each(v1.begin(), v1.end(), printer);
        return 0;
}


Select correct answer (single choice)
compilation error in LINE II
program outputs: i, j, k, jk, q, q,
program outputs: i, j, k, jk,
runtime error at LINE I
program outputs: i, j, k, jk, q,
compilation error in LINE I

What will happen when you attempt to compile and run the following code?

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <fstream>
using namespace std;
void printer(int i) {
        cout << setw(2) << i << ", ";
}
int main ()
{
        int mynumbers[] = { 8, 9, 7, 6, 4, 1 };
        vector<int> v1(mynumbers, mynumbers + 6);
        fstream outfile("output.txt", ios::trunc|ios::out);
        int i=0 ;
        while (i>1);//LINE I
        {
                outfile>>i;//LINE II
                i = v1[0];
                v1.pop_back();
        }
        outfile.close();
        for_each(v1.begin(), v1.end(), printer);
        outfile.close();   outfile.open("output.txt");
        return 0;
}


Select correct answer (single choice)
program outputs: 8, 9, 7, 6, 4, 1,
program runs forever without output
compilation error in LINE II
compilation error in LINE I
program outputs: 8, 9, 7, 6, 4,
program outputs: 4, 6, 7, 8, 9,
runtime error at LINE I

What will happen when you attempt to compile and run the following code?

#include <iostream>
using namespace std;
template<class T>
void f(T &a)//LINE I
{
        cout << 2 * a << endl;
}
int main()
{
        int a = 2;
        f(a);//LINE II
        return 0;
}


Select correct answer (single choice)
runtime error at LINE I
program outputs: 2
compilation error in LINE II
compilation error in LINE I
program outputs: 4
program outputs: 1

What will happen when you attempt to compile and run the following code?

#include <iostream>
using namespace std;
template<class T>
void f(T &a)//LINE I
{
        cout << 1 + a << endl;
}
int main()
{
        double a = 1.5;
        f<float &>(a);//LINE II
        return 0;
}


Select correct answer (single choice)
compilation error in LINE II
program outputs: 1.5
program outputs: 2.5
compilation error in LINE I
program outputs: 2
runtime error at LINE I

What will happen when you attempt to compile and run the following code?

#include <iostream>
using namespace std;
void f(double a)//LINE II
{
        cout << 2 + a << endl;
}
template<class A>
void f(A &a)//LINE I
{
        cout << 1 + a << endl;
}
int main()
{
        double a = 1.5;
        f(a);//LINE II
        return 0;
}


Select correct answer (single choice)
runtime error at LINE II
program outputs: 1.5
program outputs: 2.5
compilation error in LINE I
compilation error in LINE II
program outputs: 3.5

What will happen when you attempt to compile and run the following code?

#include <iostream>
using namespace std;
template <class T>
class Pocket {
public:
        T        value;
        Pocket(T value);
};
template<class T>
Pocket<T>::Pocket(T value):value(value) {}//LINE I
int main()
{
        Pocket<double> a(7);//LINE II
        cout << a.value << endl;
        return 0;
}


Select correct answer (single choice)
runtime error at LINE II
program outputs: 7
compilation error in LINE II
compilation error in LINE I
program outputs: 7.0000
program outputs: 0

What will happen when you attempt to compile and run the following code?

#include <iostream>
using namespace std;
template <typedef T>//LINE I
class Pocket {
public:
        T        value;
        Pocket(T value){};//LINE II
};
int main()
{
        Pocket<double> a(7);
        cout << a.value << endl;
        return 0;
}


Select correct answer (single choice)
compilation error, reason in LINE II
compilation error, reason in LINE I
program outputs: 7
runtime error at LINE II
program outputs: 7.0000
program outputs: 0

What will happen when you attempt to compile and run the following code?

#include <iostream>
using namespace std;
class SomethingSpecial {
public:
        double value;
        SomethingSpecial():value(0){}
        SomethingSpecial(double value): value(value){}
        SomethingSpecial operator+=(SomethingSpecial & _Right) {
                SomethingSpecial result;
                result.value = value + _Right.value;
                return result;
        }
};
template <typename T>
class Pocket {
        T        value;
public:
        Pocket() {}
        Pocket(T value);
        T getValue() { return value; }
        void add(T _Right) { value += _Right; }
};
template<class T>
Pocket<T>::Pocket(T value):value(value) {}
int main()
{
        Pocket<double> a(3);//LINE I
        Pocket<SomethingSpecial> n;
        n.add(SomethingSpecial()) ;//LINE II
        cout << a.getValue() << ", ";
        a.add(3) ;
        cout << a.getValue();
        return 0;
}


Select correct answer (single choice)
compilation error in LINE I
program outputs: 6, 6
runtime error at LINE I
program outputs: 3, 6
compilation error in LINE II
program outputs: 3, 3,

What will happen when you attempt to compile and run the following code?

#include <iostream>
#include <string>
using namespace std;
template <class Ty>
class Pocket {
        Ty        value;
public:
        Pocket() {}
        Pocket(Ty value);
        Ty getValue() { return value; }
        void add(Ty _Right) { value += _Right; }
        template <class Tx>
        Tx get(Tx _Right) {
                return (Tx)(value) + _Right;//LINE I
        }
        friend ostream & operator<<(ostream & _os, const Pocket<Ty> & value) {
                _os<<value.value;
                return _os;
        }
};
template<class T>
Pocket<T>::Pocket(T value):value(value) {}
int main()
{
        Pocket<int> a(3);
        cout << a << ", ";
        cout << a.get<double>(2);
        return 0;
}


Select correct answer (single choice)
program outputs: 3, 3,
compilation error in LINE I
program outputs: 3, 5
compilation error in LINE II
program outputs: 3, 6


#endif /* ALL_H_ */
