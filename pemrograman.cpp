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

// Fungsi untuk menentukan status BMI
string statusBMI(float bmi){
    if (bmi < 18.5) {
        return "Berat Badan Kurang";
    }   
    else if (bmi < 25) {
        return "Berat Badan Normal";
    } 
}
