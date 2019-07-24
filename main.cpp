#include <iostream>
#include <fstream>
#include <vector>
#include "Functions.h"
#include "Cases.h"

int main(int argc, char *argv[])
{
    if (argc == 1) {
        return print("print_usage.txt", printTypes::BASE);
    }

    if (argc == 2)
        useTwoArguments(argv);

    if (argc == 3)
        useThreeArguments(argv);

    if (argc > 3) {
        std::string argument(argv[1]);
        if (argument == "-a") {
            std::cout << "Error, no parenthesis for task." << std::endl;
            std::cout << "You have to use \" \" for adding a task" << std::endl;
            return 4;
        }
    }

    return 0;
}