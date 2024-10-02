#include <iostream>

using namespace std;


int penjumlahan(int operand1, int operand2) {
    return operand1 + operand2;
}

int pengurangan(int operand1, int operand2) {
    return operand1 - operand2;
}
int perkalian(int operand1, int operand2) {
    return operand1 * operand2;
}

int pembagian(int operand1, int operand2) {
    if (operand2 == 0) {
        cout << "Error: Pembagian dengan nol tidak diperbolehkan!" << endl;
        return 0;
    }
    return operand1 / operand2;
}

int main() {
    int pilihan;
    double a, b, hasil;

    cout << "Pilih operasi matematika:" << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;
    cout << "Masukkan pilihan Anda: ";
    cin >> pilihan;

    cout << "Masukkan dua angka: ";
    cin >> a >> b;
    switch (pilihan) {
        case 1:
            hasil = penjumlahan(a, b);
            cout << "Hasil dari Penjumlahan untuk " << a << " dan " << b << " adalah " << hasil << endl;
            break;
        case 2:
            hasil = pengurangan(a, b);
            cout << "Hasil dari Pengurangan untuk " << a << " dan " << b << " adalah " << hasil << endl;
            break;
        case 3:
            hasil = perkalian(a, b);
            cout << "Hasil dari Perkalian untuk " << a << " dan " << b << " adalah " << hasil << endl;
            break;
        case 4:
            hasil = pembagian(a, b);
            if (b != 0) {
                cout << "Hasil dari Pembagian untuk " << a << " dan " << b << " adalah " << hasil << endl;
            }
            break;
        default:
            cout << "Pilihan tidak valid!" << endl;
            break;
    }

    return 0;
}
