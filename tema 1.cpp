#include <iostream>
using namespace std;
int main()
{	int n, i, j, k, s=0, aux;
	int *m;
	int **v;
	int *f;
	
	cin>>n;
	m = new int[n];
	v = new int* [n];
	for(i=0; i<n; i++)
	{
		cin>>m[i];
		s+= m[i];
		v[i] = new int [m[i]];
		for(j=0; j<m[i]; j++)
		cin>>v[i][j];
	}
	f = new int[s];
	k = 0;
	for(i=0; i<n; i++)
	{
		for(j=0; j<m[i]; j++)
		{	f[k] = v[i][j];
			k++;
		}
	}
	for (i=0; i<n; i++)
	delete[] v[i];
	
	delete[] m;
	delete[] v;
	for (i=0; i<s; i++)
	{	for(j=i+1; j<s; j++)
		{	if(f[i]>f[j])
			{	aux = f[i];
				f[i] = f[j];
				f[j] = aux;
			}
		}
	}
	
	for(i=0; i<s; i++)
	cout<<f[i]<<endl;
	
	delete[] f;

system ("pause");
return 0;
}
