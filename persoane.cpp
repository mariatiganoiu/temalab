#include <iostream>
#include <string.h>
using namespace std;
class persoana
{
public:
	char *nume;
	int *note, n;
	persoana ()
	{
	    this->nume=NULL;
	    this->note=NULL;
	    n=0;
	}
	void anume(const char* n)
	{
		if(nume==NULL)
		{
        nume = new char[strlen(n) + 1];
		strcpy(nume, n);
		}
	}
	void anote(int *v, int n)
	{
		int i;
		if((n==0)||(note==NULL))
		{
        this->n = n;
		note = new int[n];
		for (i = 0; i < n; i++)
			note[i] = v[i];
		}
	}
	void medie()
	{
		int i;
		float medie=0;
		for (i = 0; i < this->n; i++)
			medie += this->note[i];
		cout << this->nume << " are media " << medie / n << endl;
	}
};
int main()
{
	persoana x;
	int *v, n, i;
	char nume[20];
	cin >> nume;
    x.anume(nume);

    cin >> n;
    v = new int[n];
    for (i = 0; i < n; i++)
        cin >> v[i];
    x.anote(v, n);
    x.medie();
	return 0;
}
