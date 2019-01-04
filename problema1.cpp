//Se citesc de la tastatura n numere naturale(n <= 100000) din intervalul[0, 100].
//Sa se afiseze primele 3 valori in ordinea numarului de aparitii.

#include <iostream>
using namespace std;

int main()
{
	int n, *v, a[101] = { 0 }, i, m=0, val, j;
	//a este un vector de aparitie in care la final a[nr] reprezinta de cate ori apare acel nr
	//a se initializeaza cu 0 pentru ca de fiecare data cand apare o valoare sa se adauge 1
	//dimensiunea este 101 deoarece valorile se afla in intervalul [0,100]
	//in m se va salva numarul maxim de aparitii
	//in val se va salva valoarea pentru care numarul de aparitii e maxim
	//se citeste n
	cin >> n;
	//se aloca dinamic vectorul in care vor fi salvate cele n valori
	v = new int[n];
	//se citesc cele n valori
	for (i = 0; i < n; i++)
	{
		cin >> v[i];
		//in vectorul de aparitie se adauga 1 pentru valoarea citita
		a[v[i]]++;
	}
	//se realizeaza parcurgerea vectorului de 3 ori pentru a fi gasite 
	//cele mai mari 3 numere din vectorul a
	for (j = 1; j <= 3; j++)
	{
		//se cauta valoarea care apare de cele mai multe ori
		for (i = 0; i <= 100; i++)
		{
			if (a[i] > m)
			{
				//daca se gaseste un numar de aparitii mai mare decat cele parcurse deja
				//m devine noul numar maxim gasit
				m = a[i];
				//se retine ce valoare are maximul de aparitii
				val = i;
			}
		}
		//se afiseaza valoarea cu maximul de aparitii
		cout << val << endl;
		//se modifica numarul de aparitii a valorii gasite
		//pentru ca la parcurgerea urmatoare sa fie cautat urmatorul numar maxim de aparitii
		a[val] = 0;
		//se reinitializeaza m cu 0 pentru ca la parcurgerea urmatoare 
		//numerele din vector sa nu fie comparate cu maximul gasit anterior
		//altfel nu ar mai fi gasit urmatorul maxim
		m = 0;
	}
	system("pause");
	return 0;
}
