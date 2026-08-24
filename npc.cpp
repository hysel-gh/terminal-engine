#include <iostream>
#include <string>

class NPC {
    std::string name;
    int health;
    bool isAlive;
    std::string appearsInScene;
public:
    // Logic for when NPCs appear are hardcoded into each scene via the appearsInScene attribute.
    NPC(std::string name, int health, bool isAlive, std::string sceneName) {
        this->name = name;
        this->health = health;
        this->isAlive = isAlive;
        this->appearsInScene = sceneName; // what scene a particular NPC appears in.
    }

    // getters
    std::string getName() {
        return this->name;
    }

    int getHealth() {
        return health;
    }

    bool getIsAlive() {
        return isAlive;
    }

    // setters
    void setName(std::string n) {
        this->name = n;
    }

    void setHealth(int h) {
        this->health = h;
    }

    void setIsAlive(bool a) {
        this->isAlive = a;
    }

    // used for runner logic to determine if an NPC should be displayed in a scene based on the scene name.
    std::string getAppearsInScene() {
        return this->appearsInScene;
    }


};