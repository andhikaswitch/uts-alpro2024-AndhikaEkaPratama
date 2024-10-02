#include <iostream>
using namespace std;

int main() {

    cout << "Nama: Andhika Eka Pratama\n";
    cout << "NPM : 2410631170129\n";
    cout << "Kelas : 1B\n";
    cout << endl;

    //Nomor 1
    int batas;
    int jumlahGanjil = 0, jumlahGenap = 0, jumlahPrima = 0;
    cout << "Soal Nomor 4\n";
    cout << "Masukkan Bilangan: ";
    cin >> batas;
    cout << "\nBilangan Ganjil: \n";
    for (int i = 1; i <= batas; ++i) {
        if (i % 2 ) {
            cout << i << " \n";
            jumlahGanjil += i;


        }
    }

    cout << "\nBilangan Genap: \n";
    for (int i = 1; i <= batas; ++i) {
        if (i % 2 == 0) {  // Mengecek bilangan genap
            cout << i << " \n";
            jumlahGenap += i;

        }
    }



    return 0;
}
