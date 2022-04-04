#pragma once

#include "Libraries.h"

#include "Book.h"

class TextBook : public Book
{
private:

	TextBook* next = NULL;
	TextBook* prev = NULL;

protected:

	string s_purpose; int i_purpose;		//назначение

public:

	TextBook()
	{
		//s_publisher			= { "None" };
		//s_year				= { "None" };
		//s_title				= { "None" };
		//s_subject			= { "None" };
		//s_author			= { "None" };
		//s_numberOfPages		= { "None" };
		s_purpose			= { "None" };

		//i_publisher			= 0;
		//i_year				= 0;
		//i_title				= 0;
		//i_subject			= 0;
		//i_author			= 0;
		//i_numberOfPages		= 0;
		i_purpose			= 0;
	}

	~TextBook()
	{
		delete next;
		delete prev;
	}

	void getTextBook();

	void setPurpose_s(string s_purpose); 
	void setPurpose_i(int i_purpose);
};