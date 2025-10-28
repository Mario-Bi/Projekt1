#include "DoublyLinkedList.h"
#include <iostream>
using namespace std;

DoublyLinkedList::DoublyLinkedList() : head(nullptr), tail(nullptr), size(0) {}

DoublyLinkedList::~DoublyLinkedList() {
    clear();
}

// Dodaje nowy element na pocz¹tek listy
void DoublyLinkedList::addFront(int value) {
    Node* newNode = new Node(value);
    if (!head) head = tail = newNode;
    else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    size++;
}

// Dodaje nowy element na koniec listy
void DoublyLinkedList::addBack(int value) {
    Node* newNode = new Node(value);
    if (!tail) head = tail = newNode;
    else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    size++;
}

// Dodaje nowy element pod wskazany indeks
void DoublyLinkedList::addAt(int index, int value) {
    if (index <= 0) { addFront(value); return; }
    if (index >= size) { addBack(value); return; }

    Node* current = head;
    for (int i = 0; i < index - 1; i++)
        current = current->next;

    Node* newNode = new Node(value);
    newNode->next = current->next;
    newNode->prev = current;
    current->next->prev = newNode;
    current->next = newNode;
    size++;
}

// Usuwa pierwszy element listy
void DoublyLinkedList::removeFront() {
    if (!head) return;
    Node* temp = head;
    head = head->next;
    if (head) head->prev = nullptr;
    else tail = nullptr;
    delete temp;
    size--;
}

// Usuwa ostatni element listy
void DoublyLinkedList::removeBack() {
    if (!tail) return;
    Node* temp = tail;
    tail = tail->prev;
    if (tail) tail->next = nullptr;
    else head = nullptr;
    delete temp;
    size--;
}

// Usuwa element pod wskazanym indeksem
void DoublyLinkedList::removeAt(int index) {
    if (index < 0 || index >= size) return;
    if (index == 0) { removeFront(); return; }
    if (index == size - 1) { removeBack(); return; }

    Node* current = head;
    for (int i = 0; i < index; i++)
        current = current->next;

    current->prev->next = current->next;
    current->next->prev = current->prev;
    delete current;
    size--;
}

// Wyœwietla listê od pocz¹tku do koñca
void DoublyLinkedList::display() {
    Node* temp = head;
    cout << "Lista: ";
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Wyœwietla listê od koñca do pocz¹tku
void DoublyLinkedList::displayReverse() {
    Node* temp = tail;
    cout << "Lista odwrotnie: ";
    while (temp) {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;
}

// Usuwa wszystkie elementy z listy
void DoublyLinkedList::clear() {
    while (head)
        removeFront();
}

// Zwraca iterator zaczynaj¹cy od pocz¹tku listy
Iterator DoublyLinkedList::getIteratorFromStart() {
    return Iterator(head);
}

// Zwraca iterator zaczynaj¹cy od koñca listy
Iterator DoublyLinkedList::getIteratorFromEnd() {
    return Iterator(tail);
}
