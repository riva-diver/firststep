#include <iostream> 
#include <list> 
#include <iterator>			// ��������� ���������� 
#include <string> 

struct businfo				// c������ ���������
{
	char *namedriver;		// ����� ����� ��������� ��� �������� 
	int buswhere;			// ���������� �������� (0-����, 1-�������) 
	int busnumber;			// ����� �������� 
	int tracknumber;		// ����� �������� 
};

// ������� �������, ������� ��������� ���������, ��� �������� (��������� ��� ���������)
void show(businfo &object)
{
	std::cout << "��� ��������: " << object.namedriver << std::endl;
	std::cout << "��� �������: " << object.buswhere << std::endl;
	std::cout << "����� ��������: " << object.busnumber << std::endl;
	std::cout << "����� ��������: " << object.tracknumber << std::endl;
	std::cout << "__________________________________________________" << std::endl;
}

int main(void)
{
	setlocale(LC_ALL, "rus");

	std::list<businfo> spisok0; //������� ������ ������ 
	std::list<businfo>::iterator it;
	int i;

	businfo infobus1; //��� ������ ��������� � ����� ������, ������ ���������, building 

	infobus1.namedriver = "�����"; //��������� ������ � ��������� � �.�. 
	infobus1.buswhere = 1;
	infobus1.busnumber = 5;
	infobus1.tracknumber = 15;

	businfo infobus2;

	infobus2.namedriver = "�������";
	infobus2.buswhere = 0;
	infobus2.busnumber = 2;
	infobus2.tracknumber = 10;

	businfo infobus3;

	infobus3.namedriver = "�������";
	infobus3.buswhere = 1;
	infobus3.busnumber = 2;
	infobus3.tracknumber = 20;

	////������� �� ������ ������ ��������� 1 � 3 
	//std::cout << "��� ��������: " << infobus1.namedriver << std::endl;
	//std::cout << "��� �������: " << infobus1.buswhere << std::endl;
	//std::cout << "����� ��������: " << infobus1.busnumber << std::endl;
	//std::cout << "����� ��������: " << infobus1.tracknumber << std::endl;
	//std::cout << "__________________________________________________" << std::endl;

	//show(apartment3);
	//std::cout << "__________________________________________________" << std::endl;

	//��������� � ������ 3 �������� ��������� 
	spisok0.push_back(infobus1);
	spisok0.push_back(infobus2);
	spisok0.push_back(infobus3);

	//����� ����� ������
	for (std::list<businfo>::iterator it = spisok0.begin();
		it != spisok0.end(); it++)
	{
		show(*it);
	};

	////�������� �������� �� ������
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

	////����� ����� ������ ������������
	//for (std::list<businfo>::iterator it = spisok0.begin();
	//	it != spisok0.end(); it++)
	//{
	//	show(*it);
	//};

	////����� ���������� �������� ������ - ������ � 0
	//for ( it = spisok0.begin(), i = 0; it != spisok0.end(); it++, i++)
	//	{
	//	if (i == 1) { show(*it); }
	//	}

	system("Pause");

	return 0;
}