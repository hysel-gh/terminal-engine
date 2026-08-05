#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

// Initializes player character with basic info

class Player {
    std::string name;
    int health;
    int xpLevel;
    bool isAlive;
    std::vector<std::string> inventory;
public:

    Player(std::string name, int health, int xpLevel, bool isAlive, std::vector<std::string> inventory = {}) {
        this->name = name;
        this->health = health;
        this->xpLevel = xpLevel;
        this->isAlive = isAlive;
        this->inventory = inventory;
    };

    std::string displayPlayerInfo() {
        std::string strName = name;
        std::string strHealth = std::to_string(health);
        std::string strXp = std::to_string(xpLevel);
        std::string strAlive = std::to_string(isAlive);
        
        std::string playerInfo = "Name: " + strName + "\n" + "Health: " + strHealth + "\n" + "Xp Level: " + strXp + "\n" + "Is Alive?: " + strAlive + "\n";

        return playerInfo;
    }

    std::string addItemToInventory(std::string item) {
        inventory.push_back(item);
        return "Item added to inventory: " + item;
    }

    std::string removeItemFromInventory(std::string item) {
        auto it = std::find(inventory.begin(), inventory.end(), item);
        if (it != inventory.end()) {
            inventory.erase(it);
            return "Item removed from inventory: " + item;
        } else {
            return "Item not found in inventory.";
        }
    }

    std::string searchInventory(std::string item) {
        auto it = std::find(inventory.begin(), inventory.end(), item);
        if (it != inventory.end()) {
            return "Item found in inventory: " + item;
        } else {
            return "Item not found in inventory.";
        }
    }

    void displayInventory() {
        std::cout << "========= Inventory ==========" << std::endl;
        for (const auto& item : inventory) {
            std::cout << "- " << item << std::endl;
        }
        std::cout << "===============================" << std::endl;
    }

};
