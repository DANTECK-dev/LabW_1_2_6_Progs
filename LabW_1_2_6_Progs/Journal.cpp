//#pragma once

#include "Libraries.h"

#include "Journal.h"

void Journal::getJournal()
{
	PrintPublication::getPrintPublication();

	if (s_number != "None")			cout << "\n\tНомер: " << this->s_number;
	if (i_number != 0)				cout << "\n\tНомер: " << this->i_number;

	if (s_month != "None")			cout << "\n\tМесяц: " << this->s_month;
	if (i_month != 0)				cout << "\n\tМесяц: " << this->i_month;
}

void Journal::setNumber_s(string s_number)
{
	this->s_number = s_number;
}

void Journal::setNumber_i(int	i_number)
{
	this->i_number = i_number;
}


void Journal::setMonth_s(string s_month)
{
	this->s_month = s_month;
}

void Journal::setMonth_i(int	i_month)
{
	this->i_month = i_month;
}
