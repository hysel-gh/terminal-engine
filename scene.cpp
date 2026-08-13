#include "player.cpp"

class Scene {
    std::string sceneName;
    std::string sceneDescription;
    bool isActive;  // if scene is active, it means the player is inside the scene.
    // attributes for scene can be added here, such as enemies, items, etc.

public:
    void createScene(std::string name, std::string description) {
        sceneName = name;
        sceneDescription = description;
        isActive = false;
        // make sure to initialize other attributes here if added above. 
    }

    std::string getSceneName() {
        return sceneName;
    }

    std::string getSceneDescription() {
        return sceneDescription;
    }

    bool getIsActive() {
        return isActive;
    }

    void setSceneName(std::string name) {
        sceneName = name;
    }

    void setSceneDescription(std::string description) {
        sceneDescription = description;
    }

    void setIsActive(bool active) {
        isActive = active;
    }

    std::string displaySceneInfo(Scene scene) {
            return "Scene Name: " + scene.getSceneName() + "\n" + "Scene Description: " + scene.getSceneDescription() + "\n" + "Is Active?: " + std::to_string(scene.getIsActive()) + "\n";
        }

};