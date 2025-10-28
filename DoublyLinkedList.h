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

    // Dodawanie elementów
    void addFront(int value);
    void addBack(int value);
    void addAt(int index, int value);

    // Usówanie elementów
    void removeFront();
    void removeBack();
    void removeAt(int index);

    // Wyœwietlanie i czyszczenie
    void display();
    void displayReverse();
    void clear();

    // Pobranie iteratorów
    Iterator getIteratorFromStart();
    Iterator getIteratorFromEnd();
};

#endif
