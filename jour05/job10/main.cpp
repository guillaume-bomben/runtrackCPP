#include "Chien.hpp"
#include "Chat.hpp"

int main() {
    Chien monChien1, monChien2;
    Chat monChat1, monChat2, monChat3;

    std::cout << "Nombre total d'animaux : " << Animal::getTotalAnimaux() << std::endl;

    monChat1.manger("des croquettes");
    monChien1.manger("de la viande");

    return 0;
}
