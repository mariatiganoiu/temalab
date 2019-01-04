//Se citesc n triplete de forma (L, C, V) de la tastatura, 
//fiecare reprezentand linia, coloana si valoarea aferenta 
//dintr-o matrice bidimensionala rara (sparse matrix). Se cere:
//(a)sa se calculeze dimensiunea minima a matricii bidimensionale 
//care poate incadra toate elementele citite
//(b) sa se aloce dinamic si sa se populeze matricea cu elementele citite
//(c) sa se afiseze matricea

#include <iostream>
using namespace std;

int main()
{
	int n, i, j, *l, *c, *v, lm=0, cm=0, **m;
	//in lm se va salva numarul maxim de linii gasit
	//in cm se va salva numarul maxim de coloane gasit
	//lm, cm reprezinta dimensiunile minime ale matricii finale
	//se citeste numarul de triplete
	cin >> n;
	//se initializeaza vectorii in care vor fi salvate linia, coloana si valoarea pentru cele n triplete
	l = new int[n];
	c = new int[n];
	v = new int[n];
	//se citesc cele n triplete
	for (i = 0; i < n; i++)
	{
		cin >> l[i] >> c[i] >> v[i];
		//se cauta dimensiunile necesare
		if (l[i] > lm)
			lm = l[i];
		if (c[i] > cm)
			cm = c[i];
	}
	//se aloca dinamic matricea
	//se adauga 1 la dimensiunile gasite deoarece numerotarea se face de la 0 la lm,
	//respectiv de la 0 la cm
	m = new int*[lm+1];
	for (i = 0; i <= lm; i++)
	{
		m[i] = new int[cm+1];
		//se initializeaza toate elementele matricei cu 0
		for (j = 0; j <= cm; j++)
			m[i][j] = 0;
	}
	//se populeaza matricea cu valorile date
	//restul elementelor matricei raman 0
	for (i = 0; i < n; i++)
		m[l[i]][c[i]] = v[i];
	//se afiseaza matricea
	for (i = 0; i <= lm; i++)
	{
		for (j = 0; j <= cm; j++)
			cout << m[i][j]<<' ';
		cout << endl;
	}
	delete[] l;
	delete[] c;
	delete[] v;
	delete[] m;
	system("pause");
	return 0;
}
