#include <iostream>
#include <string>

class Item {
    std::string itemName;
    std::string itemDescription;
    int itemValue; 
    bool equipable; // needs to be true to be added to inventory. 
    bool statMod; // if true, item can modify player stats, logic for this lives in player.cpp. 
public:
    Item(std::string name, std::string description, int value, bool equipable, bool statMod) {
        itemName = name;
        itemDescription = description;
        itemValue = value;
        this->equipable = equipable;
        this->statMod = statMod;
    }

    std::string getItemName() {
        return itemName;
    }
    std::string getItemDescription() {
        return itemDescription;
    }
    int getItemValue() {
        return itemValue;
    }
    bool getEquipable() {   
        return equipable;
    }
    bool getStatMod() {
        return statMod;
    }

    bool operator==(const Item& other) const {
    return itemName == other.itemName &&
           itemDescription == other.itemDescription &&
            itemValue == other.itemValue &&
            equipable == other.equipable &&
            statMod == other.statMod;
    }

};