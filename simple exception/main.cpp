#include<iostream>
#include<string>
#include<Windows.h>


int function(std::string str, int forbidden_length)
{
	if (str.length() == forbidden_length)
	{
		throw std::runtime_error("�� ����� ����� ��������� ������! �� ��������!");
	}
	std::cout << "����� ����� " << str << " ����� " << str.length() << std::endl << std::endl;
	return 0;
}

int main() {

	setlocale(LC_ALL, "Russian");

	int forbidden_length = 1;
	std::string str;

		std::cout << "������� ��������� ������: ";
		std::cin >> forbidden_length;

	do
	{
		SetConsoleCP(1251);
		std::cout << "������� �����: ";
		std::cin >> str;
		try
		{
		function(str, forbidden_length);
		}
		catch (const std::runtime_error& ex)
		{
			std::cout << "�� �������:  " << ex.what() << std::endl;
			forbidden_length = 0;
		}

	} while (forbidden_length);



	return 0;
}