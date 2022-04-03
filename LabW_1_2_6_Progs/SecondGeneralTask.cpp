#include "SecondGeneralTask.h"

#include "Libraries.h"

#include "PrintPublication.h"
#include "Journal.h"
#include "Book.h"
#include "TextBook.h"

enum class secondGeneralTaskMenu
{
	Exit,
	Addition,
	Subtraction,
	Multiplication,
	Division
};

void secondGeneralTask()
{
	cout << "\n\t1 - �������� ������\n\t2 - �������� �����\n\t3 - �������� �������";
	cout << "\n\t4 - ����� ���� ��������\n\t5 - ����� ���� ����\n\t6 - ����� ���� ���������\n\t";
	char kIn;
	cin >> kIn;

	int inputInt;
	try
	{
		inputInt = isInteger(kIn);
	}
	catch (const exception& err)
	{
		cout << "\n\t" << err.what() << "... ";
		char p = _getch();
		system("cls");
		return;
	}



}