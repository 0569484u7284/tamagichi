#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstdlib>
#include "ConsoleOutput.h"
#include <string>

class Authorization {

	std::string wd;

	//шифрование данных
	class Crypt {
	public:
		static std::string XOR(std::string key, std::string data) {
			int keyPos = 0;
			for (size_t i = 0; i < data.size(); i++)
			{
				data[i] = data[i] ^ (key[keyPos] * key.size());
				if (keyPos >= key.size())
					keyPos = 0;
			}
			return data;
		}
	};

	//класс данных пользователя
	class User {

	public:
		User(std::string name)
		{
			this->name = name;
		}
		bool checkPswd(std::string name, std::string pswd) {
			return (name == Crypt::XOR(pswd, name));
		}
		std::string name;
	};

public:

	Authorization(std::string wd)
	{
		this->wd = wd;
	}

	bool loginToUser(std::string Name, std::string pswd) {
		User* u;
		std::string temp;
		std::ifstream in(wd);
		while (std::getline(in, temp))
		{
			u = new User(temp);
			if (u->name == Crypt::XOR(pswd, Name))
			{
				return true;
			};
		}
		return false;
	}

	//добавить нового пользователя
	void addNew(std::string Name, std::string pswd) {
		std::ofstream out(wd, std::ios::app);
		if (!loginToUser(Name, pswd))
		{
			out << (Crypt::XOR(pswd, Name)) << "\n";
			std::cout << "Done!\n";
		}
		else
		{
			std::cout << "Login Exist!\n";
		}
	}

};