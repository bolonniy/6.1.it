#include <iostream>
#include <time.h>
#include <Windows.h>
using namespace std;
int Sum(int mas[], const int k);
int Num(int mas[], const int k);
void Cout(int mas[], const int k, const int min, const int max);
void Cout1(int mas[], const int k);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int min = -40;
	const int max = 20;

	const int n = 26;
	int a[n] = {};

	Cout(a, n, min, max);
	cout << "Сума = " << Sum(a, n) << endl;
	cout << "Кількість = " << Num(a, n) << endl;
	cout << endl;
	Cout1(a, n);

	return 0;
}
int Sum(int mas[], const int k)
{
	int s = 0;
	for (int i = 0; i < k; i++)
	{
		if (!(mas[i] > 0 || i % 2 != 0)) {
			s += mas[i];
		}
	}

	return s;
}


int Num(int mas[], const int k)
{
	int n = 0;
	for (int i = 0; i < k; i++)
	{
		if (!(mas[i] > 0 || i % 2 != 0)) n++;
	}

	return n;
}



void Cout(int mas[], const int k, const int min, const int max)
{
	srand(time(NULL));
	cout << "array = " << "{ ";
	for (int i = 0; i < k; i++)
	{
		mas[i] = min + rand() % (max - min + 1);
		cout << mas[i] << "; ";
	}
	cout << "}" << endl;
	cout << endl;
}

void Cout1(int mas[], const int k)
{
	cout << "array = " << "{ ";
	for (int i = 0; i < k; i++)
	{
		if (!(mas[i] > 0 || i % 2 != 0)) {
			mas[i] = 0;
		}
		cout << mas[i] << "; ";
	}
	cout << "}" << endl;
	cout << endl;
}
