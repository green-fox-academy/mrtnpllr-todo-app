#include <iostream>
#include <fstream>
#include <vector>
#include "Functions.h"

int main(int argc, char *argv[])
{
    if (argc == 1) {
        return print("print_usage.txt", printTypes::BASE);
    }

    if (argc == 2) {
        std::string argument(argv[1]);
        if (argument == "-l") {
            return print("tasks.txt", printTypes::NUMBERED);

        } else {
            std::cout << "not supported argument" << std::endl;
            return 2;
        }
    }

    return 0;
}