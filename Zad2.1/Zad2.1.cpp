// Zad2.1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include "windows.h"
#include <cstdio>
#include <ctime>

using namespace std;


int main()
{
	float rozmiar;
	cout << "Podaj rozmiar tablicy:" << endl;
	cin >> rozmiar;
	if (!cin)
	{ 

		cin.clear(); 
		cin.sync(); 
		cout << "Nie podano liczby"<<endl;
	}
	else
	{ 
		rozmiar = rozmiar - 1;
		float * tab1 = new float[rozmiar];
		srand(time(NULL));

		float tab2[6] = { 2, 3, 3.5, 4, 4.5, 5 };

		cout << "wylosowane liczby" << endl;
		for (int i = 0; i <= rozmiar; i++)
		{
			int v = rand() % 6;
			tab1[i] = tab2[v];
			cout << tab1[i] << " ";

		}
		float srednia = 0;
		int k = 0;
		for (int i = 0; i <= rozmiar; i++)
		{
			float j = tab1[i];
			srednia = srednia + j;
			k++;
		}
		srednia = srednia / k;
		cout << endl;
		cout << "srednia: " << srednia << endl;

		float max;
		max = tab1[0];
		for (int i = 0; i <= rozmiar; i++)
		{
			if (tab1[i] > max)
			{
				max = tab1[i];
			}

		}
		cout << "max:" << max << endl;
		float min;
		min = tab1[0];
		for (int i = 0; i <= rozmiar; i++)
		{
			if (tab1[i] < min)
			{
				min = tab1[i];
			}

		}
		cout << "min:" << min << endl;
		cout << "wartosci wieksze od sredniej: ";
		for (int i = 0; i <= rozmiar; i++)
		{
			if (tab1[i] > srednia)
			{
				cout << tab1[i] << ", ";
			}

		}
		cout << endl;
		cout << "wartosci mniejsze od sredniej: ";
		for (int i = 0; i <= rozmiar; i++)
		{
			if (tab1[i] < srednia)
			{
				cout << tab1[i] << ", ";
			}

		}
		cout << endl;
		cout << "odchylenie standardowe: ";
		float suma = 0;
		int o = 0;
		for (int i = 0; i <= rozmiar; i++)
		{
			suma = suma + ((tab1[i] - srednia)*(tab1[i] - srednia));
			o++;
		}
		float odchylenie;
		odchylenie = sqrt(suma / o);
		cout << odchylenie << endl;
	}
	
	system("pause");
	

    return 0;
}

