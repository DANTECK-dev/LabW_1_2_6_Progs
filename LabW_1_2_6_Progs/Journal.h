#pragma once

#include "Libraries.h"

#include "PrintPublication.h"

class Journal : public PrintPublication
{

private:

	Journal* next = NULL;
	Journal* prev = NULL;

protected:

	string s_number; int i_number;		//номер

	string s_month; int i_month;		//мес€ц			

public:

	Journal()
	{
		//s_publisher		= { "None" };
		//s_year			= { "None" };
		//s_title			= { "None" };
		s_number		= { "None" };
		s_month			= { "None" };

		//i_publisher		= 0;
		//i_year			= 0;
		//i_title			= 0;
		i_number		= 0;
		i_month			= 0;
	}

	~Journal()
	{
		delete next;
		delete prev;
	}

	void getJournal		(Journal*& headJournals, Journal*& tailJournals);

	void createNew		(Journal *& Journals, Journal *&headJournals, Journal *&tailJournals);

	void setNumber_s	(string s_number);
	void setNumber_i	(int	i_number);

	void setMonth_s		(string s_month);
	void setMonth_i		(int	i_month);
};