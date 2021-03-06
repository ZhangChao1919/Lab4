//File's name: MagicSquareGame.h  
//Summary: The MagicSquareGame.h declares private members and public members. The public members functions contain constructures, destructures, some virtual functions.

#ifndef MAGICSQUAREGAME_H
#define MAGICSQUAREGAME_H
#include "stdafx.h"
#include "GameBase.h"

class MagicSquareGame: public GameBase
{
	friend ostream &operator<<(ostream &out, const MagicSquareGame & object);
private:
	int startMin;
	vector<int> availablePieces;
	//prevent copy constructor
	MagicSquareGame(const MagicSquareGame &);
	//prevent copy assignment operator 
	MagicSquareGame & MagicSquareGame :: operator = (const MagicSquareGame &);
	//prevent move constructor
	MagicSquareGame (MagicSquareGame &&); 
	//prevent move assignment operator
	MagicSquareGame & MagicSquareGame :: operator = (MagicSquareGame &&);

public:
	MagicSquareGame(){};
	MagicSquareGame(ifstream&gameFile);
	MagicSquareGame(int size,ifstream&gameFile);
	MagicSquareGame(int size, int min, ifstream&gameFile);
	~MagicSquareGame(){}
	virtual void print();
	virtual bool done();
	virtual bool stalemate(); 
	virtual int prompt(unsigned int &fir, unsigned int &sec);
	virtual int prompt(int &inputInt);
	virtual int turn();
	bool boardisFull();
};

#endif

