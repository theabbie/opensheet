#include <emscripten.h>
#include <iostream>

extern "C" {
    EMSCRIPTEN_KEEPALIVE
    void greet() {
        std::cout << "Hello, World!" << std::endl;
    }
}