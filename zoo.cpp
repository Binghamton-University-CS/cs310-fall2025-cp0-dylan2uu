#include "Animal.h"
#include "AnimalsInZoo.h"

int main() {
    // make animals
    Animal a1("Giant Panda", 1869);
    Animal a2("Snow Leopard", 1777);
    Animal a3("Red Panda", 1825);

    // show animals
    a1.display();
    a2.display();
    a3.display();

    // test AnimalsInZoo
    AnimalsInZoo empty;   // 0 animals
    empty.display();

    AnimalsInZoo one(a1); // 1 animal
    one.display();

    empty.setAnimal(a2);  // add later
    empty.display();

    return 0;
}
