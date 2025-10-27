#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

#include "Node.h"
#include "Iterator.h"

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;
    int size;

public:
    DoublyLinkedList();
    ~DoublyLinkedList();

    void addFront(int value);
    void addBack(int value);
    void addAt(int index, int value);

    void removeFront();
    void removeBack();
    void removeAt(int index);

    void display();
    void displayReverse();
    void clear();

    Iterator getIteratorFromStart();
    Iterator getIteratorFromEnd();
};

#endif
