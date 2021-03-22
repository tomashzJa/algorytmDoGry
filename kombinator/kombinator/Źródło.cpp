#include"kombi.h"
#include<iostream>

int main()
{
	int ol = 10;
	int ans = 0;
	while (ol) {
		
		Kombinator *pierwsza=new Kombinator;
		while (ans!=5)
		{
			pierwsza->manual();
			pierwsza->setanswer();
			std::cout << pierwsza->output(0) << "\t" << pierwsza->output(1) << "\t" << pierwsza->output(2) << "\t" << pierwsza->output(3) << std::endl << std::endl;
			std::cout << "wpisz ile zgodnych: ";
			std::cin >> ans;
			pierwsza->imput(ans);
			std::cout << "pozostalych mozliwosci: ";
			pierwsza->pomocnik();


			

		}
		--ol;
		delete pierwsza;
	}
	std::cin.get();
}