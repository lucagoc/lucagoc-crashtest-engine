#include "hello_hell.hpp"

#include <cstdlib>
#include <iostream>
#include <stdexcept>

int main(int argc, char const *argv[])
{
    lve::FirstApp app{};

    try
    {
        app.run();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return EXIT_FAILURE;
    }
    

    return EXIT_SUCCESS;
}
