#include "ListFactory.h"

// Implementacja metody fabrykuj¹cej now¹ listê
// Tworzy obiekt klasy DoublyLinkedList dynamicznie na stercie
// i zwraca wskaŸnik do niego.
DoublyLinkedList* ListFactory::createList() {
    return new DoublyLinkedList();
}
