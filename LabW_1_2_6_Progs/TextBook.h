
#include "Libraries.h"

#include "ThisIs.h"

#include "Book.h"

class TextBook : public Book
{
private:

	TextBook* next = NULL;
	TextBook* prev = NULL;

protected:

	string purpose = { "None" };			//назначение

public:

	void getTextBook();

	void setTextBook(string publisher, string year, string title, string subject, string author, string numberOfPages, string purpose);
};