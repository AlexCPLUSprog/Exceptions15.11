#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>

double devide(double num1,double num2) {
	if (num2 == 0)
		// throw "обнаружено деление на ноль";
		//throw std::exception("обнаружено деление на ноль");		// в скобках "конструктор"
		throw std::invalid_argument("делить на ноль нельзя");
	return num1 / num2;
}

// Заполнение массива случайными числами
template <typename T>
void fill_arr(T arr[], const int length, int begin, int end) {
	srand(time(0));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (end - begin) + begin;
}

// Вывод массива на экран с исключениями
template <typename T>
void show_arr(T arr[], const int length) {		
	if (length <= 0)
		throw std::invalid_argument("обнаружена отрицательная длина массива");
	std::cout << '[';
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
}


int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	// Исключения при работе с файлами
	/*std::string path = "file.txt";
	std::ofstream out;
	out.exceptions(std::ios::badbit | std::ios::failbit | std::ios::eofbit);	// метод на открытия файла (более информативно) // Разрешаем исключения

	try {
		out.open(path);
		std::cout << "Файл открыт для записи.\n";
		out.close();
	}
	catch (const std::ios::failure& ex) {	// преимущество Failure в том, что можно вписать код ошибки
		std::cout << "Ошибка открытия файла: " << ex.what() << '\n';
		std::cout << "Код ошибки: " << ex.code().value() << '\n';		// код ошибки iostream:1 , на основе цифры можно передать в catch эту цифру и что-то прописать
	}	// Можно передать метод value,чтобы передать просто число и через switch прописать что-нибудь
	*/

	// Обычная проверка открытия файла
	/*if (out.is_open())
		std::cout << "Файл открыт для записи.\n";		
	else
		std::cout << "Ошибка открытия файла.\n";*/

	// Обработка деления на ноль
	/*try {
		std::cout << "Введите два числа: ";
		std::cin >> n >> m;
		std::cout << n << " / " << m << " = " << devide(n, m) << "\n";
	}
	catch (const char* e) {
		std::cout << "Ошибка: " << e << "\n";
	}
	catch (const std::exception& ex) {
		std::cout << "Ошибка: " << ex.what() << "\n";
	}*/

	// Классическая проверка (if...else)
	/*std::cout << "Введите начало диапазона: ";
	std::cin >> n;
	std::cout << "Введите конец диапазона: ";
	std::cin >> m;
	if (n < m)
		std::cout << "Все ОК!\n";
	else
		std::cout << "Ошибка ввода!\n";*/

	// Обработка исключений
	/*try {
		std::cout << "Введите начало диапазона: ";
		std::cin >> n;
		std::cout << "Введите конец диапазона: ";
		std::cin >> m;
		if (n > m)
			throw 1;
		if (n == m)
			throw "Границы диапазона равны";
		std::cout << "Все ОК!\n";
	}
	catch (const int& e) {
		if (S == 1)
			std::cout << "Начало диапазона больше конца диапазона.\n";
	}
	catch (const char* e) {
		std::cout << "Ошибка: " << e << endl;
	}*/

	// Задача 1. Вывод массива на экран
	std::cout << "Задача 1.\nМассив:\n";
	const int size = 10;
	int arr[size];	
	try {
		fill_arr(arr, size, 1, 11);
		show_arr(arr, -5);
	}
	catch (const std::exception& ex) {
		std::cout << "Ошибка: " << ex.what() << '\n';
	}


	return 0;
}