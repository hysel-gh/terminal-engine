#include "scene.cpp"
// #include "player.cpp"

// a runner class that is used to swap between scene objects and manage the game flow.
class SceneManager {
    public:
        void swapScene(Scene currentScene, Scene nextScene, Player p1) {  // logic should be built around actions taking place only in active scenes based on scene names.
            currentScene.setIsActive(false);
            nextScene.setIsActive(true);
            p1.setCurrentScene(nextScene.getSceneName());
        }



};