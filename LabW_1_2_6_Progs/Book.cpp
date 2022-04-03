#pragma once

#include "Libraries.h"

#include "Book.h"

void Book::getBook()
{
	cout << "\n\tИздательство: " << this->publisher
		<< "\n\tГод" << this->year
		<< "\n\tНазвание" << this->title
		<< "\n\tТематика" << this->subject
		<< "\n\tАвтор" << this->author
		<< "\n\tКоличество страниц" << this->numberOfPages;
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