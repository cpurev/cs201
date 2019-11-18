//hangman.cpp
//Chuluunbat Purev
//2019-11-17
//Hangman game with algorithm library

#include <sstream>
#include <iostream>
using std::endl;
#include <algorithm>
#include <map>

std::istringstream iss;

bool hangman(bool won, const std::string& wrd, std::map<int, char>& lttrs, char& c, int state) {

	std::string gssdWrd; int n;

	switch (state) {
	case -1:std::cout << endl
		<< "~~~~~~~" << endl
		<< "|     | " << endl
		<< "|       " << endl
		<< "|       " << endl
		<< "|       " << endl;
	case 0:std::cout << endl
		<< "~~~~~~~" << endl
		<< "|     | " << endl
		<< "|     O " << endl
		<< "|       " << endl
		<< "|       " << endl;
	case 1:std::cout << endl
		<< "~~~~~~~" << endl
		<< "|     | " << endl
		<< "|     O " << endl
		<< "|     | " << endl
		<< "|       " << endl;
	case 2:std::cout << endl
		<< "~~~~~~~" << endl
		<< "|     | " << endl
		<< "|     O " << endl
		<< "|     |\\" << endl
		<< "|       " << endl;
	case 3:std::cout << endl
		<< "~~~~~~~" << endl
		<< "|     | " << endl
		<< "|     O " << endl
		<< "|    /|\\" << endl
		<< "|       " << endl;
	case 4:std::cout << endl
		<< "~~~~~~~" << endl
		<< "|     | " << endl
		<< "|     O " << endl
		<< "|    /|\\" << endl
		<< "|    /  " << endl;
	case 5:std::cout << endl
		<< "~~~~~~~" << endl
		<< "|     | " << endl
		<< "|     O " << endl
		<< "|    /|\\" << endl
		<< "|    / \\" << endl;
			
	}
	
	std::cout << "_ _ _ _ _ _ _ _" << endl;
	do {
		std::cout << "Guess: ";
		iss.clear();
		std::getline(std::cin, gssdWrd);
		iss.str(gssdWrd);
		if (iss >> n)
			continue;
		if (gssdWrd.size() != 1)
			continue;
		c = gssdWrd.at(0);
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			break;

	} while (true);

	c = std::toupper(c);


}

int main() {
	std::string theWrd = "KANGAROO", gssdWrd;
	
	int lives = 6;
	char c; 
	std::map<int, char> lttrs = { {-1, '\n'} };

	std::cout << "Hangman. Guess the word";

	hangman(true, theWrd, lttrs, c, -1);
	


	return 0;
}