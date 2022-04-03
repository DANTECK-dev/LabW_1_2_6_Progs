#pragma once

#include "Libraries.h"

#include "TextBook.h"

void TextBook::getTextBook()
{
	cout << "\n\t������������: " << this->publisher
		<< "\n\t���" << this->year
		<< "\n\t��������" << this->title
		<< "\n\t��������" << this->subject
		<< "\n\t�����" << this->author
		<< "\n\t���������� �������" << this->numberOfPages
		<< "\n\t����������" << this->purpose;
}

void TextBook::setTextBook(string publisher, string year, string title, string subject, string author, string numberOfPages, string purpose)
{
	this->publisher = publisher;
	this->year = year;
	this->title = title;
	this->subject = subject;
	this->author = author;
	this->numberOfPages = numberOfPages;
	this->purpose = purpose;
}