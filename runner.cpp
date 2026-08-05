#include "player.cpp"

// Main runner file to run game

int main() {

    Player p1("River", 100, 1, true);

    std::cout << p1.displayPlayerInfo();

    p1.addItemToInventory("Sword");
    p1.addItemToInventory("Shield");

    p1.displayInventory();

    p1.removeItemFromInventory("Sword");

    p1.displayInventory();

    return 0;
}