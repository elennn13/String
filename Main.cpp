#include <iostream>
#include <string>// библиотека предназначена для работы со строками С++(класс string)

std::string repeat_str(std::string str, int repeats);







int main() {
	system("chcp 1251>null");
	int n;


	// Строки языка С
	
	char cstr1[4]{ 'H', 'i', '!', '\0' };
	for (int i = 0; i < 3; i++)
		std::cout << cstr1[i];
	std::cout << std::endl;

	char cstr2[]{ "Hello World!" };// char cstr2[] = "Hello World!"; или так
	std::cout << cstr1 << std::endl;
	std::cout << cstr2 << std::endl;

	// Cтрока в языке программирования С - упорядоченный набор
	// символьных элементов, объединённых в массив, в конце 
	// которого располгается нуль-терминатор

	// Строки языка С++
	
	//std::string mystr = "Hello World!";
	//std::cout << mystr << std::endl;

	//std::string concat1 = "Oranges";
	//std::string concat2 = "Apples";
	
	//std::cout << concat1 + concat2 << std::endl;

	// Конкатенация - процесс слияния двух или более строк в одну новую. 
	// Как правило представленно в виде операции сложения.
	
	// Ввод строки в консоль
	
	std::cout << "Введи имя -> ";
	std::string name;
	std::getline(std::cin, name);
	std::cout << "Привет, " << name << "!\n";
	
	std::cout << "Введи свой возраст!\n";
	int age;
	std::cin >> age;
	std::cout << "Когда то и мне было " << age << "...\n";

	std::cin.ignore();//вызывает только где должен быть getline после консольИна

	std::cout << "Введи свою профессию -> ";
	std::string position;
	std::getline(std::cin, position);
	std::cout << position << "? Круто!\n";

// Метод функция пренадлежащая к каому либо классу и вызываемая исключительно 
// объектами этого класса.

	// Методы строк
	
	//std::string str = "Hello World!";

	// Методы length и size? возвращающие длину строки
	//std::cout << str.length() << std::endl; //length возвращает число явлющееся длинной строки
	//std::cout << str.size() << std::endl;

	// insert, вставляющий подстроку в строку 
	//str.insert(3, "###");
	//std::cout << str << std::endl; // Hel###lo World!

	// replace, заменяющий часть строки на подстроку
	//str.replace(5, 3, "###");
	//std::cout << str << std::endl; // Hello###rld!

	// find, возвращающий позицию первого вхождения подстроки в строку
	//std::cout << str.find('l') << std::endl; //2
	//std::cout << str.find('l', 5) << std::endl; // 9

	// rfind, возвращающие позицию последнего вхождения подстроки в строку
	//std::cout << str.find('o') << std::endl; //7
	//std::cout << str.find('o', 5) << std::endl; //4

	// substr, возвращающий подстроку, извлеченную из строки.
	//std::cout << str.substr(4) << std::endl; // o World
	//std::cout << str.substr(3, 5) << std::endl; // lo Wo
	

	// Функции для работы со строками
	
	int num = 234;
	std::string numstr = std::to_string(num);
	std::cout << numstr << std::endl;
	std::cout << numstr[1] << std::endl;

	std::string s = "1111";
	int nums = std::stoi(s);
	std::cout << nums  << std::endl;

	std::string casestr = "Hello!";
	for (int i = 0; i < casestr.length(); i++)
		casestr[i] = std::tolower(casestr[i]);
	std::cout << casestr << std::endl;

	//  Задача 1 Повторение строки
	// Создайте функцию, которая принимает строку  и число N, после
    std::cout << "Задача 1.\nВведите строку ->";
    std::string str1;
    std::getline(std::cin, str1);
    std::cout << "Введите количество повторений строки -> ";
    std::cin >> n;
	std::cout << repeat_str(str1, n) << std::endl;




	return 0;

}
std::string repeat_str(std::string str, int repeats) {
	std::string result;
	for (int i = 0; i < repeats; i++)
		result += str;
	return result;
}