#include "ListFactory.h"

// Implementacja metody fabrykuj�cej now� list�
// Tworzy obiekt klasy DoublyLinkedList dynamicznie na stercie
// i zwraca wska�nik do niego.
DoublyLinkedList* ListFactory::createList() {
    return new DoublyLinkedList();
}
