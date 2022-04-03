
#include "Libraries.h"

#include "ThisIs.h"

#include "PrintPublication.h"

class Journal : public PrintPublication
{
private:

	Journal* next;
	Journal* prev;

protected:

	string number;			//номер
	string month;			//мес€ц

public:

	Journal()
	{
		next = NULL;
		prev = NULL;

		number = { "None" };
		month  = { "None" };
	}

	~Journal()
	{
		delete next;
		delete prev;
	}

	void getJournal();

	void setJournal(string publisher, string year, string title, string number, string month);
};