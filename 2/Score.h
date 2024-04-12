#include <iostream>
#include <string>
#pragma once;
using namespace std;
class Score {
public:
	friend void print(const Score& score);
	//void setID_generator(int generate);

	friend static void setID_generator(const int generate); 

	static void setID_generator(int generate) {
		ID_generator = generate;
	}
	friend int main();

	Score& operator = (const Score& G);

	typedef enum {
		GREAT,
		GOOD,
		NOTBAD,
		BAD,
	}Label;

	Score () : score(0), label(NOTBAD), detail(""), ID(0){}
	Score(int score,  char* detail, Label label);
	Score(const int score, const string detail, const Label label);


private:
	int score;
	Label label;
	string detail;
	const int ID;
	static int ID_generator;
};



