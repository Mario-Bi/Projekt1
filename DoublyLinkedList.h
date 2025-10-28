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

    // Dodawanie element�w
    void addFront(int value);
    void addBack(int value);
    void addAt(int index, int value);

    // Us�wanie element�w
    void removeFront();
    void removeBack();
    void removeAt(int index);

    // Wy�wietlanie i czyszczenie
    void display();
    void displayReverse();
    void clear();

    // Pobranie iterator�w
    Iterator getIteratorFromStart();
    Iterator getIteratorFromEnd();
};

#endif
