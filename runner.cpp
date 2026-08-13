// #include "player.cpp"
#include "scene-manager.cpp"
// #include "scene.cpp"

// Main runner file to run game

int main() {
    SceneManager sceneManager;
    
    Scene s1;
    s1.createScene("Scene 1", "This is the first scene.");
    Scene s2;
    s2.createScene("Scene 2", "This is the second scene.");


    Player p1("River", 100, 1, true);

    p1.setCurrentScene(s1.getSceneName());
    std::cout << p1.whereAmI() << std::endl;
    sceneManager.swapScene(s1, s2, p1);
    p1.setCurrentScene(s2.getSceneName());
    std::cout << p1.whereAmI() << std::endl;
    // std::cout << p1.displayPlayerInfo();

    //p1.addItemToInventory("Sword");
    //p1.addItemToInventory("Shield");

    //p1.displayInventory();

    //p1.removeItemFromInventory("Sword");

    //p1.displayInventory();

    return 0;
}