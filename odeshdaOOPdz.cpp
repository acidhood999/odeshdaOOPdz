// odeshdaOOPdz.cpp 

#include "classOvercoat.h"
#include <cstdlib>
#include <ctime>

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "RU");
	string pal1{ "Белое Пальто" };
	string pal2{ "Черное Пальто" };
	string kurt{ "Зимняя куртка" };
	int pr = rand() % 1000 + 500;
	

	Overcoat a(pal1,pal2,kurt,pr);
	Overcoat a2(pal1, pal2, kurt, pr);

	if (a == a2)
		cout << "Они одинаковые, разница в цвете"<<endl;

	if (a >= a2)
	{
		cout << "Разная цена" << endl;
	}


	a = a2;
	a.print();


}

