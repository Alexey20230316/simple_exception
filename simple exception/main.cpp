#include<iostream>
#include<string>
#include<Windows.h>


int function(std::string str, int forbidden_length)
{
	if (str.length() > forbidden_length)
	{
		throw std::exception("Вы ввели слово запретной длинны! До свидания!");
	}
	std::cout << "Длина слова " << str << " равна " << str.length() << std::endl << std::endl;
	return 0;
}

int main() {

	setlocale(LC_ALL, "Russian");

	int forbidden_length = 1;
	std::string str;

	do
	{
		std::cout << "Введите запретную длинну: ";
		SetConsoleCP(1251);
		std::cin >> forbidden_length;
		std::cout << "Введите слово: ";
		std::cin >> str;
		try
		{
		function(str, forbidden_length);
		}
		catch (const std::exception& ex)
		{
			std::cout << "Мы поймали:  " << ex.what() << std::endl;
			forbidden_length = 0;
		}

	} while (forbidden_length);




}