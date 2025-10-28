#ifndef LISTFACTORY_H
#define LISTFACTORY_H

#include "DoublyLinkedList.h"

// Klasa ListFactory implementuje wzorzec projektowy "Factory" (Fabryka)
// Jej zadaniem jest tworzenie obiektów klasy DoublyLinkedList.
// Dziêki temu kod w main() jest prostszy, a sposób tworzenia listy
// mo¿na ³atwo zmieniæ w przysz³oœci (np. na listê z innym typem danych).
class ListFactory {
public:
    // Metoda tworz¹ca nowy obiekt listy dwukierunkowej
    static DoublyLinkedList* createList(); 
};

#endif
