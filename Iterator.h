#ifndef ITERATOR_H
#define ITERATOR_H

#include "Node.h"

class Iterator {
private:
    Node* current;
public:
    Iterator(Node* node);
    bool hasNext();
    bool hasPrev();
    int next();
    int prev();
};

#endif

