#ifndef H_nodeType
#define H_nodeType

template <class Type>
struct nodeType {
    Type info; // To store the data
    nodeType<Type>* link; // To point to the next node
};

#endif
#pragma once
