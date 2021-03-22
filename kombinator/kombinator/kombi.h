#pragma once
#define LEV 6
#define HISTORY 	for (int i = 0; i<LEV; i++)\
					for (int j = 0; j<LEV; j++)\
					for (int k = 0; k<LEV; k++)\
					for (int l = 0; l<LEV; l++)
#define WSZYSTKIE [LEV*LEV*LEV*LEV]
#define WSZYTYP wszystkie[itek]
#define ITEK itek=0;
#define IMPUT(x,y) if (x==WSZYTYP[y]) licznik++;
#include<ctime>
#include<cstdlib>

class Kombinator
{
	bool filtr WSZYSTKIE;
	short wszystkie WSZYSTKIE[4];
	int ITEK
	int odp[10], licznik, a, b, c, d;
	int krok = 0;

	int ans,pans;
public:
	Kombinator();
	void setanswer();
	int output(int);
	void imput(int);
	void pomocnik();
	void manual();

};