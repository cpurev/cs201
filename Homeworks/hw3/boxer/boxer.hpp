//boxer.hpp
//Chuluunbat Purev
//2019-9-28
//Boxer header.
#include <iostream>
// getInt
// Get an integer from a typed line of text; repeat until successful.
int getInt();
// printBox
// @param n is number of asterisk lines to print top and bottom
// @param msg the string to print in the box
// 
// Total height is n*2+3 as the printing message row will always be 3
// As there is margin between string and asterisk box
// Top and bottom numbers of row are give as n
// 
// Total width is string size + n*2+2;
// The margin between string and asterisk box is 2
// Left and right box lenghts are given as n
void printBox(const std::string& msg, const int& n);