#include "FirstGeneralTask.h"
#include "ThisIs.h"
#include <iostream>
#include <conio.h>

using namespace std;

enum class Rect_Menu
{
	Exit,
	Area,
	Perimeter,
	Set,
	Get
};

class Rectangle
{

private:

	int height;
	int length;

public:

	Rectangle()
	{
		height = 10;
		length = 20;
	}

	int long square_area()
	{
		return height * length;
	}

	int long square_perimeter()
	{

		return (height + length) * 2;
	}

	void field_set(int height, int length)
	{
		if (height >= 0)
			this->height = height;

		if (length >= 0)
			this->length = length;

		cout << "\n\t������ ���������... ";
	}

	void field_get()
	{
		cout << "\n\t������: " << height << "\n\t�����: " << length;
	}

};

void firstGeneralTask()
{
	Rectangle Rect;

	bool q = false;		//����� ��� �� ������ ������ �������

	while (true)
	{
		if (q == true)
		{
			cin.ignore(32767, '\n');
		}
		q = false;

		cout << "\n\t1 - ������� �������\n\t2 - ������� ��������\n\t3 - ���������� ����\n\t4 - ������� ����\n\t0 - �����\n\n\t";
		char temp_inputInt;
		cin >> temp_inputInt;
		system("cls");

		int inputInt;

		try
		{
			inputInt = isInteger(temp_inputInt);
		}
		catch (const exception& err)
		{
			cout << "\n\t" << err.what() << "... ";
			char p = _getch();
			system("cls");
			q = true;
			continue;
		}

		switch ((Rect_Menu)inputInt)
		{
		case Rect_Menu::Exit:
			return;

		case Rect_Menu::Area:
		{
			cout << "\n\t������� �������������� = " << Rect.square_area() << " ... ";
			char p = _getch();
			system("cls");
			continue;
		}

		case Rect_Menu::Perimeter:
		{
			cout << "\n\t�������� �������������� = " << Rect.square_perimeter() << " ... ";
			char p = _getch();
			system("cls");
			continue;
		}

		case Rect_Menu::Set:
		{

			cout << "\n\t������� ������: ";
			char temp_height[100];
			cin.get();
			cin.getline(temp_height, 100);

			int height;

			try
			{
				height = isInteger_l(temp_height);
			}
			catch (const exception& err)
			{
				cout << "\n\t" << err.what() << "... ";
				char p = _getch();
				system("cls");
				continue;
			}

			cout << "\n\t������� ������: ";
			char temp_length[100];
			cin.getline(temp_length, 100);

			int length;

			try
			{
				length = isInteger_l(temp_length);
			}
			catch (const exception& err)
			{
				cout << "\n\t" << err.what() << "... ";
				char p = _getch();
				system("cls");
				continue;
			}

			Rect.field_set(height, length);

			char p = _getch();
			system("cls");
			continue;
		}

		case Rect_Menu::Get:
		{
			Rect.field_get();

			char p = _getch();
			system("cls");
			continue;
		}

		default:
		{
			cout << "\n\t������� �������� ��������... ";
			char p = _getch();
			system("cls");
			continue;
		}
		}
	}
	return;
}