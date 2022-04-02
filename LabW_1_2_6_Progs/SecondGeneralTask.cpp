#include "SecondGeneralTask.h"
#include "ThisIs.h"
#include <iostream>
#include <conio.h>

using namespace std;

enum class secondGeneralTaskMenu
{
	Exit,
	Addition,
	Subtraction,
	Multiplication,
	Division
};

double calc(double a, double b, int f)
{
	double g;

	switch ((secondGeneralTaskMenu)f)
	{
		case secondGeneralTaskMenu::Exit:
			return 0;

		case secondGeneralTaskMenu::Addition:
		{
			g = a + b;
			break;
		}

		case secondGeneralTaskMenu::Subtraction:
		{
			g = a - b;
			break;
		}

		case secondGeneralTaskMenu::Multiplication:
		{
			g = a * b;
			break;
		}

		case secondGeneralTaskMenu::Division:
		{
			if (b == 0)
				throw exception("\n\t������, ������� �� 0! ... ");
			g = a / b;
			break;
		}

		default:
			throw exception("\n\t������ ����� ������ ��������");
	}
	return g;
}

void secondGeneralTask()
{
	cout << "\n\t������� 1 �����: ";
	int a;
	cin >> a;

	cout << "\t������� 2 �����: ";
	int b;
	cin >> b;

	cout << "\n\t������� ����� ��������: \n\n\t1. ��������\n\t2. ���������\n\t3. ���������\n\t4. �������\n\t0. �����\n\n\t";
	char ff;
	cin >> ff;

	int f = isInteger(ff);

	double g;

	g = calc(a, b, f);

	cout << "\n\t��������� �������: " << g << " ... ";
	char p = _getch();
	system("cls");
	return;
}