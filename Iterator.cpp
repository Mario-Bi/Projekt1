#include "Iterator.h"

Iterator::Iterator(Node* node) : current(node) {}

bool Iterator::hasNext() {
    return current && current->next;
}

bool Iterator::hasPrev() {
    return current && current->prev;
}

int Iterator::next() {
    if (hasNext()) {
        current = current->next;
        return current->data;
    }
    return -1; // brak nastêpnego
}

int Iterator::prev() {
    if (hasPrev()) {
        current = current->prev;
        return current->data;
    }
    return -1; // brak poprzedniego
}
