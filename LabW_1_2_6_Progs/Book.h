
#include "Libraries.h"

#include "ThisIs.h"

#include "PrintPublication.h"

class Book : public PrintPublication
{
private:

	Book* next = NULL;
	Book* prev = NULL;

protected:

	string subject = { "None" };			//тематика
	string author = { "None" };			//автор
	string numberOfPages = { "None" };			//количество страниц

public:

	void getBook();

	void setBook(string publisher, string year, string title, string subject, string author, string numberOfPages);
};