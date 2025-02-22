#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    char test = '1';
    std::cout << test + 1;
    std::cout << "\n";
    bool real = (test == 49);
    std::string result = real ? "a is 49" : "a isnt 49";
    std::cout << (result);
    std::cout << "\n";
    return 0;
}