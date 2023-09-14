// Mencari Sisi Miring
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
	float a, t, sisi_miring;
	cout << "Program Menghitung Sisi Miring Segitiga Siku-Siku" << endl;
	cout << "--------------------------------------------------" << endl;

	cout << "Masukkan Alas   : "; cin >> a;
	cout << "Masukkan Tinggi : "; cin >> t;

	sisi_miring = sqrt((a * a) + (t * t));

	cout << "--------------------------------------------------" << endl;
	cout << "Sisi Miring = " << sisi_miring << endl;

	system("pause");

	return 0;
}