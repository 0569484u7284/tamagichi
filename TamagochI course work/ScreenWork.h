#pragma once
#include <iostream>
#include <string>
#include "ConsoleOutput.h"
#include "PetBaseClass.h"
#include "Game.h"
#include "Food.h"
#include "Meds.h"

//�����, ����� ������� ���������� �����, "��������", ����� �������
//�������� �� ����� ���� �� �������

class InterfaceTamagochi {
	Output outS;
	Pet cat;
public:
	void setPet() {
		outS.out("�������� ����������!", 5, 5);

		//������ ��������� �������� �����,  �����, spongebob,
		//����������, �����, �����, ������, ���������,
		//	�����, ������

		//� OutPut ��������� �������, ����� �������� � ������� ����������

		//-> �����
		// ������



	}

	void setPetName() {
		outS.out("������� ��� ��� ������ �������", 5, 5);
		std::string name;
		std::cin >>name;

		//�������� ����������, ���� ������ ��� ��� �����
	}

	void showState()
	{
		//outS.out(itoa(cat, 5, 5);

	}
};