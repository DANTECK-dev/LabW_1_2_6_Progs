#pragma once

#include "Libraries.h"

#include "Book.h"

void Book::getBook()
{
	cout << "\n\t������������: " << this->publisher
		<< "\n\t���" << this->year
		<< "\n\t��������" << this->title
		<< "\n\t��������" << this->subject
		<< "\n\t�����" << this->author
		<< "\n\t���������� �������" << this->numberOfPages;
}

void Book::setBook(string publisher, string year, string title, string subject, string author, string numberOfPages)
{
	this->publisher = publisher;
	this->year = year;
	this->title = title;
	this->subject = subject;
	this->author = author;
	this->numberOfPages = numberOfPages;
}