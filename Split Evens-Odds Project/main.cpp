#include <iostream>
#include "intLinkedList.h"

using namespace std;

int main() {
    intLinkedList list, evensList, oddsList;
    int value;

    cout << "Enter integers ending with -999:" << endl;

    // Input the integers into the original list
    cin >> value;
    while (value != -999) {
        list.insertLast(value);  // Insert value at the end of the list
        cin >> value;
    }

    // Print the original list
    cout << "list: ";
    for (auto iter = list.begin(); iter != list.end(); ++iter) {
        cout << *iter << " ";
    }
    cout << endl;

    // Split the list into evens and odds
    list.splitEvensOddsList(evensList, oddsList);

    // Print the even list
    cout << "evensList: ";
    for (auto iter = evensList.begin(); iter != evensList.end(); ++iter) {
        cout << *iter << " ";
    }
    cout << endl;

    // Print the odd list
    cout << "oddsList: ";
    for (auto iter = oddsList.begin(); iter != oddsList.end(); ++iter) {
        cout << *iter << " ";
    }
    cout << endl;

    return 0;
}
