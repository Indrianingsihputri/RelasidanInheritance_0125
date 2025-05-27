#ifndef ANAK.H
#define ANAK.H


you, 7 
class anak{
    public:
        string nama;
        anak(string pNama): nama(pNama){
            cout << "Anak \"" << nama << "\" ada\n";
        }

        anak(){
            cout << "Anak \"" << nama << "\" tidak ada\n";

        }
};

#endf
