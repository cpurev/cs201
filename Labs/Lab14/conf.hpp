//conf.hpp
//Chuluunbat Purev
//2019-10-4
//Useage of substring
#include <iostream>
#ifndef CONF
#define CONF

//This will print the given string by decreasing order
//Example:
/*	confabulation
	confabulatio
	confabulati
	confabulat
	confabula
	confabul
	confabu
	confab
	confa
	conf
	con
	co
	c*/
// @param str the string to print
void printDec(const std::string& str);

//This will print the given string 
//Example:
/*
confabulation
 onfabulatio
  nfabulati
   fabulat
    abula
     bul
      u*/
// @param str the string to print
void printPyr(const std::string& str);

#endif // !CONF
