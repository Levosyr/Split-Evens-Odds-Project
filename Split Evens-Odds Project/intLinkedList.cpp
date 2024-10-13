#include "intLinkedList.h"

void intLinkedList::splitEvensOddsList(intLinkedList& evensList, intLinkedList& oddsList) {
    // Temporary pointers to traverse the current list
    nodeType<int>* current = first;
    nodeType<int>* evenTail = nullptr;
    nodeType<int>* oddTail = nullptr;

    // Traverse the original list and split nodes
    while (current != nullptr) {
        nodeType<int>* temp = current;
        current = current->link;

        // Detach the node from the current list
        temp->link = nullptr;

        // Check if the value is even or odd
        if (temp->info % 2 == 0) {
            // Append to evensList
            if (evensList.first == nullptr) {
                evensList.first = temp;  // If evensList is empty
            }
            else {
                evenTail->link = temp;  // Otherwise, append to the tail
            }
            evenTail = temp;  // Update the tail of evensList
        }
        else {
            // Append to oddsList
            if (oddsList.first == nullptr) {
                oddsList.first = temp;  // If oddsList is empty
            }
            else {
                oddTail->link = temp;  // Otherwise, append to the tail
            }
            oddTail = temp;  // Update the tail of oddsList
        }
    }

    // The original list is now empty
    first = nullptr;
}
