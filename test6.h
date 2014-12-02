/*
 * test6.h
 *
 *  Created on: 2 Dec 2014
 *      Author: lester
 */

#ifndef TEST6_H_
#define TEST6_H_



Exam
CPP - Chapter 6 Assessment
Time left: 59:45
What will happen when you attempt to compile and run the following code?

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void printer(int i) {
        cout << i << ", ";
}
int main() {
        int mynumbers1[]={3, 9, 0, 2};
        int mynumbers2[]={6, 1, 4, 5};
        vector<int> v1(7);
        sort(mynumbers2, mynumbers2 + 4);
        sort(mynumbers1, mynumbers1 + 4);//LINE I
        merge(mynumbers1, mynumbers1+5, mynumbers2, mynumbers2+5, v1.begin());//LINE II
        for_each(v1.begin(), v1.end(), printer);
        return 0;
}

Select correct answer (single choice)
program outputs: 6, 1, 4, 5, 3, 9, 0, 2,
compilation error in LINE I
program outputs: 0, 1, 2, 3, 4, 5, 6, 9,
compilation error in LINE II
program outputs: 1, 2, 3, 4, 5, 6, 9, 0,
program outputs: 3, 9, 0, 2, 6, 1, 4, 5,
runtime error at LINE II
What will happen when you attempt to compile and run the following code?

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void printer(int i) {
        cout << i << ", ";
}
int main() {
        int mynumbers1[]={3, 9, 0, 2};
        int mynumbers2[]={6, 1, 4, 5};
        vector<int> v1(7);
        sort(mynumbers2, mynumbers2 + 4);
        sort(mynumbers1, mynumbers1 + 4);//LINE I
        merge(mynumbers1, mynumbers1+3, mynumbers2, mynumbers2+3, v1.begin());//LINE II
        for_each(v1.begin(), v1.end(), printer);
        return 0;
}


Select correct answer (single choice)
runtime error at LINE II
program outputs: 0, 0, 1, 2, 4, 5, 6,
compilation error in LINE I
program outputs: 0, 1, 2, 0, 4, 5,
program outputs: 0, 1, 2, 4, 5, 6,
compilation error in LINE II
program outputs: 0, 1, 2, 3, 4, 5, 0,
What will happen when you attempt to compile and run the following code?

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void printer(int i) {
        cout << i << ", ";
}
int main() {
        int mynumbers1[]={3, 9, 0, 2};
        int mynumbers2[]={6, 1, 4, 5};
        vector<double> v1(7);
        sort(mynumbers2, mynumbers2 + 4);
        sort(mynumbers1, mynumbers1 + 4);//LINE I
        merge(mynumbers1, mynumbers1+3, mynumbers2, v1.begin());//LINE II
        for_each(v1.begin(), v1.end(), printer);
        return 0;
}


Select correct answer (single choice)
runtime error at LINE II
program outputs: 0, 1, 2, 3, 4, 5, 0,
program outputs: 0, 1, 2, 0, 4, 5,
program outputs: 0, 1, 2, 4, 5, 6,
program outputs: 0, 0, 1, 2, 4, 5, 6,
compilation error in LINE II
compilation error in LINE I

What will happen when you attempt to compile and run the following code?

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void printer(int i) {
        cout << i << ", ";
}
int main() {
        int mynumbers1[]={ 3, 9, 0, 2};
        int mynumbers2[]={6, 1, 4, 5};
        vector<int> v1(14);
        vector<int> v2(34);
        sort(mynumbers2, mynumbers2 + 4);
        sort(mynumbers1, mynumbers1 + 4);
        copy(mynumbers1, mynumbers1+4, v1.begin());
        copy(mynumbers2, mynumbers2+4, v1.begin()+5);//LINE I
        merge(v1.begin(), v1.end(), v1.begin(), v1.end(), v2.begin());//LINE II
        for_each(v1.begin(), v1.end(), printer);
        return 0;
}


Select correct answer (single choice)
program outputs: 0, 1, 2, 3, 4, 5, 6, 9,
program outputs: 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 4, 5, 6, 9,
compilation error in LINE II
compilation error in LINE I
program outputs: 0, 0, 0, 0, 0, 1, 2, 3, 4, 5, 6, 9,
runtime error at LINE II
program outputs: 0, 0, 0, 1, 2, 3, 4, 5, 6, 9,

What will happen when you attempt to compile and run the following code?

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void printer(int i) {
        cout << i << ", ";
}
int main() {
        int mynumbers1[]={ 3, 9, 0, 2};
        int mynumbers2[]={6, 1, 4, 5};
        vector<int> v1(14);
        vector<int> v2(34);
        sort(mynumbers2, mynumbers2 + 4);
        sort(mynumbers1, mynumbers1 + 4);
        copy(mynumbers1, mynumbers1+4, v1.begin());
        copy(mynumbers2, mynumbers2+4, v1.begin()+5);//LINE I
        sort(v1.begin(), v1.end());
        merge(v1.begin(), v1.end(), v1.begin(), v1.end(), v2.begin());//LINE II
        for_each(v1.begin(), v1.end(), printer);
        return 0;
}


Select correct answer (single choice)
program outputs: 0, 0, 0, 1, 2, 3, 4, 5, 6, 9,
runtime error at LINE II
program outputs: 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 4, 5, 6, 9,
program outputs: 0, 1, 2, 3, 4, 5, 6, 9,
compilation error in LINE I
program outputs: 0, 0, 0, 0, 0, 1, 2, 3, 4, 5, 6, 9,
compilation error in LINE II

What will happen when you attempt to compile and run the following code?

#include <deque>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
int main() {
        int mynumbers1[]={3, 9, 0, 2};
        int mynumbers2[]={6, 1, 4, 5};
        sort(mynumbers1, mynumbers1 + 4);
        sort(mynumbers2, mynumbers2 + 4);
        deque<int> d1(mynumbers1, mynumbers1+3);//LINE I
        set<int> s1(mynumbers2, mynumbers2+3);//LINE II
        sort(d1.begin(), d1.end());
        cout<<includes(s1.begin(), s1.end(), mynumbers1, mynumbers1+4) <<", "
                <<includes(d1.begin(), d1.end(), mynumbers1, mynumbers1+4)
                <<endl;
        return 0;
}


Select correct answer (single choice)
program outputs: 0, 0,
compilation error in LINE I
runtime error at LINE II
compilation error in LINE II
program outputs: FALSE, FALSE
program outputs: false, false
program outputs: 0, 1,

What will happen when you attempt to compile and run the following code?

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void printer(int i) {
        cout << i << ", ";
}
int main() {
        int mynumbers1[]={3, 9, 0, 2};
        int mynumbers2[]={6, 1, 4, 5};
        vector<int> v1(7);
        sort(mynumbers2, mynumbers2 + 4);//LINE I
        sort(mynumbers1, mynumbers1 + 4);
        set_union(mynumbers1, mynumbers1+4, mynumbers2, mynumbers2+4, v1.begin());//LINE II
        for_each(v1.begin(), v1.end(), printer);
        return 0;
}


Select correct answer (single choice)
compilation error in LINE II
program outputs: 0, 2, 3, 4, 5,
runtime error at LINE I
program outputs: 0, 1, 2, 3, 4, 5,
program outputs: 1, 2, 3, 4, 5,
runtime error at LINE II
program outputs: 0, 1, 2, 3, 4, 5, 0,

What will happen when you attempt to compile and run the following code?

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void printer(int i) {
        cout << i << ", ";
}
int main() {
        int mynumbers1[]={3, 9, 0, 2};
        int mynumbers2[]={6, 1, 4, 5};
        vector<int> v1(7);
        sort(mynumbers2, mynumbers2 + 4);//LINE I
        sort(mynumbers1, mynumbers1 + 4);
        set_union(mynumbers1, mynumbers1+3, mynumbers2, mynumbers2+3, v1.begin());//LINE II
        for_each(v1.begin(), v1.end(), printer);
        return 0;
}


Select correct answers (multiple choice)
program outputs: 0, 2, 3, 4, 5,
program outputs: 0, 0, 1, 2, 3, 4, 5,
program outputs: 1, 2, 3, 4, 5,
program outputs: 0, 1, 2, 3, 4, 5, 0,
compilation error in LINE II
runtime error at LINE II
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
        int mynumbers1[]={3, 9, 0, 2};
        int mynumbers2[]={6, 1, 4, 5};
        vector<int> v1(7);
        sort(mynumbers2, mynumbers2 + 4);
        sort(mynumbers1, mynumbers1 + 4);//LINE I
        set_intersection(mynumbers1, mynumbers1+5, mynumbers2, mynumbers2+5, v1.begin());//LINE II
        for_each(v1.begin(), v1.end(), printer);
        return 0;
}


Select correct answer (single choice)
program outputs: 9, 1,
compilation error in LINE II
runtime error at LINE I
program outputs: 0, 0, 0, 0, 0,
program outputs: 0, 0, 0, 0, 0, 0,
runtime error at LINE II
program outputs: 0, 0, 0, 0, 0, 0, 0,

What will happen when you attempt to compile and run the following code?

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void printer(int i) {
        cout << i << ", ";
}
int main() {
        int mynumbers1[]={3, 9, 0, 2};
        int mynumbers2[]={6, 1, 4, 5};
        vector<int> v1(7);
        sort(mynumbers2, mynumbers2 + 4);
        sort(mynumbers1, mynumbers1 + 4);//LINE I
        set_intersection(mynumbers1, mynumbers1+3, mynumbers2, mynumbers2+3, v1.begin());//LINE II
        for_each(v1.begin(), v1.end(), printer);
        return 0;
}


Select correct answer (single choice)
program outputs: 0, 0, 0, 0, 0,
runtime error at LINE I
program outputs: 9, 1,
compilation error in LINE II
runtime error at LINE II
program outputs: 0, 0, 0, 0, 0, 0, 0,
program outputs: 0, 0, 0, 0, 0, 0,

What will happen when you attempt to compile and run the following code?

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void printer(int i) {
        cout << i << ", ";
}
int main() {
        int mynumbers1[]={3, 9, 0, 2};
        int mynumbers2[]={6, 1, 4, 5};
        vector<int> v1(7);
        sort(mynumbers2, mynumbers2 + 3);
        sort(mynumbers1, mynumbers1 + 3);//LINE I
        set_difference(mynumbers1, mynumbers1+4, mynumbers2, mynumbers2+4, v1.begin());//LINE II
        for_each(v1.begin(), v1.end(), printer);
        return 0;
}


Select correct answer (single choice)
runtime error at LINE I
program outputs: 0, 3, 9, 0, 0, 0,
program outputs: 0, 3, 9, 0, 0, 0, 0,
compilation error in LINE II
runtime error at LINE II
program outputs: 0, 3, 9,
program outputs: 0, 0, 0, 0, 0, 0, 0,

What will happen when you attempt to compile and run the following code?

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void printer(int i) {
        cout << i << ", ";
}
int main() {
        int mynumbers1[]={3, 9, 0, 2};
        int mynumbers2[]={6, 1, 4, 5};
        vector<int> v1(7);
        sort(mynumbers2, mynumbers2 + 3);
        sort(mynumbers1, mynumbers1 + 3);
        set_difference(mynumbers1, mynumbers1+3, mynumbers2, mynumbers2+3, v1.begin());
        for_each(v1.begin(), v1.end(), printer);
        return 0;
}


Select correct answer (single choice)
runtime error at LINE I
compilation error in LINE II
program outputs: 0, 3, 9, 0, 0, 0,
program outputs: 0, 0, 0, 0, 0, 0, 0,
runtime error at LINE II
program outputs: 0, 3, 9,
program outputs: 0, 3, 9, 0, 0, 0, 0,

What will happen when you attempt to compile and run the following code?

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void printer(int i) {
        cout << i << ", ";
}
int main() {
        int mynumbers1[]={3, 9, 0, 2};
        int mynumbers2[]={6, 1, 4, 5};
        vector<int> v1(5);
        sort(mynumbers2, mynumbers2 + 3);
        sort(mynumbers1, mynumbers1 + 3);//LINE I
        set_symmetric_difference(mynumbers1, mynumbers1+3, mynumbers2, mynumbers2+2, v1.begin());//LINE II
        for_each(v1.begin(), v1.end(), printer);
        return 0;
}


Select correct answer (single choice)
runtime error at LINE II
program outputs: 0, 1, 3, 4, 9, 0, 0,
runtime error at LINE I
program outputs: 0, 1, 3, 4, 9, 0,
program outputs: 0, 1, 3, 4, 9,
compilation error in LINE II
program outputs: 0, 3, 9, 0, 0, 0, 0,

What will happen when you attempt to compile and run the following code?

#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
int main() {
        int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
        vector<int> v1(mynumbers, mynumbers + 7);
        sort(v1.begin(), v1.end(), greater<int>());//LINE I
        cout<< *min_element(v1.begin(), v1.end()) << ", ";//LINE II
        return 0;
}


Select correct answer (single choice)
compilation error in LINE II
program outputs: 3, 9, 0,
program outputs: 0, 0, 0,
runtime error at LINE I
program outputs: 3,
runtime error at LINE II
program outputs: 0,

What will happen when you attempt to compile and run the following code?

#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
int main() {
        int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
        vector<int> v1(mynumbers, mynumbers + 7);//LINE I
        cout<< *min_element(v1.begin(), v1.end()) << ", ";//LINE II
        return 0;
}


Select correct answer (single choice)
runtime error at LINE I
program outputs: 3, 9, 0,
you can't call min_element function on non ordered v1 vector
program outputs: 3,
program outputs: 0,
runtime error at LINE II
compilation error in LINE II
program outputs: 0, 0, 0,

What will happen when you attempt to compile and run the following code?

#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
int main() {
        int mynumbers[] = { 3, 9, 0, 2, 1, 4, 5 };
        vector<int> v1(mynumbers, mynumbers + 7);//LINE I
        cout<< *max_element(v1.begin(), v1.end()) << ", ";//LINE II
        return 0;
}


Select correct answer (single choice)
runtime error at LINE I
program outputs: 3,
compilation error in LINE II
program outputs: 5,
you can't call max_element function on non ordered v1 vector
program outputs: 9,
runtime error at LINE II
program outputs: 0,

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
        Pocket mynumbers1[]={3, 9, 0, 2};
        Pocket mynumbers2[]={6, 1, 4, 5};
        vector<Pocket> v1(mynumbers1, mynumbers1+2);//LINE I
        sort(mynumbers2, mynumbers2 + 4);
        sort(mynumbers1, mynumbers1 + 4);
        merge(mynumbers1, mynumbers1+3, mynumbers2, mynumbers2+3, v1.begin());//LINE II
        for_each(v1.begin(), v1.end(), printer);
        return 0;
}


Select correct answer (single choice)
program outputs: 3, 9, 0, 6, 1, 4, 5,
compilation error in LINE II
runtime error at LINE I
runtime error at LINE II
program outputs: 3, 9, 0, 6, 1, 4,
you can't call merge function on slices of mynumbers arrays
program outputs: 3, 9, 0, 2, 6, 1, 4, 5,
program outputs: 3, 9, 0,

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
        Pocket mynumbers1[]={ 3, 9, 0, 2};
        Pocket mynumbers2[]={6, 1, 4, 5};
        vector<Pocket> v1(7, 0);
        sort(mynumbers2, mynumbers2 + 4);
        copy(mynumbers1, mynumbers1+4, v1.begin());
        copy(mynumbers2, mynumbers2+4, v1.begin()+3);
        sort(mynumbers1, mynumbers1 + 4);//LINE I
        inplace_merge(v1.begin(), v1.begin()+5, v1.end());//LINE II
        for_each(v1.begin(), v1.end(), printer);
        return 0;
}


Select correct answers (multiple choice)
runtime error at LINE II
program outputs: 3, 9, 0,
compilation error in LINE II
runtime error at LINE I
program outputs: 3, 9, 0, 2, 6, 1, 4, 5,
program outputs: 3, 9, 0, 6, 1, 4, 5,
you can't call inplace_merge function on non ordered v1 vector
program outputs: 3, 9, 0, 6, 1, 4,

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
        Pocket mynumbers1[]={ 3, 9, 0, 2};
        sort(mynumbers1, mynumbers1 + 4);//LINE I
        vector<Pocket> v1(mynumbers1, mynumbers1+3);
        inplace_merge(v1.begin(), v1.begin()+3, v1.end());//LINE II
        for_each(v1.begin(), v1.end(), printer);
        return 0;
}


Select correct answer (single choice)
compilation error in LINE II
program outputs: 0, 0, 0,
runtime error at LINE II
runtime error at LINE I
program outputs: 0, 0, 0, 0,
program outputs: 0, 2, 3,
program outputs: 0, 2, 3, 9

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
        Pocket mynumbers1[] = { 3, 9, 0, 2, 1, 4, 5 };
        Pocket mynumbers2[]={Pocket(3),Pocket(2),Pocket(4),Pocket(1)};
        deque<Pocket> d1(mynumbers1, mynumbers1+7);
        set<Pocket> s1(mynumbers1, mynumbers1+7);
        sort(d1.begin(), d1.end());
        sort(mynumbers1, mynumbers1+5);
        cout<<includes(d1.begin(),d1.end(), mynumbers1, mynumbers1+4)<<", "//LINE I
                <<includes(s1.begin(),s1.end(), mynumbers2, mynumbers2+4)//LINE II
                <<endl;
        return 0;
}


Select correct answer (single choice)
compilation error in LINE II
program outputs: 0, 0
program outputs: 0, 1
program outputs: 1, 0
program outputs: 1, 1
runtime error at LINE II
runtime error at LINE I

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
        Pocket mynumbers1[] = { 3, 9, 0, 2, 1, 4, 5 };
        Pocket mynumbers2[]={Pocket(3),Pocket(2),Pocket(4),Pocket(1)};
        deque<Pocket> d1(mynumbers1, mynumbers1+7);
        set<Pocket> s1(mynumbers1, mynumbers1+7);
        sort(d1.begin(), d1.end());
        sort(mynumbers1, mynumbers1+5);
        sort(mynumbers2, mynumbers2+4);
        cout<<includes(d1.begin(),d1.end(), mynumbers1, mynumbers1+4)<<", "//LINE I
                <<includes(s1.begin(),s1.end(), mynumbers2, mynumbers2+3)//LINE II
                <<endl;
        return 0;
}


Select correct answer (single choice)
program outputs: 0, 1
runtime error at LINE II
compilation error in LINE II
program outputs: 0, 0
program outputs: 1, 1
runtime error at LINE I
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
        Pocket mynumbers1[]={ 3, 9, 0, 2};
        int mynumbers2[]={6, 1, 4, 5};
        vector<Pocket> v1(7,0);
        sort(mynumbers2, mynumbers2 + 4);
        sort(mynumbers1, mynumbers1 + 4);//LINE I
        set_union(mynumbers1, mynumbers1+3, mynumbers2, mynumbers2+3, v1.begin());//LINE II
        for_each(v1.begin(), v1.end(), printer);
        return 0;
}


Select correct answer (single choice)
runtime error at LINE I
runtime error at LINE II
program outputs: 0, 1, 2, 3, 4, 5, 0
program outputs: 6, 1, 4, 5
program outputs: 3, 9, 0, 2
compilation error in LINE II
program outputs: 0, 1, 2, 3, 4, 5,

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
        Pocket mynumbers1[]={ 3, 9, 0, 2};
        int mynumbers2[]={6, 1, 4, 2};
        vector<Pocket> v1(7,0);
        sort(mynumbers2, mynumbers2 + 4);
        sort(mynumbers1, mynumbers1 + 4);//LINE I
        set_intersection(mynumbers1, mynumbers1+3, mynumbers2, mynumbers2+3, v1.begin());//LINE II
        for_each(v1.begin(), v1.end(), printer);
        return 0;
}


Select correct answer (single choice)
program outputs: 0, 0, 0, 0, 0, 0, 0
compilation error in LINE II
program outputs: 0, 0, 0, 0, 0, 0,
program outputs: 5, 7, 8,
runtime error at LINE I
runtime error at LINE II
program outputs: 2, 0, 0, 0, 0, 0, 0,

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
        Pocket mynumbers1[]={ 3, 9, 0, 2};
        int mynumbers2[]={6, 1, 4, 2};
        vector<Pocket> v1(7,0);
        sort(mynumbers2, mynumbers2 + 4);
        sort(mynumbers1, mynumbers1 + 4);//LINE I
        set_difference(mynumbers1, mynumbers1+3, mynumbers2, mynumbers2+3, v1.begin());//LINE II
        for_each(v1.begin(), v1.end(), printer);
        return 0;
}


Select correct answer (single choice)
program outputs: 3, 0, 0, 0, 0, 0, 0
program outputs: 2, 0, 0, 0, 0, 0, 0,
runtime error at LINE I
program outputs: 0, 3, 0, 0, 0, 0, 0,
runtime error at LINE II
compilation error in LINE II

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
        Pocket mynumbers1[]={ 3, 9, 0, 2};
        int mynumbers2[]={6, 1, 4, 2};
        vector<Pocket> v1(7,0);
        sort(mynumbers2, mynumbers2 + 4);
        sort(mynumbers1, mynumbers1 + 4);//LINE I
        set_symmetric_difference(mynumbers1, mynumbers1+3, mynumbers2, mynumbers2+3, v1.begin());//LINE II
        for_each(v1.begin(), v1.end(), printer);
        return 0;
}


Select correct answer (single choice)
runtime error at LINE II
program outputs: 0, 1, 3, 4, 0, 0, 0,
program outputs: 0, 3, 0, 0, 0, 0, 0,
compilation error in LINE II
runtime error at LINE I
program outputs: 3, 0, 0, 0, 0, 0, 0

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
int main() {
        Pocket mynumbers1[]={ 3, 9, 0, 2};
        int mynumbers2[]={6, 1, 4, 2};
        vector<Pocket> v1(7,0);
        sort(mynumbers2, mynumbers2 + 4);
        sort(mynumbers1, mynumbers1 + 4);
        set_symmetric_difference(mynumbers1, mynumbers1+3, mynumbers2, mynumbers2+3, v1.begin());//LINE I
        cout<< *min_element(v1.begin(), v1.end()) << ", " ;//LINE II
        return 0;
}


Select correct answers (multiple choice)
program outputs: 3,
runtime error at LINE II
compilation error in LINE II
compilation error
program outputs: 1,
program outputs: 0,
runtime error at LINE I

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
int main() {
        Pocket mynumbers1[]={ 3, 9, 0, 2};
        int mynumbers2[]={6, 1, 4, 2};
        vector<Pocket> v1(7,0);
        sort(mynumbers2, mynumbers2 + 4);
        sort(mynumbers1, mynumbers1 + 4);
        set_symmetric_difference(mynumbers1, mynumbers1+3, mynumbers2, mynumbers2+3, v1.begin());//LINE I
        cout<< max_element(v1.begin(), v1.end()) << ", " ;//LINE II
        return 0;
}


Select correct answer (single choice)
untime error at LINE II
compilation error in LINE II
program outputs: 3,
program outputs: 4,
runtime error at LINE I
program outputs: 9,
program outputs: 0,

What will happen when you attempt to compile and run the following code?

#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
void printer(string i) {
        cout << i << ", ";
}
int main() {
        string myvalues[]={"yyy","Yyy", "yYy","yyY","ZZZ","zZZ", "ZzZ", "ZZz"};
        vector<string> v1(myvalues, myvalues+8);
        sort(v1.begin(), v1.end());
        remove(v1.begin(), v1.end(), "yyy");
        for_each(v1.begin(), v1.end(), printer);
        return 0;
}


Select correct answer (single choice)
runtime error at LINE II
runtime error at LINE I
program outputs: Yyy, ZZZ, ZZz, ZzZ, yYy, yyY, zZZ,
program outputs: yyy, Yyy, ZZZ, ZZz, ZzZ, yYy, yyY, zZZ, ,
compilation error in LINE II
program outputs: Yyy, ZZZ, ZZz, ZzZ, yYy, yyY, zZZ, ,

What will happen when you attempt to compile and run the following code?

#include <deque>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
int main() {
        char s[]={"lazybrownfox"};
        char pattern1[]={"ybr"};
        char pattern2[]={"nfo"};
        sort(s, s+8);
        sort(pattern1, pattern1+3);
        sort(pattern2, pattern2+3);
        cout<<includes(s, s+7, pattern1, pattern1+3) <<", "
                <<includes(s, s+6, pattern2, pattern2+3);
        return 0;
}


Select correct answer (single choice)
runtime error at LINE II
program outputs: 1, 1,
program outputs: 0, 0,
program outputs: 0, 1,
compilation error in LINE II
program outputs: 1, 0,
runtime error at LINE I

What will happen when you attempt to compile and run the following code?

#include <deque>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
bool Compare(char _Left, char _Right) { return tolower(_Left) < tolower(_Right);}
int main() {
        char s[]={"lazybrownfox"};
        char pattern1[]={"ybr"};
        char pattern2[]={"nfo"};
        sort(s, s+8, Compare);
        sort(pattern1, pattern1+3);
        sort(pattern2, pattern2+3);
        cout<<includes(s, s+7, pattern1, pattern1+3) <<", "
                <<pattern2;
        return 0;
}


Select correct answer (single choice)
compilation error in LINE II
runtime error at LINE I
program outputs: 1, fno,
program outputs: 1, nfo,
program outputs: 1, 0,



#endif /* TEST6_H_ */
