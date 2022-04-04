#pragma once

#include "Libraries.h"

#include "PrintPublication.h"

class Book : public PrintPublication
{
private:

	Book* next = NULL;
	Book* prev = NULL;

protected:

	string s_subject; int i_subject; 				//��������

	string s_author; int i_author; 					//�����

	string s_numberOfPages; int i_numberOfPages; 	//���������� �������		

public:

	Book()
	{
		//s_publisher			= { "None" };
		//s_year				= { "None" };
		//s_title				= { "None" };
		s_subject			= { "None" };
		s_author			= { "None" };
		s_numberOfPages		= { "None" };

		//i_publisher			= 0;
		//i_year				= 0;
		//i_title				= 0;
		i_subject			= 0;
		i_author			= 0;
		i_numberOfPages		= 0;
	}

	~Book()
	{
		delete next;
		delete prev;
	}

	void getBook();

	void setSubject_s		(string s_subject);
	void setSubject_i		(int	i_subject);

	void setAuthor_s		(string s_author);
	void setAuthor_i		(int	i_author);

	void setNumberOfPages_s	(string s_numberOfPages);
	void setNumberOfPages_i	(int	i_numberOfPages);

};