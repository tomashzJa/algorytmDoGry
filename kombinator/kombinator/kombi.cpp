#include"kombi.h"


Kombinator::Kombinator()
{
	srand(time(0));
	ITEK
	HISTORY
	{
		
		WSZYTYP[0] = i;
		WSZYTYP[1] = j;
		WSZYTYP[2] = k;
		WSZYTYP[3] = l;
		filtr[itek] = 1;
		itek++;
	}
	ans = rand()%1296;

}
void Kombinator::setanswer()
{
	ITEK
	HISTORY
	{ 
		if (filtr[itek])
		{
			if (!ans--)
			{

				a = WSZYTYP[0];
				b = WSZYTYP[1];
				c = WSZYTYP[2];
				d = WSZYTYP[3];
				i += 6; k += 6; j += 6; l += 6;

			}
		}
	itek++;
	}
}

int Kombinator::output(int z)
{
	switch(z)
	{
	case 0: return a; break;
	case 1: return b; break;
	case 2: return c; break;
	case 3: return d; break;
	}

}
void Kombinator::imput(int getf)
{
	ITEK
		pans = 0;
		
	HISTORY
	{
		licznik = 0;
	if (filtr[itek])
	{
			IMPUT(a, 0)
			IMPUT(b, 1)
			IMPUT(c, 2)
			IMPUT(d, 3)
			filtr[itek] = (getf == licznik);
			if (filtr[itek])pans++;

	}
	itek++;

	}
	if (pans)ans = rand() % pans;
}
#include <iostream>
void Kombinator::pomocnik()
{
	
	ITEK
		HISTORY
	{
		if (filtr[itek])
		{ 
			//std::cout << i << "\t" << j << "\t" << k << "\t" << l << std::endl;
			
		}
	itek++;
	}
	std::cout << pans<< std::endl<<std::endl;
}
void Kombinator::manual()
{
	krok++;
	//std::cin >> a >> b >> c >> d;
	std::cout << "\t\t\t\t\t" << krok <<"\n\n";
}