#include "ListFactory.h"

DoublyLinkedList* ListFactory::createList() {
    return new DoublyLinkedList();
}
