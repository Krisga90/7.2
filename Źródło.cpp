#include <iostream>

int wprowadzanie(int a[]);
double obliczanie(int a[], int ilosc);
void wyswietlanie(int a[], int ilosc,double srednia);


int main()
{
	int wyniki[10];
	int ilosc = wprowadzanie(wyniki);
	wyswietlanie(wyniki, ilosc, obliczanie(wyniki, ilosc));
	std::cin.get();
	std::cin.get();

	return 0;
}




int wprowadzanie(int a[])
{
	std::cout << "Wprwadzanie danych. Aby zakonczyc wpisz -100\n";
	int ilosc = 0,pomoc=1;
	while (a[pomoc-1] != -100 && ilosc < 10)
	{
		while (!(std::cin >> a[ilosc]))
		{
			std::cout << "Wprowadzono zly znak. podaj wynik nr: " << ilosc + 1 << " jeszcze raz lub wpisz -100 aby zakonczyc: \n";
			std::cin.clear();
			while (std::cin.get() != '\n')
				continue;
			

		}	
		ilosc++;
		pomoc = ilosc;
		if(a[pomoc-1]!=-100)
			std::cout << "\nPodaj wynik nr: " << ilosc + 1 << ": ";
	}
	ilosc--;
	return ilosc;
}

double obliczanie(int a[], int ilosc)
{
	double srednia = 0;
		for (int i = 0; i < ilosc; i++)
			srednia += a[i];
		srednia = srednia / ilosc;
	return srednia;
}
void wyswietlanie(int a[], int ilosc, double srednia)
{
	if (ilosc > 0)
	{
		std::cout << "twoje wyniki to:\n";
		for (int i = 0; i < ilosc; i++)
			std::cout << a[i] << "\t";
		std::cout << "A sredni wynik to: " << srednia;
	}
}