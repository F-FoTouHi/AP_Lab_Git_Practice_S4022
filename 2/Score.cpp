#include "Score.h"

Score::Score(int score,char* detail, Label label) :ID(Score::ID_generator) {
	this->score = score;
	this->label = label;
	this->detail = detail;

	ID_generator++;

}

Score::Score(const int score, const string detail, const Label label) :ID(Score::ID_generator) {

}
Score& Score::operator = (const Score& G) {
	this->score = G.score;
	this->detail = G.detail;
	this->label = G.label;
	//ID?
	return *this;
}


