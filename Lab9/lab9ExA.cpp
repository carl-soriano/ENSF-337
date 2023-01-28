// lab9ExA.cpp

#include <iostream>
#include <iomanip>
using namespace std;
#include "SimpleList.h"

void print(const SimpleList& list);
// PROMISES: prints values in the list from first node (node number 0) to
//           the last node.

int main(){
    SimpleList list;
    list.push_front(50);
    list.push_back(440);
    list.at(1) = 770;
    cout << list.at(0) << endl;
    const SimpleList list2 = list;
    cout << "printing list2:\n";
    print (list2);
    list.push_back(330);
    list.push_back(220);
    list.push_back(110);
    cout << "printing list:\n";
    print (list);
    return 0;
}

void print(const SimpleList& list)
{
    cout << "reached\n";
    for(int i = 0; i < list.size(); i++)
        cout << list.at(i) << "  ";
}
