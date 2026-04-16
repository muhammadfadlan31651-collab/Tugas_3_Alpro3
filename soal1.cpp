/* Buatlah sebuah program deret bilangan dengan ketentuan sebagai berikut :
1 6 9 14 17 22 25 30 33 
contoh input            contoh output 
5                        1 6 9 14 17
9                        1 6 9 14 17 22 25 30 33  
*/

#include <iostream>
using namespace std;
int main() {
    int n;      
    int nilai;   
    cout << "Masukkan jumlah suku: ";
    cin >> n;
    nilai = 1;   // suku pertama selalu dimulai dari 1

    for (int i = 1; i <= n; i++) {
        /*
        Cetak nilai suku ke-i.
        Jika belum suku terakhir, cetak spasi setelahnya.
        */
        cout << nilai;
        if (i < n) cout << " ";

        /*
        LOGIKA POLA:
        - Jika i ganjil (1, 3, 5, ...) => tambah 5
        - Jika i genap (2, 4, 6, ...) => tambah 3
        Contoh:
            i=1 (ganjil) => 1 + 5 = 6
            i=2 (genap)  => 6 + 3 = 9
            i=3 (ganjil) => 9 + 5 = 14
            i=4 (genap)  => 14+ 3 = 17
            dst...
        */
        if (i % 2 == 1) {
            nilai += 5;   // i % 2 == 1 artinya i adalah bilangan ganjil
        } else {
            nilai += 3;   // selain itu berarti i adalah bilangan genap
        }
    }

    cout << endl;
    return 0;
}
