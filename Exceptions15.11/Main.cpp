#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <ctime>

double devide(double num1,double num2) {
	if (num2 == 0)
		// throw "���������� ������� �� ����";
		//throw std::exception("���������� ������� �� ����");		// � ������� "�����������"
		throw std::invalid_argument("������ �� ���� ������");
	return num1 / num2;
}

// ���������� ������� ���������� �������
template <typename T>
void fill_arr(T arr[], const int length, int begin, int end) {
	srand(time(0));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (end - begin) + begin;
}

// ����� ������� �� ����� � ������������
template <typename T>
void show_arr(T arr[], const int length) {		
	if (length <= 0)
		throw std::invalid_argument("���������� ������������� ����� �������");
	std::cout << '[';
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
}


int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	// ���������� ��� ������ � �������
	/*std::string path = "file.txt";
	std::ofstream out;
	out.exceptions(std::ios::badbit | std::ios::failbit | std::ios::eofbit);	// ����� �� �������� ����� (����� ������������) // ��������� ����������

	try {
		out.open(path);
		std::cout << "���� ������ ��� ������.\n";
		out.close();
	}
	catch (const std::ios::failure& ex) {	// ������������ Failure � ���, ��� ����� ������� ��� ������
		std::cout << "������ �������� �����: " << ex.what() << '\n';
		std::cout << "��� ������: " << ex.code().value() << '\n';		// ��� ������ iostream:1 , �� ������ ����� ����� �������� � catch ��� ����� � ���-�� ���������
	}	// ����� �������� ����� value,����� �������� ������ ����� � ����� switch ��������� ���-������
	*/

	// ������� �������� �������� �����
	/*if (out.is_open())
		std::cout << "���� ������ ��� ������.\n";		
	else
		std::cout << "������ �������� �����.\n";*/

	// ��������� ������� �� ����
	/*try {
		std::cout << "������� ��� �����: ";
		std::cin >> n >> m;
		std::cout << n << " / " << m << " = " << devide(n, m) << "\n";
	}
	catch (const char* e) {
		std::cout << "������: " << e << "\n";
	}
	catch (const std::exception& ex) {
		std::cout << "������: " << ex.what() << "\n";
	}*/

	// ������������ �������� (if...else)
	/*std::cout << "������� ������ ���������: ";
	std::cin >> n;
	std::cout << "������� ����� ���������: ";
	std::cin >> m;
	if (n < m)
		std::cout << "��� ��!\n";
	else
		std::cout << "������ �����!\n";*/

	// ��������� ����������
	/*try {
		std::cout << "������� ������ ���������: ";
		std::cin >> n;
		std::cout << "������� ����� ���������: ";
		std::cin >> m;
		if (n > m)
			throw 1;
		if (n == m)
			throw "������� ��������� �����";
		std::cout << "��� ��!\n";
	}
	catch (const int& e) {
		if (S == 1)
			std::cout << "������ ��������� ������ ����� ���������.\n";
	}
	catch (const char* e) {
		std::cout << "������: " << e << endl;
	}*/

	// ������ 1. ����� ������� �� �����
	std::cout << "������ 1.\n������:\n";
	const int size = 10;
	int arr[size];	
	try {
		fill_arr(arr, size, 1, 11);
		show_arr(arr, -5);
	}
	catch (const std::exception& ex) {
		std::cout << "������: " << ex.what() << '\n';
	}


	return 0;
}