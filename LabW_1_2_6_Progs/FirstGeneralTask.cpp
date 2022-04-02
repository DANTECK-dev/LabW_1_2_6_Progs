#include "FirstGeneralTask.h"
#include "ThisIs.h"
#include <iostream>
#include <conio.h>

using namespace std;

enum class Rect_Menu
{
	Exit,
	Area,
	Perimeter,
	Set,
	Get
};

class Deposit
{

private:

	double summ;
	static double rate;

public:

	Deposit(double summ)
	{
		this->summ = summ;
		this->rate = 0.1;
	}

	static void setRate(double rate)
	{
		Deposit::rate = rate;
	}

	void getDeposit()
	{
		this->summ *= this->rate;
		cout << "\n\tСейчас на счёту: "<<this->summ;
		char p = _getch();
		system("cls");
	}
};

void firstGeneralTask()
{
	
}