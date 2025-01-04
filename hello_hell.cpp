#include "hello_hell.hpp"

namespace lve
{

void FirstApp::run(){
    while(!lveWindow.shouldClose()){
        glfwPollEvents();
    }
}

} // namespace lve
