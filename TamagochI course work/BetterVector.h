#pragma once
#include <vector>

template<typename T>
class  BetterVector : public std::vector<T>
{
public:

	//��������� ��� ������������� �������� �� ���������� � ����������� �������
	//bool operator !=(T data) {
	//	for (auto s : this)//�������������� ��������
	//	{
	//		if (data == s)
	//		{
	//			return false;
	//		}
	//	}
	//	return true;
	//}

	//bool operator ==(T data) {
	//	for (auto s : this)
	//	{
	//		if (data == s)
	//		{
	//			return true;
	//		}
	//	}
	//	return false;
	//}

private:

};
