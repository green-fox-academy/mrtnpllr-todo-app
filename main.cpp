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
            std::cout << "Unable to add: no task provided" << std::endl;
            return 3;
        } else {
            std::cout << "not supported argument\n" << std::endl;
            return print("print_usage.txt", printTypes::BASE), 2;
        }
    }

    if (argc == 3) {
        std::string argument(argv[1]);
        if (argument == "-a")
            return appendTxtFile("tasks.txt", std::string (argv[2]));
        else if (argument == "-r") {
            int index = int (*argv[2]) - 48;
            std::cout << index << std::endl;
            return removeTask("tasks.txt", index);
        }
    }

    if (argc > 3) {
        std::string argument(argv[1]);
        if (argument == "-a"){
            std::cout << "No parenthesis" << std::endl;
            return 4;
        }
    }

    return 0;
}