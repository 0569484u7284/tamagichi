#pragma once
#include <iostream>
#include <string>
#include <stdio.h>
#include <Windows.h>

#include "GatKey.h"
//класс, выводящий текст на экран, и наследники которого хранят информацию о выводимых текстовых рисунках
class Output {

public:
	static void out(std::string t, int x = 0, int y = 0) {
		SetCursor(x, y);
		std::cout << t;
	}
};


//
//class Menu{
//	std::vector <std::string> titles;//вектор названий пунктов меню
//	int active;
//	Coord pos;
//
//public:
//	Menu() {}
//	Menu(std::vector<std::string> titles, Coord start)
//	{
//		this->titles = titles;
//		pos = start;
//		active = 0;
//	}
//
//	void updateActive() {
//		for (size_t i = 0; i < titles.size(); i++)
//		{
//			if (i == active)
//				SetColor(BLACK, WHITE);
//
//			else
//				SetColor(WHITE, BLACK);
//
//			SetCursorPosition(pos.x + (i * titles[0].size() + i) + 1, pos.y + 1);
//			std::cout << titles[i];
//			SetColor(WHITE, BLACK);
//		}
//	}
//
//	int userChoise() {
//		bool exit = false;
//		do
//		{
//			if (_kbhit()) {
//				switch (keyHandler()) {
//				case key_RightArrow: {
//					if (active < titles.size() - 1)
//						active++;
//
//					else
//						active = 0;
//					break;
//				}
//				case key_LeftArrow: {
//					if (active > 0)
//						active--;
//
//					else
//						active = titles.size() - 1;
//					break;
//				}
//				case key_ENTER:
//					exit = true;
//					break;
//
//				default:
//					break;
//				}
//				updateActive();
//			}
//		} while (!exit);
//		return active;
//	}
//
//	//преобразовывавет все заголовки к одному размеру для отображения меню 
//	void modify() {
//		int maxSize = 0;
//		for (auto s : titles)
//		{
//			if (s.size() > maxSize)
//				maxSize = s.size();
//		}
//		for (auto& data : titles)
//		{
//			while (data.size() < maxSize)
//			{
//				data.insert(data.size(), " ");
//			}
//		}
//	}
//
//	//отрисовка рамки
//	void printFrame() {
//		SetCursorPosition(pos.x, pos.y);
//
//		modify();//все к одному размеру, чтобі отрисовать рамку
//
//		std::cout << char(LeftTopDoubleFrame);
//		for (size_t i = 1; i < titles[0].size() * titles.capacity() + titles.capacity(); i++)
//		{
//			if (i % (titles[0].size() + 1) != 0)
//				std::cout << char(205); //═══
//
//			else
//				std::cout << char(203); //═╦═
//		}
//		std::cout << char(RightTopDoubleFrame);
//		SetCursorPosition(pos.x, pos.y + 1);
//
//		std::cout << char(StraitUpDown);
//		for (size_t i = 0; i <= titles.capacity(); i++)
//		{
//			SetCursorPosition(pos.x + (i * titles[0].size() + i), pos.y + 1);
//			std::cout << char(StraitUpDown);
//		}
//		SetCursorPosition(pos.x, pos.y + 2);
//
//		std::cout << char(LeftDownDoubleFrame);
//		for (size_t i = 1; i < titles[0].size() * titles.capacity() + title.capacity(); i++)
//		{
//			if (i % (title[0].size() + 1) != 0)
//				std::cout << char(205);//═
//
//			else
//				std::cout << char(202); //╩
//		}
//		std::cout << char(RightDownDoubleFrame);
//	}
//
//	//открывает меню, отрисовывает и возвращает выбор пользователя
//	int open() {
//		//если опций меню нет, возвращает ноль
//		if (titles.size() - 1 <= 0)
//			return -1;
//
//		printFrame();
//
//		return userChoise();
//	}
//};

class CatPics : public Output {

public:
	void showPet(int x = 20, int y = 20) {
		out("there\nwould\nbe\na cat", x, y);
	}
};

class DogPics : public Output {

public:

};

class FishPics : public Output {


public:

};