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

<<<<<<< HEAD
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

	int choice = (rand()) % NUM_WORDS);
	string word = WORDS[choice];

	return word;
}
=======
//return a jumbled version of aWord
string mixUp(const string& aWord)
{
	string aJumble = aWord;
	int length = static_cast<int>(aJumble.size());

	for (int i = 0; i < length; ++i)
	{
		int randomIndex = (rand() % length);
		char temp = aJumble[i];
		aJumble[i] = aJumble[randomIndex];
		aJumble[randomIndex] = temp;
	}
	return aJumble;
}

>>>>>>> a0796d54644d2936146a6cc4a4db7cac48b5347e
