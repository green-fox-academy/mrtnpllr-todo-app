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

    if (argc == 2) {
        //useTwoArguments(&argv[1]);

        std::string argument(argv[1]);
        if (argument == "-l") {
            if (isEmpty("tasks.txt")) {
                std::cout << "No todos for today! :)" << std::endl;
            }
            return print("tasks.txt", printTypes::NUMBERED);

        } else if (argument == "-a") {
            std::cout << "Unable to add: no task provided" << std::endl;
            return 3;
        } else if (argument == "-r") {
            std::cout << "Unable to remove: no index provided" << std::endl;
            return 3;
        } else if (argument == "-c") {
            std::cout << "Unable to check: no index provided" << std::endl;
        } else {
            std::cout << "not supported argument\n" << std::endl;
            return print("print_usage.txt", printTypes::BASE), 2;
        }
    }

    if (argc == 3) {
        std::string argument(argv[1]);
        int numberOfTasks = countLines("tasks.txt");
        if (argument == "-a")
            return appendTxtFile("tasks.txt", std::string (argv[2]));
        else if (argument == "-r") {
            //int index = (*argv[2]) - 48;
            int index = atoi(argv[2]);
            if (numberOfTasks >= index) {
                return removeTask("tasks.txt", index);
            } else if(index == 0){
                std::cout << "Invalid argument type, index is not a number!" << std::endl;
            }else {
                std::cout << "Unable to remove: index is out of bound" << std::endl;
                return 7;
            }
        } else if (argument == "-c") {
            int index = atoi(argv[2]);
            if (numberOfTasks >= index) {
                return checkTask("tasks.txt", index);
            } else {
                std::cout << "Unable to check: index is out of bound" << std::endl;
                return 7;
            }
        }
    }

    if (argc > 3) {
        std::string argument(argv[1]);
        if (argument == "-a"){
            std::cout << "Error, no parenthesis for task." << std::endl;
            return 4;
        }
    }

    return 0;
}