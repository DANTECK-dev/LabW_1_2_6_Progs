//#pragma once

#include "Libraries.h"

#include "Journal.h"

void Journal::createNew(Journal*& Journals, Journal *&headJournals, Journal *&tailJournals)
{
	if (Journals == NULL && headJournals == NULL && tailJournals == NULL)
	{
		Journals = new Journal();
		headJournals = Journals;
		tailJournals = Journals;
	}
	else
	{
		Journals = tailJournals;
		Journals->next = new Journal;
		Journals->next->prev = Journals;
		Journals = Journals->next;
		tailJournals = Journals;
	}
}

void Journal::getJournal(Journal*& headJournals, Journal*& tailJournals)
{
	if (headJournals == NULL && tailJournals == NULL)
	{
		cout << "\n\tÍוקודמ גûגמהטעü... ";
		char p = _getch();
		system("cls");
		return;
	}

	this == headJournals;

	while (true)
	{
		PrintPublication::getPrintPublication();

		if (s_number != "None")			cout << "\n\tÍמלונ: " << this->s_number;
		if (i_number != 0)				cout << "\n\tÍמלונ: " << this->i_number;

		if (s_month != "None")			cout << "\n\tÌוסÿצ: " << this->s_month;
		if (i_month != 0)				cout << "\n\tÌוסÿצ: " << this->i_month;

		if (this->next == NULL) break;
		this == this->next;
	}
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
