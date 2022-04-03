#include "SecondGeneralTask.h"

#include "Libraries.h"

#include "PrintPublication.h"
#include "Journal.h"
#include "Book.h"
#include "TextBook.h"

enum class secondGeneralTaskMenu
{
	Exit,
	AddJournal,
	AddBook,
	AddTextBook,
	GetJournal,
	GetBook,
	GetTextBook
};

void secondGeneralTask()
{
	while (true)
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

		switch ((secondGeneralTaskMenu)inputInt)
		{
			case secondGeneralTaskMenu::Exit: return;

			case secondGeneralTaskMenu::AddJournal:
			{

			}

			case secondGeneralTaskMenu::AddBook:
			{

			}

			case secondGeneralTaskMenu::AddTextBook:
			{

			}

			case secondGeneralTaskMenu::GetJournal:
			{

			}

			case secondGeneralTaskMenu::GetBook:
			{

			}

			case secondGeneralTaskMenu::GetTextBook:
			{

			}

			default:
			{

			}
		}
	}

}