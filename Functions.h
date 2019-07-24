#ifndef MRTNPLLR_TODO_APP_FUNCTIONS_H
#define MRTNPLLR_TODO_APP_FUNCTIONS_H


#include <string>
#include <vector>

enum class printTypes
{
    BASE,
    NUMBERED,
};

bool openTxtFile(const std::string &filename, std::vector<std::string> &text);

bool writeTxtFile(const std::string &filename, std::string &input);

bool appendTxtFile(const std::string &filename, std::string input);

bool removeTask(const std::string &filename, int input);

bool checkTask(const std::string &filename, int input);

int print(const std::string &filename, printTypes type);

bool isEmpty(const std::string &filename);

int countLines(const std::string &filename);


#endif
