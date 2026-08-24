#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "item.cpp"

// Initializes player character with basic info

class Player {
    std::string name;
    int health;
    int xpLevel;
    bool isAlive;
    std::vector<Item> inventory;
    std::string currentScene;

public:

    Player(std::string name, int health, int xpLevel, bool isAlive, std::vector<Item> inventory = {})
        : name(name),
          health(health),
          xpLevel(xpLevel),
          isAlive(isAlive),
          inventory(inventory),
          currentScene("") {
    }

    std::string displayPlayerInfo() {
        std::string strName = name;
        std::string strHealth = std::to_string(health);
        std::string strXp = std::to_string(xpLevel);
        std::string strAlive = std::to_string(isAlive);
        
        std::string playerInfo = "Name: " + strName + "\n" + "Health: " + strHealth + "\n" + "Xp Level: " + strXp + "\n" + "Is Alive?: " + strAlive + "\n";

        return playerInfo;
    }

    // Scene functions for Player
    void setCurrentScene(std::string sceneName) {
        currentScene = sceneName;
    }

    std::string getCurrentScene() {
        return currentScene;
    }

    std::string whereAmI() {
        return "You are currently in: " + currentScene;
    }

    // Getters for player attributes
    std::string getName() {
        return name;
    }

    int getHealth() {
        return health;
    }

    int getXpLevel() {
        return xpLevel;
    }

    bool getIsAlive() {
        return isAlive;
    }

    // Setters for player attributes
    void setName(std::string name) {
        this->name = name;
    }   

    void setHealth(int health) {
        this->health = health;
    }

    void setXpLevel(int xpLevel) {
        this->xpLevel = xpLevel;
    }

    void setIsAlive(bool isAlive) {
        this->isAlive = isAlive;
    }

    // Inventory management functions
    std::string addItemToInventory(Item item) {
        if (item.getEquipable() == false) {
            return "Item cannot be added to inventory: " + item.getItemName();
        }
        inventory.push_back(item);
        return "Item added to inventory: " + item.getItemName();
    }

    std::string removeItemFromInventory(Item item) {
        auto it = std::find(inventory.begin(), inventory.end(), item);
        if (it != inventory.end()) {
            inventory.erase(it);
            return "Item removed from inventory: " + item.getItemName();
        } else {
            return "Item not found in inventory.";
        }
    }

    std::string searchInventory(Item item) {
        auto it = std::find(inventory.begin(), inventory.end(), item);
        if (it != inventory.end()) {
            return "Item found in inventory: " + item.getItemName();
        } else {
            return "Item not found in inventory.";
        }
    }

    void displayInventory() {
        std::cout << "========= Inventory ==========" << std::endl;
        for (Item item : inventory) {
            std::cout << "- " << item.getItemName() << std::endl;
        }
        std::cout << "===============================" << std::endl;
    }

};
