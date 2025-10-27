#ifndef LISTFACTORY_H
#define LISTFACTORY_H

#include "DoublyLinkedList.h"

class ListFactory {
public:
    static DoublyLinkedList* createList();
};

#endif
