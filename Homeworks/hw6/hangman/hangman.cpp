//hangman.cpp
//Chuluunbat Purev
//2019-11-17
//Hangman game with algorithm library

#include <sstream>
#include <iostream>
using std::endl;
#include <algorithm>
#include <vector>
#include <string>

std::istringstream iss;

bool hangman(bool won, const std::vector<char>& wrd, std::vector<char>& lttrs, char& c, int state
				, std::string& score) {

	if (won)
		return true;

	if (state >= 5)
		return false;

	std::string gssdWrd, oldScr; int n;

	switch (state) {
	case -1:std::cout << endl
		<< "~~~~~~~" << endl
		<< "|     | " << endl
		<< "|       " << endl
		<< "|       " << endl
		<< "|       " << endl; break;
	case 0:std::cout << endl
		<< "~~~~~~~" << endl
		<< "|     | " << endl
		<< "|     O " << endl
		<< "|       " << endl
		<< "|       " << endl; break;
	case 1:std::cout << endl
		<< "~~~~~~~" << endl
		<< "|     | " << endl
		<< "|     O " << endl
		<< "|     | " << endl
		<< "|       " << endl; break;
	case 2:std::cout << endl
		<< "~~~~~~~" << endl
		<< "|     | " << endl
		<< "|     O " << endl
		<< "|     |\\" << endl
		<< "|       " << endl; break;
	case 3:std::cout << endl
		<< "~~~~~~~" << endl
		<< "|     | " << endl
		<< "|     O " << endl
		<< "|    /|\\" << endl
		<< "|       " << endl; break;
	case 4:std::cout << endl
		<< "~~~~~~~" << endl
		<< "|     | " << endl
		<< "|     O " << endl
		<< "|    /|\\" << endl
		<< "|    /  " << endl; break;
	case 5:std::cout << endl
		<< "~~~~~~~" << endl
		<< "|     | " << endl
		<< "|     O " << endl
		<< "|    /|\\" << endl
		<< "|    / \\" << endl; break;
			
	}
	
	std::cout << score << endl;

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

	oldScr = score;

	auto it = wrd.begin();

	while ((it = std::find_if(it, wrd.end(), [c](char d) {return d == c; })) != wrd.end()) {
		score[it - wrd.begin()] = *it;
		it++;
	}
	
	if (oldScr.compare(score) == 0) {
		if (hangman(false, wrd, lttrs, c, ++state, score) == false)
			return false;
	}
	if(score.find("_") != std::string::npos)
		hangman(false, wrd, lttrs, c, state, score);

	return true;
}

int main() {
	
	
	std::vector<char> lttrs;
	std::vector<char> wrd = { 'K', 'A','N','G', 'A', 'R','O','O' };
	std::string score = std::string(wrd.size(), '_');

	std::cout << "Hangman. Guess the word" << endl;

	char c = 'A';

	if (hangman(false, wrd, lttrs, c, -1, score)) {
		std::cout << "You won!\tThe word was: " << score; return 0;
	}
	else
		std::cout << "You lost!\tThe word was: ";
	for (auto x : wrd)
		std::cout << x;

	return 0;
}