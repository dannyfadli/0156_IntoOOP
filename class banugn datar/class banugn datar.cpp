#include <iostream>
using namespace std;

class bangunDatar
{
    // akses modifer
    private:
        float panjang, lebar;
    public:
        float Luas;

        void input()    //metode input persegi panjang
        {
            cout << "Masukan Panjangnya = ";
            cin >> panjang;
            cout << "Masukan Lebarnya = ";
            cin >> lebar;
        }
        float hitungluas()
        {
            return panjang * lebar;
        }
};

int main()
{
    
}

