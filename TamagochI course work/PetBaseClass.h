#pragma once
#include <vector>
#include <string>
#include <ctime>
#include "BetterVector.h"
#include "Game.h"
#include"ConsoleOutput.h"

class Preferences {
	//еда и игры которая подходят тамагочику

	//BetterVector<std::string> goodStuff;
	std::vector<std::string> goodStuff;
	//тамагочик никогда не сделает/сьест/поиграет
	//BetterVector<std::string> neverDo;
	std::vector<std::string> neverDo;

public:
	std::vector<std::string> getGood() {
		return goodStuff;
	}
	std::vector<std::string> getNever() {
		return neverDo;
	}
	void addGood(std::string good) {
		goodStuff.push_back(good);
	}
	void addNever(std::string never) {
		neverDo.push_back(never);
	}
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
	//функция кушат и играт принимает в себя указатель на функцию и тип животного
	//feed принимает в себя функцию для увеличения насыщения и радости
	//virtual void feed(Food *f) = 0;
	void play(Game* game) {

		for (size_t i = 0; i < pref.getGood().size(); i++)
		{
			if (pref.getGood().at(i) == typeid(game).name())
				saturation += game->score();
		}

	};

	void setPreferences(Preferences pref) {
		this->pref = pref;
	}
	Preferences  getPreferences() {
		return pref;
	};
	//функция уменьшающая радость и здоровье раз в опр время

	void hungry() {
		Output outStream;
		if (saturation < 15)
			outStream.out("Помогите питомцу! Покормите его!!!", 30, 30);
		if (saturation < 5)
			outStream.out("Критический уровень голода! Срочные котлетки!", 30, 30);
		if (saturation == 0)
			outStream.out("Ваш питомец трагически погиб голодной смертью", 30, 30);
	}
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
			hungry();
		}
	}
};


class Cat :public Pet {
	Preferences cat;

public:


};

class Dog : public Pet {


public:

};

class Fish : public Pet {


public:


};