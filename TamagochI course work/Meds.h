#pragma once
class Medicine {
	//базовый класс с лекарствами для улучшения самочувствия питомца
public:
	virtual int healthIncr() = 0;
};

class Pills : public Medicine {
public:
	int healthIncr() {
		return 20;
	}
};
