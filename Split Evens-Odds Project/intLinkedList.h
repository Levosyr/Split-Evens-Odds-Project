#include "unorderedLinkedList.h"  // Include the base class

class intLinkedList : public unorderedLinkedList<int> {
public:
    void splitEvensOddsList(intLinkedList& evensList, intLinkedList& oddsList);
};
