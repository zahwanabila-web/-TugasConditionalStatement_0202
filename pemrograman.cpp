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
     else if (bmi < 30) {
        return "Berat Badan Lebih";
    } 
    else {
        return "Obesitas";
    }
}

int main(){
    float berat, tinggi, bmi;

    cout << "--- Selamat Datang Mahasiswa Kelas A 2025 ---" << endl;

    // memanggil prosedur input
    input(berat, tinggi);

    // memanggil fungsi hitung BMI
    bmi = hitungBMI(berat, tinggi);

    cout << endl;
    cout << "--- Hasil ---" << endl;
    cout << "BMI Anda : " << bmi << endl;

    // memanggil fungsi status BMI
    cout << "Status   : " << statusBMI(bmi) << endl;

    return 0;
}
