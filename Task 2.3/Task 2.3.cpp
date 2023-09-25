// Task 2.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

struct adress {
	std::string city;
	std::string street;
	int house_num;
	int flat_num;
	int index;
};

void print_adress(adress& user_adress) {
	std::cout << "Город: " << user_adress.city << '\n';
	std::cout << "Улица: " << user_adress.street << '\n';
	std::cout << "Номер дома: " << user_adress.house_num << '\n';
	std::cout << "Номер квартиры: " << user_adress.flat_num << '\n';
	std::cout << "Индекс: " << user_adress.index << '\n';

}

int main() {

	setlocale(LC_ALL, "Russian");

	adress user_adress;
	std::cout << "Введите город: ";
	std::cin >> user_adress.city;
	std::cout << '\n';

	std::cout << "Введите улицу: ";
	std::cin >> user_adress.street;
	std::cout << '\n';

	std::cout << "Введите номер дома: ";
	std::cin >> user_adress.house_num;
	std::cout << '\n';

	std::cout << "Введите номер квартиры: ";
	std::cin >> user_adress.flat_num;
	std::cout << '\n';

	std::cout << "Введите индекс: ";
	std::cin >> user_adress.index;
	std::cout << '\n';

	print_adress(user_adress);



	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
