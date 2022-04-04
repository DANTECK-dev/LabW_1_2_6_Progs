//#pragma once

#include "Libraries.h"

#include "Book.h"

void Book::getBook()
{
	PrintPublication::getPrintPublication();

	if (s_subject != "None")		cout << "\n\t��������: "			<< this->s_subject;
	if (i_subject != 0)				cout << "\n\t��������: "			<< this->i_subject;

	if (s_author != "None")			cout << "\n\t�����: "				<< this->s_author;
	if (i_author != 0)				cout << "\n\t�����: "				<< this->i_author;

	if (s_numberOfPages != "None")	cout << "\n\t���������� �������: "	<< this->s_numberOfPages;
	if (i_numberOfPages != 0)		cout << "\n\t���������� �������: "	<< this->i_numberOfPages;
}

#pragma region sets

void Book::setSubject_s(string s_subject)
{
	this->s_subject = s_subject;
}

void Book::setSubject_i(int i_subject)
{
	this->i_subject = i_subject;
}


void Book::setAuthor_s(string s_author)
{
	this->s_author = s_author;
}

void Book::setAuthor_i(int i_author)
{
	this->i_author = i_author;
}


void Book::setNumberOfPages_s(string s_numberOfPages)
{
	this->s_numberOfPages = s_numberOfPages;
}

void Book::setNumberOfPages_i(int i_numberOfPages)
{
	this->i_numberOfPages = i_numberOfPages;
}
#pragma endregion