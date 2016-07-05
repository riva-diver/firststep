#include <iostream> 
#include <list> 
#include <iterator>			// заголовок итераторов 
#include <string> 

struct businfo				// cоздаем структуру
{
	char *namedriver;		// здесь будет храниться имя водителя 
	int buswhere;			// нахождение автобуса (0-парк, 1-маршрут) 
	int busnumber;			// номер автобуса 
	int tracknumber;		// номер маршрута 
};

// создаем функцию, которая принимает структуру, как параметр (указатель для итератора)
void show(businfo &object)
{
	std::cout << "Имя водителя: " << object.namedriver << std::endl;
	std::cout << "Где автобус: " << object.buswhere << std::endl;
	std::cout << "Номер автобуса: " << object.busnumber << std::endl;
	std::cout << "Номер маршрута: " << object.tracknumber << std::endl;
	std::cout << "__________________________________________________" << std::endl;
}

int main(void)
{
	setlocale(LC_ALL, "rus");

	std::list<businfo> spisok0; //Создали пустой список 
	std::list<businfo>::iterator it;
	int i;

	businfo infobus1; //это объект структуры с типом данных, именем структуры, building 

	infobus1.namedriver = "Денис"; //заполняем данные о владельце и т.д. 
	infobus1.buswhere = 1;
	infobus1.busnumber = 5;
	infobus1.tracknumber = 15;

	businfo infobus2;

	infobus2.namedriver = "Евгений";
	infobus2.buswhere = 0;
	infobus2.busnumber = 2;
	infobus2.tracknumber = 10;

	businfo infobus3;

	infobus3.namedriver = "Василий";
	infobus3.buswhere = 1;
	infobus3.busnumber = 2;
	infobus3.tracknumber = 20;

	////Выводим на печать запись структуры 1 и 3 
	//std::cout << "Имя водителя: " << infobus1.namedriver << std::endl;
	//std::cout << "Где автобус: " << infobus1.buswhere << std::endl;
	//std::cout << "Номер автобуса: " << infobus1.busnumber << std::endl;
	//std::cout << "Номер маршрута: " << infobus1.tracknumber << std::endl;
	//std::cout << "__________________________________________________" << std::endl;

	//show(apartment3);
	//std::cout << "__________________________________________________" << std::endl;

	//Добавляем в список 3 элемента структуры 
	spisok0.push_back(infobus1);
	spisok0.push_back(infobus2);
	spisok0.push_back(infobus3);

	//Вывод всего списка
	for (std::list<businfo>::iterator it = spisok0.begin();
		it != spisok0.end(); it++)
	{
		show(*it);
	};

	////Удаление элемента из списка
	//it = spisok0.begin();
	//while (it != spisok0.end())
	//{
	//	if (it->busnumber == 1)
	//	{
	//		spisok0.erase(it++);
	//	}
	//	else
	//	{
	//		++it;
	//	}
	//};

	////Вывод всего списка дублирование
	//for (std::list<businfo>::iterator it = spisok0.begin();
	//	it != spisok0.end(); it++)
	//{
	//	show(*it);
	//};

	////Вывод отдельного элемента списка - начало с 0
	//for ( it = spisok0.begin(), i = 0; it != spisok0.end(); it++, i++)
	//	{
	//	if (i == 1) { show(*it); }
	//	}

	system("Pause");

	return 0;
}