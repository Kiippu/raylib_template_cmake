#include <cstdint>
#include <iostream>

#include "my_lib.h"

/**
 * @brief Prints out hello world and tests the JSON Lib.
 *
 */
void print_hello_world()
{
    std::cout << "Hello World!\n";
}

std::uint32_t factorial(std::uint32_t number)
{
    return number <= 1 ? 1 : factorial(number - 1) * number;
}
