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

//To check int
std::istringstream iss;

//Recursive function
bool hangman(bool won, const std::vector<char>& wrd, char& c, int state, std::string& score) {
	//Check winning
	if (won)
		return true;

	//Check loosing
	if (state >= 5)
		return false;

	std::string gssdWrd, oldScr; int n;

	//Draw hangman
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
	
	//Draw the scores
	std::cout << score << endl;

	//Input error check
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

	//Force upper case
	c = std::toupper(c);

	//Save score before comparing
	oldScr = score;

	//Get iterator of answers begining
	auto it = wrd.begin();

	//Loop check and add to the score
	while ((it = std::find_if(it, wrd.end(), [c](char d) {return d == c; })) != wrd.end()) {
		score[it - wrd.begin()] = *it;
		it++;
	}
	
	//If score has not changed aka guess wrong
	//Increase state aka lose lives
	if (oldScr.compare(score) == 0) {
		if (hangman(false, wrd, c, ++state, score) == false)
			return false;
	}
	
	//If there is still blank remaining 
	//This means word is guessed right but the game is not finished
	//Dont loose lives restart
	if(score.find("_") != std::string::npos)
		hangman(false, wrd, c, state, score);

	//Probably wont get here if it do automatic win
	return true;
}

int main() {
	
	
	std::vector<char> wrd = { 'K', 'A','N','G', 'A', 'R','O','O' };
	std::string score = std::string(wrd.size(), '_');

	std::cout << "Hangman. Guess the word" << endl;

	//Does not matter
	//Will be changed in the hangman function
	char c = 'A';

	//Check winnings and loses
	if (hangman(false, wrd, c, -1, score)) {
		std::cout << "You won!\tThe word was: " << score; return 0;
	}
	else
		std::cout << "You lost!\tThe word was: ";
	//Print the wrd
	for (auto x : wrd)
		std::cout << x;

	return 0;
}