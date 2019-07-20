#include "Functions.h"
#include <fstream>
#include <iostream>

bool openTxtFile(const std::string &filename, std::vector<std::string> &text)
{
    std::fstream openFile("../" + filename, std::ios::in);

    std::string getLines;
    if (openFile.is_open()) {
        while (std::getline(openFile, getLines)) {
            text.push_back(getLines);
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

bool appendTxtFile(const std::string &filename, std::string input)
{
    std::ofstream appendFile("../" + filename, std::ofstream::app);

    if (appendFile.is_open()) {
        appendFile << input + "/n";
        appendFile.close();
        return true;
    } else
        return false;
}

int print(const std::string &filename, printTypes type)
{
    std::vector<std::string> text;
    if (openTxtFile(filename, text)) {
        for (int i = 0; i < text.size(); ++i) {
            if (type == printTypes::BASE) {
                std::cout << text[i] << std::endl;
            } else if (type == printTypes::NUMBERED) {
                std::cout << i + 1 << " - " << text[i] << std::endl;
            }
        }

        return 0;
    } else
        return 2;

}

bool isEmpty(const std::string &filename)
{
    std::vector<std::string> text;
    openTxtFile(filename, text);

    return text.empty();
}