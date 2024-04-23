#include <iostream>
using namespace std;

class mahasiswa 
{
    public:     //akses modifier
        string nama;
        int umur;
        string jurusan;

        void output()
        {
            cout << "Nama: " << nama << endl;
            cout << "Umur: " << umur << endl;
            cout << "Jrusan: " << jurusan << endl;
        }
};

class Matakuliah
{
    private:
        string kodeMK;
        string namaMK;
        int sks;
    public:
        void input()
        {
            cout << "KodeMk: ";
            cin >> kodeMK;
            cout << "NamaMK: ";
            cin >> namaMK;
            cout << "SKS: ";
            cin >> sks;
        }
        void output()
        {
            cout << "Kode MK: " << kodeMK << endl;
            cout << "Nama MK: " << namaMK << endl;
            cout << "SKS: " << sks << endl;
        }
};
int main()
{
    
}
