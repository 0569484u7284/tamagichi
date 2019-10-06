#pragma once
class Food {
	//базовый класс с едой
public:
	virtual int satur() {

	}
};

class Water : public Food {//вода
public:
	int satur() {
		return 2;
	}
};

class Cheese : public Food {//сыр
public:
	int satur() {
		return 10;
	}
};

