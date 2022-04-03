#pragma once

#include "Libraries.h"

#include "Journal.h"

void Journal::getJournal()
{
	cout << "\n\t������������: " << this->publisher
		<< "\n\t���" << this->year
		<< "\n\t��������" << this->title
		<< "\n\t�����" << this->number
		<< "\n\t�����" << this->month;
}

void Journal::setJournal(string publisher, string year, string title, string number, string month)
{
	this->publisher = publisher;
	this->year = year;
	this->title = title;
	this->number = number;
	this->month = month;
}