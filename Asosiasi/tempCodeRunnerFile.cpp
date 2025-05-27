#include <iostream>
#include <vector>
using namespace std;

class dokter;

class pasien { //Asosiasi
    public:
        string nama;
        vector<dokter*> daftar_dokter;

        pasien(string pNama) : nama(pNama) {
            cout << "Pasien \"" << nama << "\" ada\n";
        }

        ~pasien() {
            cout << "Pasien \"" << nama 
            << "\" tidak ada\n";
        }

        void tambahDokter(dokter*);
        void cetakDokter();
};

class dokter { //Asosiasi
    public:
        string nama;
        vector<pasien*> daftar_pasien;

        dokter(string pNama) : nama(pNama) {
            cout << "Dokter \"" << nama << "\" ada\n";
        }

        ~dokter() {
            cout << "Dokter \"" << nama 
            << "\" tidak ada\n";
        }

        void tambahPasien(pasien*);
        void cetakPasien();
};

void pasien

void pasien::cetakDokter() {
    cout << "daftar dokter yang menangani pasien \"" 
    << this->nama << "\":\n";
    for (auto& a : daftar_dokter) {
        cout << a->nama << "\n";
    }

    cout << endl;
    
}

void dokter::tambahPasien(pasien* pPasien) {
    daftar_pasien.push_back(pPasien);
    
}

void dokter::cetakPasien() {
    cout << "daftar pasien yang ditangani dokter \"" 
    << this->nama << "\":\n";
    for (auto& a : daftar_pasien) {
        cout << a->nama << "\n";
    }

    cout << endl;
}

int main() {
    dokter* varDokter1 = new dokter("dr. Budi");
    pasien* varDokter2 = new dokter("dr. toni");
    dokter* varPasien1 = new pasien("Andi");
    dokter* varPasien2 = new pasien("Lia");

    varDokter1->tambahPasien(varPasien1);
    varDokter1->tambahPasien(varPasien2);
    varDokter2->tambahPasien(varPasien1);

    varPasien1->tambahDokter(varDokter1);
    varPasien2->tambahDokter(varDokter1);
    varPasien1->tambahDokter(varDokter2);

    varPasien1->cetakDokter();
    varPasien2->cetakDokter();
    varDokter1->cetakPasien();
    varDokter2->cetakPasien();

    delete varPasien1;
    delete varPasien2;
    delete varDokter1;
    delete varDokter2;

    return 0;

}