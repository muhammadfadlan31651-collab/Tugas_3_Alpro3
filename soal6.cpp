// buat program yang menerima sebuah bilangan bulat n, lalu hitung jumlah kuadeat semua bilangan genap dari 2 sampau n.
// contoh:
// input: 10 ; output : 220;
// input : 25 ; output : 2600

#include <iostream>
using namespace std;

int main () {
    int n;
    cout << " input bilangan : "; 
    cin >> n;
    long long total = 0; // variabel penampung hasil
    for (int i = 2; i <= n; i += 2) {  // loop hanya bilangan genap
        total += i * i ;             // tambahkan kuadrat ke total
    }

    cout << total << endl; // tampilkan hasil
    return 0;
}
          

