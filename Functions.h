#ifndef MRTNPLLR_TODO_APP_FUNCTIONS_H
#define MRTNPLLR_TODO_APP_FUNCTIONS_H


#include <string>
#include <vector>

enum class printTypes{
    BASE,
    NUMBERED
};

bool openTxtFile(const std::string &filename, std::vector<std::string> &text);

bool writeTxtFile(const std::string &filename, std::string &input);

int print(const std::string &filename, printTypes type);


#endif
