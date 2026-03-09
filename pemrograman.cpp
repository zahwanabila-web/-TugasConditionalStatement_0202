#include <iostream>
using namespace std;

// prosedur untuk memasukkan data
void input(float &berat, float &tinggi){
    cout << "Masukkan berat badan : ";
    cin >> berat;
    cout << "Masukkan tinggi badan : ";
    cin >> tinggi;
}

// Fungsi untuk menghitung BMI
float hitungBMI(float berat, float tinggi){
    return berat / (tinggi * tinggi);
}