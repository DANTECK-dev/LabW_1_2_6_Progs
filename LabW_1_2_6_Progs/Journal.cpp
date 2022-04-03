#pragma once

#include "Libraries.h"

#include "Journal.h"

void Journal::getJournal()
{
	cout << "\n\tИздательство: " << this->publisher
		<< "\n\tГод" << this->year
		<< "\n\tНазвание" << this->title
		<< "\n\tНомер" << this->number
		<< "\n\tМесяц" << this->month;
}

void Journal::setJournal(string publisher, string year, string title, string number, string month)
{
	this->publisher = publisher;
	this->year = year;
	this->title = title;
	this->number = number;
	this->month = month;
}