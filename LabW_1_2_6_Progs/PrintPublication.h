
#include "Libraries.h"

#include "ThisIs.h"

class PrintPublication
{
protected:

	string publisher = { "None" };				//издательство
	string year = { "None" };					//год
	string title = { "None" };					//название

	static int counter;							//кол-во классов
};