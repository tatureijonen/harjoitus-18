/*
Harjoitus 18 (Palautus vko 46)
Tee ohjelma, joka kysyy viiden koiran nimet ja i�t.
Tiedot tallennetaan tietuetaulukkoon.
a) j�rjest� tiedot ik� -kent�n mukaan suuruusj�rjestykseen
(pienimm�st� suurimpaan). Ohjelma tulostaa lopuksi
jarjestetyn taulukon n�yt�lle.
b) j�rjest� tiedot nimi -kent�n mukaan aakkosj�rjestyksess�
Ohjelma tulostaa lopuksi jarjestetyn taulukon n�ytolle.

Lajittelu tulee toteuttaa siten, ett� se toimisi samoin
my�s 50 tai 5000 koiran tapauksssa.

*/

#include <iostream>
using namespace std;
#include <cstring>
struct KOIRATIEDOT
{
	int ika;
	char nimi[20];
};
int main()
{
	const int MAX_KOIRA = 5;
	KOIRATIEDOT koira[MAX_KOIRA];
	int ind;
	for (ind = 0; ind < MAX_KOIRA; ind++)
	{
		cout << "Anna " << ind+1 <<  ". koiran nimi ja ika: ";
		cin >> koira[ind].nimi >> koira[ind].ika;
	}
	
	cout << "Sortataan...\n";
	for (int i = 0; i < MAX_KOIRA - 1; i++)
		for (int j = i + 1; j < MAX_KOIRA; j++)
			if (strcmp(koira[i].nimi, koira[j].nimi)>0)
			{
		KOIRATIEDOT tmp = koira[j];
		koira[j] = koira[i];
		koira[i] = tmp;
			}


	/*
	cout << "Sortataan...\n";
	for (int i = 0; i < MAX_KOIRA - 1; i++)
		for (int j = i + 1; j < MAX_KOIRA; j++)
			if (koira[i].ika > koira[j].ika)
			{
		KOIRATIEDOT tmp = koira[j];
		koira[j] = koira[i];
		koira[i] = tmp;
			}
			*/


	cout << "Koirien tiedot\n";
	for (ind = 0; ind < MAX_KOIRA; ind++)
	{
		cout << "Koiran " << ind + 1 << ".  nimi ja ika: ";
		cout << koira[ind].nimi << " " << koira[ind].ika << endl;
	}
}


//VAIHTOLAJITTELU
/*
#include <iostream>
using namespace std;

int main()
{
	const int MAX_TAULU = 4;
	int taulu[MAX_TAULU] = { 2, 7, 1, 3 };
	int ind;
	cout << "Taulukko ennen jarjestamista\n";
	for (ind = 0; ind < MAX_TAULU; ind++)
	{
		cout << taulu[ind] << " ";
	}
	cout << endl;
	cout << "Sortataan...\n";
	for (int i = 0; i < MAX_TAULU - 1; i++)
		for (int j = i + 1; j < MAX_TAULU; j++)
			if (taulu[i] > taulu[j])
			{ //cout << i << j << endl;
		int tmp = taulu[j];
		taulu[j] = taulu[i];
		taulu[i] = tmp;
			}

	cout << "Taulukko jarjestamisen jalkeen\n";
	for (ind = 0; ind < MAX_TAULU; ind++)
	{
		cout << taulu[ind] << " ";
	}
	cout << endl;
}
*/