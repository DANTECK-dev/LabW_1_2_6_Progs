#pragma once

#include "Libraries.h"

#include "TextBook.h"

void TextBook::getTextBook()
{
	cout << "\n\tИздательство: " << this->publisher
		<< "\n\tГод" << this->year
		<< "\n\tНазвание" << this->title
		<< "\n\tТематика" << this->subject
		<< "\n\tАвтор" << this->author
		<< "\n\tКоличество страниц" << this->numberOfPages
		<< "\n\tНазначение" << this->purpose;
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