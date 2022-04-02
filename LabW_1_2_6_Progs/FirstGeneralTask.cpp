#include "FirstGeneralTask.h"
#include "ThisIs.h"
#include <iostream>
#include <conio.h>

using namespace std;

int subtraction(int a, int b)
{
	if (a < 0 || b < 0)
		throw exception("\n\t��������� ������ ���� �� ��������������!");
	if (a < b || a - b < 0)
		throw exception("\n\t������ �������� ����� ���� ������ �������!");
	return a - b;
}

void firstGeneralTask()
{
	cout << "\n\t������� 1 �����: ";
	int a;
	cin >> a;

	cout << "\n\t������� 2 �����: ";
	int b;
	cin >> b;

	int g;
	
	try
	{
		g = subtraction(a, b);
	}

	catch (const exception& err)
	{
		cout << "\n\t" << err.what() << "... ";
		char p = _getch();
		system("cls");
		return;
	}

	cout << "\n\t��������� �������: " << g << " ... ";
	char p = _getch();
	system("cls");
	return;

}