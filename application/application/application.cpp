// Chapter 4, Project 4
// Word Jumble - with functions

#include <iostream>
#include <string>
//#include <cstdlib>
#include <time.h>

using namespace std;

string randomWord();
string mixUp(const string& aWord);
void welcomePlayer(const string& aJumble);
void play(const string& aWord);

int main()
{
	srand(static_cast<unsigned int>(time(0)));

	string word = randomWord();
	string jumble = mixUp(word);
	welcomePlayer(jumble);
	play(word);

	system("pause");


	return 0;

}

//return a random word
string randomWord()
{
	const int NUM_WORDS = 5;
	const string WORDS[NUM_WORDS] =
	{
		"wall",
		"glasses",
		"labored",
		"persistent",
		"jumble"
	};

	int choice = (rand() % NUM_WORDS);
	string word = WORDS[choice];

	return word;
}

string mixUp(const string& aWord)
{
	return string();
}


void play(const string& aWord)
{

}


void welcomePlayer(const string& aJumble)
{
	cout << "Welcome to a console application where a word is scrambled and the player who is reading this must unscramble said word..." << endl << endl;
	cout << "You are to unscramble: " << aJumble << endl;
}
