//File's name: NineAlmondsGame.h  
//Summary: The NineAlmondsGame.h declares a friend function and public members. The public members functions virtual functions.

#ifndef NINEALMONDSGAME_H
#define NINEALMONDSGAME_H
#include "stdafx.h"
#include "GameBase.h"

class NineAlmondsGame : public GameBase
{
	friend ostream &operator<<(ostream &out, const NineAlmondsGame &game); 

public:
	NineAlmondsGame(){};
	NineAlmondsGame(ifstream& gameFile);
	~NineAlmondsGame(){};
	virtual void print();
	virtual bool done();
	virtual bool stalemate();
	virtual int prompt(unsigned int &fir, unsigned int &sec);
	virtual int prompt(int &inputInt);
	virtual int turn();
	bool moveisValid(unsigned int player_almond_x,unsigned int player_almond_y,unsigned int player_destination_x,unsigned int player_destination_y,unsigned int &almondBetween_x, unsigned int &almondBetween_y);

private:
	//prevent copy constructor
	NineAlmondsGame(const NineAlmondsGame &);
	//prevent copy assignment operator 
	NineAlmondsGame & NineAlmondsGame :: operator = (const NineAlmondsGame &);
	//prevent move constructor
	NineAlmondsGame (NineAlmondsGame &&); 
	//prevent move assignment operator
	NineAlmondsGame & NineAlmondsGame :: operator = (NineAlmondsGame &&);

};

#endif
