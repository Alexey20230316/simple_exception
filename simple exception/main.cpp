#include<iostream>
#include<string>
#include<Windows.h>


int function(std::string str, int forbidden_length)
{
	if (str.length() > forbidden_length)
	{
		throw std::exception("�� ����� ����� ��������� ������! �� ��������!");
	}
	std::cout << "����� ����� " << str << " ����� " << str.length() << std::endl << std::endl;
	return 0;
}

int main() {

	setlocale(LC_ALL, "Russian");

	int forbidden_length = 1;
	std::string str;

	do
	{
		std::cout << "������� ��������� ������: ";
		SetConsoleCP(1251);
		std::cin >> forbidden_length;
		std::cout << "������� �����: ";
		std::cin >> str;
		try
		{
		function(str, forbidden_length);
		}
		catch (const std::exception& ex)
		{
			std::cout << "�� �������:  " << ex.what() << std::endl;
			forbidden_length = 0;
		}

	} while (forbidden_length);




}