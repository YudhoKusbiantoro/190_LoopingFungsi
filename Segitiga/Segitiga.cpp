// Segitiga.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int sisi;

void inputdata() {
    cout << "masukan nilai sisi :";
    cin >> sisi;
}
int hitungluas() {
    return sisi * sisi;
}
void display() {
    cout << "luas persegi : " << hitungluas() << endl;

}

int main()
{
    inputdata();
    display();
}

