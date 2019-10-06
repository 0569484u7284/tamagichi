#pragma once
#include <iostream>
#include <string>
#include "ConsoleOutput.h"
#include "PetBaseClass.h"
#include "Game.h"
#include "Food.h"
#include "Meds.h"

//класс, через который происходит вывод, "анимация", выбор питомца
//отвечает за вывод игры на консоль

class InterfaceTamagochi {
	Output outS;
	Pet cat;
public:
	void setPet() {
		outS.out("Выберите тамагочика!", 5, 5);

		//список возможных питомцев рыбка,  рыбка, spongebob,
		//динозаврик, зайка, котик, енотик, черепашка,
		//	выдра, улитка

		//в OutPut прописать функцию, чтобы выбирать с помощью клавиатуры

		//-> выдра
		// улитка



	}

	void setPetName() {
		outS.out("Введите имя для вашего питомца", 5, 5);
		std::string name;
		std::cin >>name;

		//передать тамагочику, чтоб хранил как его зовут
	}

	void showState()
	{
		//outS.out(itoa(cat, 5, 5);

	}
};