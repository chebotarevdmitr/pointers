// тема указатели
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int age = 30;
	const double Pi = 3.1416;
	// использование & для поиска адресса впамяти 
	cout << "Адрес age: 0x " << hex << &age << endl;
	cout << "Адрес Pi:  0x " << hex << &Pi << endl;
	return 0;

}
