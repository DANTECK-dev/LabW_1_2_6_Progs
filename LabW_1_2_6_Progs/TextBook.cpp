//#pragma once

#include "Libraries.h"

#include "TextBook.h"

void TextBook::getTextBook()
{
	if (s_purpose != "None")	cout << "\n\t����������: " << this->s_purpose;
	if (i_purpose != 0)			cout << "\n\t����������: " << this->i_purpose;
}

void TextBook::setPurpose_s(string s_purpose)
{
	this->s_purpose = s_purpose;
}

void TextBook::setPurpose_i(int i_purpose)
{
	this->i_purpose = i_purpose;
}
