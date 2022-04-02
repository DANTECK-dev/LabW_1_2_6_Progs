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

		cout << "\n\tДанные обновлены... ";
	}

	void field_get()
	{
		cout << "\n\tВысота: " << height << "\n\tДлина: " << length;
	}

};

void firstGeneralTask()
{
	Rectangle Rect;

	bool q = false;		//нужен что бы убрать лишние нажатия

	while (true)
	{
		if (q == true)
		{
			cin.ignore(32767, '\n');
		}
		q = false;

		cout << "\n\t1 - Вывести площадь\n\t2 - Вывести периметр\n\t3 - Установить поля\n\t4 - Вывести поля\n\t0 - Выход\n\n\t";
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
			cout << "\n\tПлощадь прямоугольника = " << Rect.square_area() << " ... ";
			char p = _getch();
			system("cls");
			continue;
		}

		case Rect_Menu::Perimeter:
		{
			cout << "\n\tПериметр прямоугольника = " << Rect.square_perimeter() << " ... ";
			char p = _getch();
			system("cls");
			continue;
		}

		case Rect_Menu::Set:
		{

			cout << "\n\tВведите высоту: ";
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

			cout << "\n\tВведите высоту: ";
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
			cout << "\n\tВведено неверное значение... ";
			char p = _getch();
			system("cls");
			continue;
		}
		}
	}
	return;
}