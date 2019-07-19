#ifndef MRTNPLLR_TODO_APP_FUNCTIONS_H
#define MRTNPLLR_TODO_APP_FUNCTIONS_H


#include <string>

bool openTxtFile(const std::string& filename, std::string &text);

bool writeTxtFile(const std::string& filename, std::string &input);

int printUsage (const std::string& filename);


#endif
