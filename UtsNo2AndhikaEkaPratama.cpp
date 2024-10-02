#include <iostream>
using namespace std;

int main() {

    cout << "Soal Nomor 2\n";
    cout << endl;
    int tinggiSegitiga;

    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggiSegitiga;

    // Menggambar segitiga sama sisi
    for (int i = 0; i <= tinggiSegitiga; ++i) {
        for (int j = 0; j < i; j++) {
            cout << " *";
        }

        cout << endl;
    }

    return 0;
}

