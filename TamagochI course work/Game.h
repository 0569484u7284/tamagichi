#pragma once


class Game {


public:
	virtual int score() = 0;
};


class SeaWar : public Game {


public:
	int score() {
		return 10;
	}
};

class Maze : public Game {

public:


};

