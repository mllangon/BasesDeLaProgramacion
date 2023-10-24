#include <iostream>

extern "C" int funcionC() {
    std::cout<< "Hola desde otro archivo."<< std::endl;
    return 0;
}
