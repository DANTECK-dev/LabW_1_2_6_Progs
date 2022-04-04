
#include "Libraries.h"

#include "PrintPublication.h"

void PrintPublication::getPrintPublication()
{
	if (s_publisher != "None")		cout << "\n\tИздательство: "	<< this->s_publisher;
	if (i_publisher != 0)			cout << "\n\tИздательство: "	<< this->i_publisher;

	if (s_year != "None")			cout << "\n\tГод: "				<< this->s_year;
	if (i_year != 0)				cout << "\n\tГод: "				<< this->i_year;

	if (s_title != "None")			cout << "\n\tНазвание: "		<< this->s_title;
	if (i_title != 0)				cout << "\n\tНазвание: "		<< this->i_title;
}

void PrintPublication::setPublisher_s(string s_publisher)
{
	this->s_publisher = s_publisher;
}

void PrintPublication::setPublisher_i(int i_publisher)
{
	this->i_publisher = i_publisher;
}

void PrintPublication::setYear_s(string s_year)
{
	this->s_year = s_year;
}

void PrintPublication::setYear_i(int i_year)
{
	this->i_year = i_year;
}

void PrintPublication::setTitle_s(string s_title)
{
	this->s_title = s_title;
}

void PrintPublication::setTitle_i(int i_title)
{
	this->i_title = i_title;
}