/* Buatlah sebuah program deret bilangan dengan ketentuan sebagai berikut :
1 6 9 14 17 22 25 30 33 
contoh input            contoh output 
5                        1 6 9 14 17
9                        1 6 9 14 17 22 25 30 33  
*/

#include <iostream>
using namespace std;

int main() {
    int n;       // variabel untuk menyimpan jumlah suku yang ingin ditampilkan
    int nilai;   // variabel untuk menyimpan nilai suku saat ini

    cout << "Masukkan jumlah suku: ";
    cin >> n;
    nilai = 1;   // suku pertama selalu dimulai dari 1

    for (int i = 1; i <= n; i++) {    // jika i ganjil (1,3,5,....) => tambah 5
        cout << nilai;                // jika i genap (2,4,6,....) => tambah 5
        if (i < n) cout << " ";

        
        if (i % 2 == 1) {
            nilai += 5;   // i % 2 == 1 artinya i adalah bilangan ganjil
        } else {
            nilai += 3;   // selain itu berarti i adalah bilangan genap
        }
    }

    cout << endl;
    return 0;
}
