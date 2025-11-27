#include <iostream>
#include <stdexcept>
#include <cstdlib>
#include "vulkanApp.h"

int main() {

#if NDEBUG
    vulkanApp app = new vulkanApp(false);
#else
    vulkanApp app = new vulkanApp(true);
#endif

    try {
        app.run();

    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}