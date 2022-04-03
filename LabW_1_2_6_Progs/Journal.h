
#include "Libraries.h"

#include "ThisIs.h"

#include "PrintPublication.h"

class Journal : public PrintPublication
{
private:

	Journal* next = NULL;
	Journal* prev = NULL;

protected:

	string number = { "None" };			//номер
	string month = { "None" };			//мес€ц

public:

	void getJournal();

	void setJournal(string publisher, string year, string title, string number, string month);
};