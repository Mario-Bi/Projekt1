#ifndef LISTFACTORY_H
#define LISTFACTORY_H

#include "DoublyLinkedList.h"

// Klasa ListFactory implementuje wzorzec projektowy "Factory" (Fabryka)
// Jej zadaniem jest tworzenie obiekt�w klasy DoublyLinkedList.
// Dzi�ki temu kod w main() jest prostszy, a spos�b tworzenia listy
// mo�na �atwo zmieni� w przysz�o�ci (np. na list� z innym typem danych).
class ListFactory {
public:
    // Metoda tworz�ca nowy obiekt listy dwukierunkowej
    static DoublyLinkedList* createList(); 
};

#endif
