#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << "===========================" << endl;
    cout << "PROGRAM MENCARI NILAI AKHIR" << endl;
    cout << "===========================" << endl;

    float absen,nilaiTugas, nilaiUTS, nilaiUAS, nilaiAkhir;
    char nilaiHuruf;
    string nama,npm;

    cout<<"Nama : "; cin>>nama;
    cout<<"NPM : "; cin>>npm;
    cout<<"Absen : "; cin>>absen;
    cout << "Nilai Tugas: "; cin >> nilaiTugas;
    cout << "Nilai UTS  : "; cin >> nilaiUTS;
    cout << "Nilai UAS  : "; cin >> nilaiUAS;

    nilaiAkhir = (0.10*absen) + (0.20*nilaiTugas) + (0.30*nilaiUTS) + (0.40*nilaiUAS);

    if(nilaiAkhir>=85){
        nilaiHuruf='A';
    }else if(nilaiAkhir>=80){
        nilaiHuruf='B';
    }
    else if(nilaiAkhir>=75){
        nilaiHuruf='C';
    }else if(nilaiAkhir>=70){
        nilaiHuruf='D';
    }else{
        nilaiHuruf='E';
    }

    cout << "===========================" << endl;
    cout<<"Nama : "<<nama<<endl;
    cout<<"Npm : "<<npm<<endl;
    cout<<"Absen : "<<absen<<endl;
    cout<<"Nilai Tugas : "<<nilaiTugas<<endl;
    cout<<"Nilai UTS : "<<nilaiUTS<<endl;
    cout<<"Nilai UAS : "<<nilaiUAS<<endl;
    cout << "Nilai Akhir Siswa : " << nilaiAkhir<<endl;
    cout<<"Nilai Huruf Siswa : "<<nilaiHuruf;

    cout << endl << endl;

    return 0;
}
