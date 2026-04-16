// buat program yang menerima sebuah bilangan bulat dari pengguna, lalu tentukan apakah bilangan tersebut prima atau bukan prima.
// contoh:
// input: 5 ; output : prima
// input: 78 ; output: bukan prima

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "input angka: ";
    cin >> n;      
    bool prima = true; // anggap dulu bilangan prima

    if (n <= 1) prima = false; // bilangan <= 1 bukan prima
    else {
        for (int i = 2; i * i <= n; i++) {   // cek pembagi dari 2 sampai akar n
            if (n % i == 0) {                // jika ada pembagi habis
                prima = false;               // berarti bukan prima
                break;                       // hentikan loop
            }
        }
    }

    if (prima) cout << "Prima" << endl;
    else cout << "Bukan Prima" << endl;

    return 0;
}
    

