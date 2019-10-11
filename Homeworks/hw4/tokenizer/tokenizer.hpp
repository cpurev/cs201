//tokenzier.hpp
//Chuluunbat Purev
//2019-10-10
//Divide string into tokens
//Put the items in their respective types

#include <string>
#include <vector>

//using getline(),
//return true if string is read
//return false if blank
bool readLine(std::string& str);

//using std::istringstream
unsigned stringToTokenWS(std::vector<std::string>& tokens);

void analyzeTokens(const std::vector<std::string>& tokens);