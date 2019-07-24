#include <string>
#include <iostream>
#include "Cases.h"
#include "Functions.h"

int useTwoArguments(char *argv[])
{
    std::string argument(argv[1]);
    if (argument == "-l") {
        if (isEmpty("tasks.txt")) {
            std::cout << "No todos for today! :)" << std::endl;
        }
        return print("tasks.txt", printTypes::NUMBERED), 0;

    } else if (argument == "-a") {
        std::cout << "Unable to add: no task provided" << std::endl;
        return 3;
    } else if (argument == "-r") {
        std::cout << "Unable to remove: no index provided" << std::endl;
        return 3;
    } else if (argument == "-c") {
        std::cout << "Unable to check: no index provided" << std::endl;
        return 3;
    } else {
        std::cout << "not supported argument\n" << std::endl;
        return print("print_usage.txt", printTypes::BASE), 2;
    }
}

int useThreeArguments(char *argv[])
{
    std::string argument(argv[1]);
    int numberOfTasks = countLines("tasks.txt");
    if (argument == "-a")
        return appendTxtFile("tasks.txt", std::string(argv[2])), 0;
    else if (argument == "-r") {
        int index = atoi(argv[2]);
        if (numberOfTasks >= index) {
            return removeTask("tasks.txt", index), 0;
        } else if (index == 0) {
            std::cout << "Invalid argument type, index is not a number!" << std::endl;
            return 6;
        } else {
            std::cout << "Unable to remove: index is out of bound" << std::endl;
            return 7;
        }
    } else if (argument == "-c") {
        int index = atoi(argv[2]);
        if (numberOfTasks >= index) {
            return checkTask("tasks.txt", index), 0;
        } else {
            std::cout << "Unable to check: index is out of bound" << std::endl;
            return 7;
        }
    }

    return 0;
}