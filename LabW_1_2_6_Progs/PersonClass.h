#pragma once

#include "Libraries.h"

class Person 
{

private:
	Person* next = NULL;
	Person* prev = NULL;

	void swapAndDelClients	(Person*& head, Person*& tail, Person*& clients);
	void transform			(Person*& head, Person*& tail, Person*& clients);
	void show				();

public:

	class Data {

	public:

		string	Surname;
		string	Name;
		string	Patronymic;
		string	Address;
		string	PhoneNum;
		string	PayDay;
		int 	Summ;
	
		Data()
		{
			Surname = { "None" };
			Name = { "None" };
			Patronymic = { "None" };
			Address = { "None" };
			PhoneNum = { "None" };
			PayDay = { "None" };
			Summ = 0;

		}		
		
		Data(const Data& other)
		{
			this->Surname		= other.Surname;
			this->Name			= other.Name;
			this->Patronymic	= other.Patronymic;
			this->Address		= other.Address;
			this->PhoneNum		= other.PhoneNum;
			this->PayDay		= other.PayDay;
			this->Summ			= other.Summ;
		}
	} DATA;

	Person() 
	{
	
	}

	Person(const Person& other) 
	{
	
	}

	~Person() 
	{
	
	}

	void addClients			(Person*& head, Person*& tail, Person*& clients);

	void sortClients		(Person*& head, Person*& tail, Person*& clients);

	void transformClients	(Person*& head, Person*& tail, Person*& clients);
		
	void delClients			(Person*& head, Person*& tail, Person*& clients);

	void showClients		(Person*& head, Person*& tail, Person*& clients);

	void searchClients		(Person*& head, Person*& tail, Person*& clients);

	void saveClients		(Person*& head, Person*& tail, Person*& clients);

	void downloadClients	(Person*& head, Person*& tail, Person*& clients);
};