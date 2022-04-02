#include "FunctionsForAnIndividualTask.h"
#include "PersonStruct.h"
#include "ThisIs.h"

#include <Windows.h>
#include <string>
#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;

#define INDIVID_INPUT_FILE_LOCATION		"Input_Clients.txt"
#define INDIVID_OUTPUT_FILE_LOCATION	"Output_Clients.txt"

void addClients(person*& head, person*& tail, person*& clients)
{
	cout << "\n\n\t���������� �������\n";
	string	newSurname		= { "None" };
	string	newName			= { "None" };
	string	newPatronymic	= { "None" };
	string	newAddress		= { "None" };
	string	newPhoneNum		= { "None" };
	string	newPayDay		= { "None" };
	char	newSumm[100];	

	cout << "\n\t������� ������ �������\n";
	cout << "\n\t�������: "; 	cin.get();		getline(cin, newSurname);
	cout << "\n\t���: ";						getline(cin, newName);
	cout << "\n\t��������: ";					getline(cin, newPatronymic);
	cout << "\n\t������: ";						getline(cin, newAddress);
	cout << "\n\t����� �������� (��� +7): ";	getline(cin, newPhoneNum);
	cout << "\n\t���� ������ (��.��.����): ";	getline(cin, newPayDay);
	cout << "\n\t����� �������: ";				cin.getline(newSumm, 100); ;
	system("cls");

	int newSum = isInteger_l(newSumm);

	if (tail == NULL && head == NULL) 
	{
		tail = new person;
		clients = tail;
		head = tail;
	}

	else
	{
	clients = tail;
	clients->next = new person;
	clients->next->prev = clients;
	clients = clients->next;
	tail = clients;
	}
	
	clients->Data.Surname = newSurname;
	clients->Data.Name = newName;
	clients->Data.Patronymic = newPatronymic;
	clients->Data.Address = newAddress;
	clients->Data.PhoneNum = "+7" + newPhoneNum;
	clients->Data.PayDay = newPayDay;
	clients->Data.Summ = newSum;

	//(*counter)++;

	cout << "\n\t�������� \n" << "\n\t�������: " << newSurname
		<< "\n\t���: " << newName << "\n\t��������: " << newPatronymic
		<< "\n\t������: " << newAddress << "\n\t����� ��������: +7" << newPhoneNum
		<< "\n\t���� ������: " << newPayDay << "\n\t����� �������: " << newSumm;

	cout << "\n\n\t������� ����� ������� ��� �������� � ����... ";
	char p = _getch();
	system("cls");
	return;
};
//finished

void sortClients(person*& head, person*& tail, person*& clients) 
{
	if (tail == NULL && head == NULL)
		throw exception("\n\n\t��� ������ �������� ��� ����������...");

	if (clients == head && clients == tail)
		throw exception("\n\n\t���� ������ �������� ��� ����������...");

	cout << "\n\t����������� ���� �������� ��\n";
	cout << "\n\t1. �������\t2. ���\t0.�����\n\n\t";
	char inputNumm;
	cin >> inputNumm;

	int inputNum = isInteger(inputNumm);

	clients = head;
	int counter = 1;
	person* temp = NULL;
	temp = new person;

	while (true) {
		counter++;
		clients = clients->next;
		if (clients == tail) break;
	}

	clients = head;
	system("cls");
	switch (inputNum) {

		case(0): 
			return;

		case(1): {
			for (int i = 1; i < counter; i++) 
			{
				clients = head;
				for (int j = 0; j < counter - i; j++)
				{
					if (clients->Data.Surname > clients->next->Data.Surname)
					{
						temp->Data = clients->Data;
						clients->Data = clients->next->Data;
						clients->next->Data = temp->Data;
					}
					clients = clients->next;
				}
			}
			cout << "\n\n\t���������� �� ������� ���������, ������� ����� ������� ��� �������� � ����... ";
			char p = _getch();
			system("cls");
			return;
		}

		case(2): {
			for (int i = 1; i < counter; i++)
			{
				clients = head;
				for (int j = 0; j < counter - i; j++)
				{
					if (clients->Data.Name > clients->next->Data.Name) 
					{
						temp->Data = clients->Data;
						clients->Data = clients->next->Data;
						clients->next->Data = temp->Data;
					}
					clients = clients->next;
				}
			}
			cout << "\n\n\t���������� �� ����� ���������, ������� ����� ������� ��� �������� � ����... ";
			char p = _getch();
			system("cls");
			return;
		}

		default: {
			throw exception("\n\n\t������� �������� ��������, ������� ����� ������� ��� �������� � ����... ");
		}
	}
	system("cls");
}
//finished

void transform(person*& head, person*& tail, person*& clients)
{
	cout	<< "\n\n\t����� ������ ��������\n"
				<< "\n\t1. ������� - " << clients->Data.Surname
				<< "\n\t2. ��� - " << clients->Data.Name
				<< "\n\t3. �������� - " << clients->Data.Patronymic
				<< "\n\t4. ������ - " << clients->Data.Address
				<< "\n\t5. ���������� ����� - " << clients->Data.PhoneNum
				<< "\n\t6. ���� ������ - " << clients->Data.PayDay
				<< "\n\t7. ����� - " << clients->Data.Summ
				<< "\n\t0. �����\n\n\t";
	char InIntt;
	cin >> InIntt;

	int InInt = isInteger(InIntt);

	switch (InInt) {
		case(0): {return; }
		case(1): {cout << "\n\n\t������� �������: ";		cin.get(); getline(cin, clients->Data.Surname); 	break; }
		case(2): {cout << "\n\n\t������� ���: ";			cin.get(); getline(cin, clients->Data.Name); 		break; }
		case(3): {cout << "\n\n\t������� ��������: ";		cin.get(); getline(cin, clients->Data.Patronymic);	break; }
		case(4): {cout << "\n\n\t������� ������: ";		cin.get(); getline(cin, clients->Data.Address); 	break; }
		case(5): {cout << "\n\n\t������� ����������: ";	cin.get(); getline(cin, clients->Data.PhoneNum); 	break; }
		case(6): {cout << "\n\n\t������� ����: ";			cin.get(); getline(cin, clients->Data.PayDay);		break; }
		case(7): {cout << "\n\n\t������� �����: ";			cin.get();		   cin >> clients->Data.Summ;		break; }
		default: {
			throw exception("\n\n\t������� �������� ��������, ������� ����� ������� ��� �������� � ����... ");
		}
	}
	system("cls");
}
void transformClients(person*& head, person*& tail, person*& clients)
{
	if (tail == NULL && head == NULL)
		throw exception("\n\n\t��� ������ �������� ��� ���������...");

	cout << "\n\n\t�������� ������ �������\n\n\t\t����� �� \n\n\t1. ���\t2. ����� � ����\t0. �����\n\n\t";
	char inputNumm;
	cin >> inputNumm;

	int inputNum = isInteger(inputNumm);

	system("cls");
	clients = head;

	switch (inputNum)
		{
		case(0): 
			return;

		case(1): {
			cout << "\n\n\t������� ������� ��� ��� ��� ��������. 0. �����\n\n\t";
			string inputStr;
			cin >> inputStr;
			system("cls");

			if (inputStr == "0") { return; }

			int searchID = -1;
			int couErr = 0;
			int id = 1;
			while (true) 
			{
				if (inputStr == clients->Data.Surname)		{ searchID = id; couErr++; }
				if (inputStr == clients->Data.Name)			{ searchID = id; couErr++; }
				if (inputStr == clients->Data.Patronymic)	{ searchID = id; couErr++; }
				if (clients->next == NULL) break;
				clients = clients->next;
				id++;
			}
			if (couErr > 1) 
				throw exception("\n\n\t������� ����� ������ �������, ������� ������ ������� �������. ������� ����� ������� ��� �������� � ����... ");

			if (searchID == -1) 
				throw exception("\n\n\t������ �� ������, ������� ����� ������� ���-�� ��������� � ����... ");
				
			if (searchID >= 0) {
				clients = head;
				for (int i = 0; i < searchID - 1; i++) {
					clients = clients->next;
				}
				cout << "\n\n\t�������� ������ ������� " << clients->Data.Surname << " " << clients->Data.Name
					<< " " << clients->Data.Patronymic << "\n\n\t1. ��\t2. ���\n\n\t";
				char inPP;
				cin >> inPP;

				int inP = isInteger(inPP);

				system("cls");
				switch (inP) 
				{
					case(1): {transform(head, tail, clients); return; }

					case(2): { return; }

					default: {
						throw exception("\n\n\t������� �������� ��������, ������� ����� ������� ��� �������� � ����... ");
					}

				}
			}
		}

		case(2): {
			cout << "\n\n\t������� ����� � ����. 0. �����\n\n\t";
			int inputInt;
			cin >> inputInt;

			if (inputInt == 0) { system("cls"); return; }

			for (int i = 0; i < inputInt - 1; i++) 
			{
				clients = clients->next;
			}

			system("cls");
			cout << "\n\n\t�������� ������ ������� " << clients->Data.Surname << " " << clients->Data.Name
				<< " " << clients->Data.Patronymic << "\n\n\t1. ��\t2. ���\n\n\t";
			char inPP;
			cin >> inPP;

			int inP = isInteger(inPP);

			system("cls");
			switch (inP) 
			{
				case(1): {transform(head, tail, clients); return; }

				case(2): { return; }

				default: {
					throw exception("\n\n\t������� �������� ��������, ������� ����� ������� ��� �������� � ����... ");
				}

			}
		}

		default: {
			throw exception("\n\n\t������� �������� ��������, ������� ����� ������� ��� �������� � ����... ");
		}

	}

	system("cls");
}
//finished

void swapAndDelClients(person*& head, person*& tail, person*& clients)
{
	if (clients != head && clients != tail) {
		clients->prev->next = clients->next;
		clients->next->prev = clients->prev;
	}
	else if (clients == head && clients != tail) {
		head = clients->next;
		head->prev = NULL;
	}
	else if (clients == tail && clients != head) {
		tail = clients->prev;
		tail->next = NULL;
	}
	else {
		head = NULL;
		tail = NULL;
	}
	delete clients;
}
void delClients(person*& head, person*& tail, person*& clients) 
{
	if (tail == NULL && head == NULL)
		throw exception("\n\n\t��� ������ �������� ��� ��������...");

	clients = head;
	while (true) {
		if (clients->next == NULL) break;
		clients = clients->next;
		tail = clients;
	}
	while (true) {
		if (clients->prev == NULL) break;
		clients = clients->prev;
		head = clients;
	}
	cout << "\n\t������� ������ �������\n\n\t\t����� �� \n\n\t1. ���\t2. ����� � ����\t0. �����\n\n\t";
	char inputNumm;
	cin >> inputNumm;

	int inputNum = isInteger(inputNumm);

	system("cls");
	clients = head;
	switch (inputNum) 
	{
		case(0):
			return;

		case(1): {
			cout << "\n\n\t������� ������� ��� ��� ��� ��������. 0. �����\n\n\t";
			string inputStr;
			cin >> inputStr;
			system("cls");
			if (inputStr == "0") { return; }
			int id = 1;
			int searchID = -1;
			int couErr = 0;
			while (true) {
				if (inputStr == clients->Data.Surname)		{ searchID = id; couErr++; }
				if (inputStr == clients->Data.Name)			{ searchID = id; couErr++; }
				if (inputStr == clients->Data.Patronymic)	{ searchID = id; couErr++; }
				if (clients == tail) break;
				clients = clients->next;
				id++;
			}
			if (couErr > 1)
				throw exception("\n\n\t������� ����� ������ �������, ������� ������ ������� �������. ������� ����� ������� ��� �������� � ����... ");

			if (searchID == -1)
				throw exception("\n\n\t������ �� ������, ������� ����� ������� ���-�� ��������� � ����... ");

			if (searchID >= 0) {
				cout << "\n\n\t������� ������ ������� " << clients->Data.Surname << " " << clients->Data.Name
					<< " " << clients->Data.Patronymic << "\n\n\t1. ��\t2. ���\n\n\t";
				char inputHH;
				cin >> inputHH;

				int inputH = isInteger(inputHH);

				system("cls");
				switch (inputH) 
				{
					case(1): 
					{
						swapAndDelClients(head, tail, clients);
						cout << "\n\n\t������� �������, ������� ����� ������� ��� ������ � ����... ";
						char p = _getch();
						system("cls");
						return;
					}
					case(2): { return; }

					default: {
						throw exception("\n\n\t������� �������� ��������, ������� ����� ������� ��� �������� � ����... ");
					}

				}
			}
		}

		case(2): {
			cout << "\n\n\t������� ����� � ����. 0. �����\n\n\t";
			int inputInt;
			cin >> inputInt;
			if (inputInt == 0)return;
			clients = head;
			for (int i = 0; i < inputInt - 1; i++) 
			{
				clients = clients->next;
			}
			system("cls");
			cout << "\n\n\t������� ������ ������� " << clients->Data.Surname << " " << clients->Data.Name
				<< " " << clients->Data.Patronymic << "\n\n\t1. ��\t2. ���\n\n\t";
			char inPP;
			cin >> inPP;

			int inP = isInteger(inPP);

			system("cls");
			switch (inP) 
			{
				case(1): 
				{
					swapAndDelClients(head, tail, clients);
					cout << "\n\n\t������� �������, ������� ����� ������� ��� ������ � ����... ";
					char p = _getch();
					system("cls");
					return;
				}

				case(2): { return; }

				default: {
					throw exception("\n\n\t������� �������� ��������, ������� ����� ������� ��� �������� � ����... ");
				}

			}
		}

		default: {
			throw exception("\n\n\t������� �������� ��������, ������� ����� ������� ��� �������� � ����... ");
		}

	}
	clients = head;
	system("cls");
}
//finished

void showClients(person*& head, person*& tail, person*& clients)
{
	if (tail == NULL && head == NULL)
		throw exception("\n\n\t��� ������ �������� ��� ������...");

	cout << "\n\n\t������� ������ ��������\n\n";

	int maxLenSurname		= 7;
	int maxLenName			= 3;
	int maxLenPatronymic	= 8;
	int maxLenAddress		= 15;
	int maxLenPhoneNum		= 16;
	int maxLenPayDay		= 11;
	int maxLenSumm			= 13;

	int maxSumm				= 0;

	clients					= head;
	while (true)
	{
		int LenSurname		= clients->Data.Surname.length();
		int LenName			= clients->Data.Name.length();
		int LenPatronymic	= clients->Data.Patronymic.length();
		int LenAddress		= clients->Data.Address.length();
		int LenPhoneNum		= clients->Data.PhoneNum.length();
		int LenPayDay		= clients->Data.PayDay.length();
		int LenSumm			= 0;
		int Summ			= clients->Data.Summ;
		int g				= 0;
		while (Summ > 0)	{ Summ /= 10; LenSumm++; }
		maxSumm				+= clients->Data.Summ;

		if (LenSurname		> maxLenSurname)	{ maxLenSurname		= LenSurname;		}
		if (LenName			> maxLenName)		{ maxLenName		= LenName;			}
		if (LenPatronymic	> maxLenPatronymic)	{ maxLenPatronymic	= LenPatronymic;	}
		if (LenAddress		> maxLenAddress)	{ maxLenAddress		= LenAddress;		}
		if (LenPhoneNum		> maxLenPhoneNum)	{ maxLenPhoneNum	= LenPhoneNum;		}
		if (LenPayDay		> maxLenPayDay)		{ maxLenPayDay		= LenPayDay;		}
		if (LenSumm			> maxLenSumm)		{ maxLenSumm		= LenSumm;			}
		if (clients == tail) break;
		clients				= clients->next;
	}
	clients = head;
	int maxLength = maxLenSurname + maxLenName + maxLenPatronymic
		+ maxLenAddress + maxLenPhoneNum + maxLenPayDay + maxLenSumm + 22;



	cout << "\t";
	for (int i = 0; i < maxLength; i++) { cout << "-"; }
	cout << endl;

	printf_s("\t| %*s | %*s | %*s | %*s | %*s | %*s | %*s |",
		maxLenSurname,		"�������",
		maxLenName,			"���",
		maxLenPatronymic,	"��������",
		maxLenAddress,		"�������� ������",
		maxLenPhoneNum,		"���������� �����",
		maxLenPayDay,		"���� ������",
		maxLenSumm,			"����� �������");
	cout << "\n\t";

	for (int i = 0; i < maxLength; i++) { cout << "-"; }
	cout << "\n";

	while (true) 
	{
		printf_s(
			"\t| %*s | %*s | %*s | %*s | %*s | %*s | %*d |",
			maxLenSurname,		clients->Data.Surname.c_str(),
			maxLenName,			clients->Data.Name.c_str(),
			maxLenPatronymic,	clients->Data.Patronymic.c_str(),
			maxLenAddress,		clients->Data.Address.c_str(),
			maxLenPhoneNum,		clients->Data.PhoneNum.c_str(),
			maxLenPayDay,		clients->Data.PayDay.c_str(),
			maxLenSumm,			clients->Data.Summ
		);

		cout << "\n\t";

		for (int i = 0; i < maxLength; i++) { cout << "-"; }
		cout << endl;
		if (clients->next == NULL) break;
		clients = clients->next;
	}
	clients = head;
	cout << "\t";
	for (int i = 0; i < maxLength - (maxLenPayDay + 6); i++) { cout << " "; }
	printf_s("| %*d |", maxLenSumm, maxSumm); cout << "\n\t";
	for (int i = 0; i < maxLength - (maxLenPayDay + 6); i++) { cout << " "; }
	for (int i = 0; i < maxLenPayDay + 6; i++) { cout << "-"; }


	cout << "\n\t������� ����� ������� ��� �������� � ����... "; char p = _getch(); system("cls");
	system("cls");
}
//finished

void show(person*& clients) 
{
	cout << "\n\n\t���: " << clients->Data.Surname << " " << clients->Data.Name << " " << clients->Data.Patronymic << " ������: "
		<< clients->Data.Address << "\n\t��������� �����: " << clients->Data.PhoneNum << " ���� ������: " << clients->Data.PayDay << " �����: " << clients->Data.Summ;
}
void searchClients(person*& head, person*& tail, person*& clients) 
{
	if (tail == NULL && head == NULL)
		throw exception("\n\n\t��� ������ �������� ��� ������...");

	cout << "\n\t����� ������� �� ����";
	cout << "\n\n\t������� ������� ��� ��� ��� ��������\t0. �����\n\n\t";
	string inputStr;
	cin >> inputStr;
	system("cls");

	if (inputStr == "0") { return; }

	clients = head;
	bool searchID = false;
	while (true) {
		if (inputStr == clients->Data.Surname) { searchID = true; show(clients); }
		if (inputStr == clients->Data.Name) { searchID = true; show(clients); }
		if (inputStr == clients->Data.Patronymic) { searchID = true; show(clients); }
		if (clients->next == NULL) break;
		clients = clients->next;
	}

	clients = head;

	if (searchID == true) { cout << "\n\n\t������� ����� ������� ���-�� ��������� � ����... "; char p = _getch(); system("cls");  return; }
	if (searchID == false) { cout << "\n\n\t������ �� ������, ������� ����� ������� ���-�� ��������� � ����... "; char p = _getch(); system("cls"); return; }
	system("cls");
}
//finished

void saveClients(person*& head, person*& tail, person*& clients)
{
	if (tail == NULL && head == NULL)
		throw exception("\n\n\t��� ������ �������� ��� ����������...");

	string defaultFileName = (INDIVID_OUTPUT_FILE_LOCATION);
	cout << "\n\n\t1. ��������� � ����� � ��������� " << INDIVID_OUTPUT_FILE_LOCATION
		<< " � �������� �����\n\t2. �������� �������� �����\n\t0. �����\n\n\t";
	char inNumm;
	cin >> inNumm;

	int inNum = isInteger(inNumm);

	system("cls");
	switch (inNum) {

		case(0): 
			return;

		case(1): 
		{
			ofstream outClients(INDIVID_OUTPUT_FILE_LOCATION);
			clients = head;
			while (true) {
				outClients << "���: " << clients->Data.Surname << " " << clients->Data.Name << " "
					<< clients->Data.Patronymic << " ������: " << clients->Data.Address << " ����� ���.: "
					<< clients->Data.PhoneNum << " ���� ������: " << clients->Data.PayDay << " �����: "
					<< clients->Data.Summ << endl;
				if (clients == tail) break;
				clients = clients->next;
			}
			cout << "\n\n\t���������� ����� " << INDIVID_OUTPUT_FILE_LOCATION << "...";
			char p = _getch();
			system("cls");
			break;
		}

		case(2): 
		{
			cout << "\n\n\t������� ������� ��������� ����� (��� ����������, ��������� ������ �����): ";
			string newName;
			cin.get();
			getline(cin, newName);
			newName += ".txt";
			system("cls");
			ofstream outClients(newName);
			clients = head;
			while (true) 
			{
				outClients << "���: " << clients->Data.Surname << " " << clients->Data.Name << " "
					<< clients->Data.Patronymic << " ������: " << clients->Data.Address << " ����� ���.: "
					<< clients->Data.PhoneNum << " ���� ������: " << clients->Data.PayDay << " �����: "
					<< clients->Data.Summ << endl;
				if (clients == tail) break;
				clients = clients->next;
			}
			cout << "\n\n\t��������� � ����� " << newName << "...";
			char p = _getch();
			system("cls");
			break;
		}

		default: {
			throw exception("\n\n\t������� �������� ��������...");
		}

	}
}
//finished

void downloadClients(person*& head, person*& tail, person*& clients) 
{
	cout << "\n\n\t1. ��������� �� ����� � ��������� " << INDIVID_INPUT_FILE_LOCATION
		<< " � �������� �����\n\t2. �������� �������� �����\n\t0. �����\n\n\t";
	char inNumm;
	cin >> inNumm;

	int inNum = isInteger(inNumm);

	system("cls");
	switch (inNum)
	{
		case(0): 
			return;

		case(1): 
		{
			ifstream inClients(INDIVID_INPUT_FILE_LOCATION);

			if (inClients.bad())
				throw exception("\n\t������ �����-������ ��� ������");

			if (inClients.eof())
				throw exception("\n\t��������� ����� �����");

			if (inClients.fail())
				throw exception("\n\t�������� ������ ������");

			int size = 0;
			inClients >> size;

			for (int i = 0; i < size; i++) 
			{
				if (clients == NULL) {
					clients = new person;
					head = clients;
					tail = clients;
				}

				else {
					clients = tail;
					clients->next = new person;
					clients->next->prev = clients;
					clients = clients->next;
					tail = clients;
				}

				inClients.get();
				getline(inClients, clients->Data.Surname);
				getline(inClients, clients->Data.Name);
				getline(inClients, clients->Data.Patronymic);
				getline(inClients, clients->Data.Address);
				getline(inClients, clients->Data.PhoneNum);
				getline(inClients, clients->Data.PayDay);
				inClients >> clients->Data.Summ;
			}

			cout << "\n\n\t���������� �� ����� " << INDIVID_INPUT_FILE_LOCATION << "...";
			char p = _getch();
			system("cls");
			break;
		}

		case(2): 
		{
			cout << "\n\n\t������� ������� ��������� ����� (��� ����������, ��������� ������ �����): ";
			string newName;
			cin.get();
			getline(cin, newName);
			newName += ".txt";
			system("cls");
			ifstream inClients(newName);

			if (inClients.bad()) 
				throw exception("\n\t������ �����-������ ��� ������");


			if (inClients.eof())
				throw exception("\n\t��������� ����� �����");


			if (inClients.fail())
				throw exception("\n\t�������� ������ ������");

			//if (inClients == NULL)
			//	throw exception("\n\t�������� ������ ������");

			int size = 0;
			inClients >> size;

			clients = new person;
			head = clients;

			for (int i = 0; i < size; i++) {
				if (clients == NULL) {
					clients = new person;
					head = clients;
				}
				else {
					clients = clients->next = new person;
					tail = clients;
				}
				inClients.get();
				getline(inClients, clients->Data.Surname);
				getline(inClients, clients->Data.Name);
				getline(inClients, clients->Data.Patronymic);
				getline(inClients, clients->Data.Address);
				getline(inClients, clients->Data.PhoneNum);
				getline(inClients, clients->Data.PayDay);
				inClients >> clients->Data.Summ;
			}

			cout << "\n\n\t���������� �� ����� " << newName << "...";
			char p = _getch();
			system("cls");
			break;
		}

		default: {
			throw exception("\n\n\t������� �������� ��������...");
		}
	}
}
//finished