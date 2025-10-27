#include <iostream>
#include "ListFactory.h"
using namespace std;

int main() {
    DoublyLinkedList* list = ListFactory::createList();

    list->addBack(10);
    list->addFront(5);
    list->addBack(20);
    list->addAt(1, 15);

    list->display();
    list->displayReverse();

    list->removeFront();
    list->removeBack();
    list->removeAt(0);

    list->display();

    // Iterator test
    Iterator it = list->getIteratorFromStart();
    cout << "Następny element: " << it.next() << endl;
    cout << "Poprzedni element: " << it.prev() << endl;

    list->clear();
    list->display();

    delete list;
    return 0;
}
