// Prosedur luas Persegi Panjang.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int panjang, lebar;

void inputdata() {
	cout << " Masukan Nilai Panjang : ";
	cin >> panjang;
	cout << "Masukan Nilain Lebar : ";
	cin >> lebar;
}
int hitungluas() {
	return panjang * lebar;

}
void bebas() {
	cout << "Luasnya adalah :" << hitungluas() << endl;
}
int main()
{
	inputdata();
	hitungluas();
	bebas();
}

