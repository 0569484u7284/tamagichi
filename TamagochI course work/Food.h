#pragma once
class Food {
	//������� ����� � ����
public:
	virtual int satur() {

	}
};

class Water : public Food {//����
public:
	int satur() {
		return 2;
	}
};

class Cheese : public Food {//���
public:
	int satur() {
		return 10;
	}
};

