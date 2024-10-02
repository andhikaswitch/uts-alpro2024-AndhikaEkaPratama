#include <iostream>
using namespace std;


int hitungBMI(float tinggiBadan, float beratBadan) {
    float tinggiDalamMeter = tinggiBadan / 100;
    float bmiFloat = beratBadan / (tinggiDalamMeter * tinggiDalamMeter);


    int bmi = bmiFloat + 0.5;
    return bmi;
}

void kategoriBMI(int bmi) {
    if (bmi < 18.4) {
        cout << "Kategori: Berat badan kurang" << endl;
    } else if (bmi >= 18.5 && bmi < 24.9) {
        cout << "Kategori: Berat badan ideal" << endl;
    } else if (bmi >= 25 && bmi < 29.9) {
        cout << "Kategori: Berat Badan Lebih" << endl;
    } else if(bmi >= 30 && bmi <39.9){
        cout << "Kategori: Gemuk" << endl;
    }else{
        cout << "Kategori: Sangat Gemuk" << endl;
        }
}

int main() {
    float tinggiBadan;
    float beratBadan;
    cout << "Masukkan berat badan (dalam kg): ";
    cin >> beratBadan;
    cout << "Masukkan tinggi badan (dalam cm): ";
    cin >> tinggiBadan;

    float bmi = hitungBMI(tinggiBadan, beratBadan);

    cout << "Nilai BMI: " << bmi << endl;
    kategoriBMI(bmi);

    return 0;
}
