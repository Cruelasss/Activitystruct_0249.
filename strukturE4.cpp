#include <iostream>
using namespace std;

struct DetailAlamat{
    int desa;
    int kota;

};

struct mahasiswa {
    string nim;
    string nama;
     DetailAlamat alamat;
    string umur;
};

 int main() {
    mahasiswa mhs [3];
    for (int i=0; i<3;i++){
    cout << " data ke-" << (i+1) << ":" <<endl;
    cout << "nomor mahasiswa :";
    getline (cin, mhs[i].nim);
    cout << "nama mahasiswa : ";
   getline (cin, mhs[i].nama);

    cout << "alamat mahasiswa :" <<endl;
    cout << "\t nama desa :";
    cin >> mhs[i].alamat.desa;
    cout << "\t nama kota :";
    cin >> mhs[i].alamat.kota; 

    cout << "umur mahasiswa  :";
    cin >> mhs[i].umur;

    cin.ignore (1, '\n');
    cout <<endl;
    }

    for (int i=0; i<3; i++){
    cout << endl;
    cout << "data mahasiswa ke-" << (i+1) << ":"<<endl;
    cout <<"\n NIM :" <<mhs[i].nim;
    cout << " \n nama :" << mhs[i].nama;
    cout << " \n alamat :" ;
    cout << "\n \t desa : " << mhs[i].alamat.desa;
    cout << "\n \t kota : " << mhs[i].alamat.kota; 
    cout << " \n umur :" << mhs[i].umur;
    cout <<endl;
    }
};