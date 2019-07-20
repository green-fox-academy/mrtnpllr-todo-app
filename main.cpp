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
            if (isEmpty("tasks.txt")) {
                std::cout << "No todos for today! :)" << std::endl;
            }
            return print("tasks.txt", printTypes::NUMBERED);

        } else if (argument == "-a") {
          return appendTxtFile("tasks.txt", std::string (argv[3]));
        } else {
            std::cout << "not supported argument" << std::endl;
            return 2;
        }
    }

    return 0;
}