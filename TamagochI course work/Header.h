#pragma once
#include <vector>
#include <string>
#include <Windows.h>
#include "BetterVecor.h"
#include "Game.h"

class Preferences {
public:
	//��� � ���� ������� �������� ����������
	BetterVector<std::string> goodStuff;
	//��������� ������� �� �������/�����/��������
	BetterVector<std::string> neverDo;
};


class Pet {
	int timer = 0;
	int changeLevelsTime = 10000;

protected:
	int health = 100;
	int saturation = 100;
	int enjoy = 100;
	Preferences pref;
public:
	//������� ����� � ����� ��������� � ���� ��������� �� ������� � ��� ���������
	//feed ��������� � ���� ������� ��� ���������� ��������� � �������
	//virtual void feed(Food *f) = 0;
	void play(Game game) {
		enjoy += game.play(*this);
	};

	void setPreferences(Preferences* pref) {
		this->pref = pref;
	}
	BetterVector<std::string>  getPreferences() {
		return this->pref.goodFood;
	};
	//������� ����������� ������� � �������� ��� � ��� �����
	void time() {
		while (true)
		{
			clock_t t1 = clock();
			if (double(t1) / CLOCKS_PER_SEC >= 1) {
				enjoy--;
				saturation--;
				if (saturation < 20 || enjoy < 20)
					health -= 5;
			}
		}
	}
};
