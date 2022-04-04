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

	cout << "\n\t1 - Добавить журнал\n\t2 - Добавить книгу\n\t3 - Добавить учебник";
	cout << "\n\t4 - Вывод всех журналов\n\t5 - Вывод всех книг\n\t6 - Вывод всех учебников\n\t0 - Выход\n\t";
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
			if (Journals == NULL && headJournals == NULL && tailJournals == NULL)
			{
				Journals = new Journal;
				headJournals = Journals;
				tailJournals = Journals;
			}
		}

		case secondGeneralTaskMenu::AddBook:
		{
			if (Books == NULL && headBooks == NULL && tailBooks == NULL)
			{
				Books = new Book;
				headBooks = Books;
				tailBooks = Books;
			}
		}

		case secondGeneralTaskMenu::AddTextBook:
		{
			if (TextBooks == NULL && headTextBooks == NULL && tailTextBooks == NULL)
			{
				TextBooks = new TextBook;
				headTextBooks = TextBooks;
				tailTextBooks = TextBooks;
			}
		}

		case secondGeneralTaskMenu::GetJournal:
		{
			Journals->getJournal();
		}

		case secondGeneralTaskMenu::GetBook:
		{
			Books->getBook();
		}

		case secondGeneralTaskMenu::GetTextBook:
		{
			TextBooks->getBook();
		}

		case secondGeneralTaskMenu::GetAll:
		{

			Journals->getJournal();

			Books->getBook();

			TextBooks->getBook();
		}

		default:
		{

		}
	}

}