#pragma once
class Medicine {
	//������� ����� � ����������� ��� ��������� ������������ �������
public:
	virtual int healthIncr() = 0;
};

class Pills : public Medicine {
public:
	int healthIncr() {
		return 20;
	}
};
