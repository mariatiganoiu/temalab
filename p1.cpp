#include <iostream>
#include <string.h>
using namespace std;
class persoana
{
public:
	char *nume;
	int varsta;
	persoana()
	{
	    this->nume = NULL;
	    varsta = 0;
	}
	void declarare(const char* n, int v)
	{
	    nume = new char[strlen(n)+1];
	    strcpy(nume, n);
	    varsta = v;
	}
	void afisare()
	{
	    cout << nume << " are " << varsta << " ani " << endl;
	}
};
int main()
{
	int n, i, v;
	char nume[20];
	persoana *p;
	cin >> n;
	p = new persoana[n];
	for(i = 0; i < n; i++)
	{
	    cin >> nume >> v;
	    p[i].declarare(nume, v);
	}
	for(i = 0; i < n; i++)
	{
	    p[i].afisare();
	}
	return 0;
}
