#include "Functions.h"
#include <fstream>
#include <iostream>

bool openTxtFile(const std::string &filename, std::string &text)
{
    std::fstream openFile("../" + filename, std::ios::in);

    std::string getLines;
    if (openFile.is_open()) {
        while (std::getline(openFile, getLines)) {
            text.append(getLines + "\n");
        }
        openFile.close();
        return true;
    } else
        return false;
}

bool writeTxtFile(const std::string &filename, std::string &input)
{
    std::fstream createFile("../" + filename, std::ios::out);

    if (createFile.is_open()) {
        createFile << input;
        createFile.close();
        return true;
    } else
        return false;
}

int printUsage(const std::string &filename)
{
    std::string text;
    if (openTxtFile(filename, text)) {
        std::cout << text << std::endl;

        return 0;
    } else
        return 2;

}