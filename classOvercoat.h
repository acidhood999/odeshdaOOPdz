#pragma once

#include <iostream>
#include <time.h>

using namespace std;

class Overcoat
{
protected:
	string palto1{};
	string palto2{};
	string kurtka{};
	int price{};

public:
	
	Overcoat(string p1, string p2, string k1, int cena)
	{
		palto1 = p1;
		palto2 = p2;
		kurtka = k1;
		price = cena;
	}

	bool operator == (Overcoat& a)
	{
		return a.palto1 == palto1 && a.palto2 == palto2;

	}
	bool operator >= (Overcoat& a)
	{
		return a.price >= price && a.price >= price;

	}
	void operator = (Overcoat& a)
	{
		palto1 = a.palto2;


	}
	void print()
	{
		cout << "Ïאכüעמ: " << palto1 << endl;
	}

	
};