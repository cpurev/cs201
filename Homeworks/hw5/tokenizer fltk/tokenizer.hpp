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
//when recieved end call analyzeTokens.
bool readLine(std::string& str);

//using std::istringstream
//read lines sperated by WS(whitespace)
//returns number of tokens read.
unsigned stringToTokenWS(std::vector<std::string>& tokens);

//put the tokens in their respective types
//numbers in integer, identigier starting with underscore
//a string literal, a whitespace, an unknown
//prints the analyzed tokens.
void analyzeTokens(const std::vector<std::string>& tokens);