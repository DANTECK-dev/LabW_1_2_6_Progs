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
	GetTextBook,
	GetAll
};

enum class createMenu
{
	Exit,
	Integer,
	String
};

void secondGeneralTask()
{
	Journal*	Journals		= NULL;
	Journal*	headJournals	= NULL;
	Journal*	tailJournals	= NULL;

	Book*		Books			= NULL;
	Book*		headBooks		= NULL;
	Book*		tailBooks		= NULL;

	TextBook*	TextBooks		= NULL;
	TextBook*	headTextBooks	= NULL;
	TextBook*	tailTextBooks	= NULL;

	while (true)
	{
		cout << "\n\t1 - �������� ������\n\t2 - �������� �����\n\t3 - �������� �������";
		cout << "\n\t4 - ����� ���� ��������\n\t5 - ����� ���� ����\n\t6 - ����� ���� ���������\n\t0 - �����\n\t";
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

		system("cls");
		switch ((secondGeneralTaskMenu)inputInt)
		{
			case secondGeneralTaskMenu::Exit: return;

			case secondGeneralTaskMenu::AddJournal:
			{
				string	s_publisher, s_year, s_title, s_number, s_month;
				int		i_publisher, i_year, i_title, i_number, i_month;

				if (Journals == NULL && headJournals == NULL && tailJournals == NULL)
				{
					Journals = new Journal();
					headJournals = Journals;
					tailJournals = Journals;
				}
				else
				{
					Journals->next
				}

				cout << "\n\t��� ������ �����������:\n\t1 - �������������\n\t2 - ���������\n\t";
				char kk;
				cin >> kk;

				int k = isInteger(kk);
				cin.get();

				switch ((createMenu)k)
				{
				case createMenu::Exit: return;

				case createMenu::Integer:
				{
					cout << "\n\t������� ������������: ";
					cin >> i_publisher;
					Journals->setPublisher_i(i_publisher);
					break;
				}
				case createMenu::String:
				{
					cout << "\n\t������� ������������: ";
					getline(cin, s_publisher);
					Journals->setPublisher_s(s_publisher);
					break;
				}
				default:
					cout << "\n\t������� �������� ��������... ";
					char p = _getch();
					break;
				}
				

				break;
			}

			case secondGeneralTaskMenu::AddBook:
			{
				if (Books == NULL && headBooks == NULL && tailBooks == NULL)
				{
					Books = new Book;
					headBooks = Books;
					tailBooks = Books;
				}
				break;
			}

			case secondGeneralTaskMenu::AddTextBook:
			{
				if (TextBooks == NULL && headTextBooks == NULL && tailTextBooks == NULL)
				{
					TextBooks = new TextBook;
					headTextBooks = TextBooks;
					tailTextBooks = TextBooks;
				}
				break;
			}

			case secondGeneralTaskMenu::GetJournal:
			{
				Journals->getJournal();
				cout << "\n\t";
				char p = _getch();
				break;
			}

			case secondGeneralTaskMenu::GetBook:
			{
				Books->getBook();
				cout << "\n\t";
				char p = _getch();
				break;
			}

			case secondGeneralTaskMenu::GetTextBook:
			{
				TextBooks->getBook();
				cout << "\n\t";
				char p = _getch();
				break;
			}

			case secondGeneralTaskMenu::GetAll:
			{
				cout << "\n\n\t\t�������:";
				Journals->getJournal();

				cout << "\n\n\t\t�����: ";
				Books->getBook();

				cout << "\n\n\t\t��������: ";
				TextBooks->getTextBook();
				cout << "\n\n\t\t";
				char p = _getch();
				break;
			}

			default:
			{
				cout << "\n\t�������� ��������... ";
				char p = _getch();
				system("cls");
				break;
			}
		}
	}

}