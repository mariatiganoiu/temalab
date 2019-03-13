#include <iostream>
using namespace std;

template <class T>
class Array
{
	int d;
	T *a;
public:
	Array(int s)
	{
		d = s;
		a = new T[s];
	}
	~Array()
	{
		if (a)
		{
			delete[] a;
			a = NULL;
		}
	}
	T operator[](int i)
	{
		return a[i];
	}
	void setArray(int pos, T val)
	{
		a[pos] = val;
	}
	T* sum()
	{
		T s;
		s = a[0];
		for (int i = 1; i < d; i++)
		{
			s += a[i];
		}
		return &s;
	}
};

	template<>
	char* Array<char>::sum()
	{
		char *r;
		r = new char[d + 1];
		for (int i = 0; i < d; i++)
		{
			r[i] = a[i];
		}
		r[d] = '\0';
		return r;
	}

int main()
{
	int n, m, nr;
	char c;
	//pentru numere intregi
	cin >> m;
	Array<int> x(m);
	for (int i = 0; i < m; i++)
	{
		cin >> nr;
		x.setArray(i, nr);
	}
	cout << *(x.sum()) << endl;

	//pentru caractere
	cin >> n;
	Array<char> y(n);
	for (int i = 0; i < n; i++)
	{
		cin >> c;
		y.setArray(i, c);
	}
	cout << y.sum() << endl;
	system("pause");
	return 0;
}
