/* Diberikan input tahun kabisat dan interval, tentukan tahun berikutnya atau sebelumnya dan tentukan apakah tahun tersebut kabisat atau tidak.
input:
Sebuah angka berupa integer A(1000<= A <= 9000) dan B (-A <= B <= 9999- A), A menyatakan tahun dan B menyatakan interval. 
contoh input                   contoh output 
2000                           2000 kabisat
5                              2001 bukan kabisat
                               2002 bukan kabisat
                               2003 bukan kabisat
                               2004 kabisat
                               2005 bukan kabisat
2000                           2000 kabisat
-3                             1999 bukan kabisat 
                               1998 bukan kabisat
                               1997 bukan kabisat
*/

#include <iostream>
using namespace std;

/*
FUNGSI isKabisat:
Mengembalikan true jika tahun adalah tahun kabisat, false jika bukan.

ATURAN TAHUN KABISAT:
1. Habis dibagi 4  => kemungkinan kabisat
2. Tapi jika habis dibagi 100 => BUKAN kabisat
3. Kecuali jika habis dibagi 400 => KABISAT

Contoh:
- 2000: habis 400 => kabisat
- 1900: habis 100 tapi tidak habis 400 => bukan kabisat
- 2004: habis 4, tidak habis 100 => kabisat
- 2001: tidak habis 4 => bukan kabisat
*/
bool isKabisat(int tahun) {
    if (tahun % 400 == 0) {
        return true;    // habis dibagi 400 => pasti kabisat
    } else if (tahun % 100 == 0) {
        return false;   // habis dibagi 100 tapi bukan 400 => bukan kabisat
    } else if (tahun % 4 == 0) {
        return true;    // habis dibagi 4 tapi bukan 100 => kabisat
    } else {
        return false;   // tidak habis dibagi 4 => bukan kabisat
    }
}

int main() {
    int A, B;  
    cout << "Masukkan tahun (1000-9000) : ";
    cin >> A;
    cout << "Masukkan interval B        : ";
    cin >> B;
    cout << endl;

    if (B >= 0) {
        /*
        JIKA B POSITIF atau NOL => loop MAJU
        Mulai dari tahun A, sampai A+B
        Contoh: A=2000, B=5 => tampilkan 2000, 2001, 2002, 2003, 2004, 2005
        */
        for (int tahun = A; tahun <= A + B; tahun++) {
            if (isKabisat(tahun)) {
                cout << tahun << " kabisat" << endl;
            } else {
                cout << tahun << " bukan kabisat" << endl;
            }
        }
    } else {
        /*
        JIKA B NEGATIF => loop MUNDUR
        Mulai dari tahun A, turun sampai A+B
        Contoh: A=2000, B=-3 => tampilkan 2000, 1999, 1998, 1997
        A + B = 2000 + (-3) = 1997 (batas bawah)
        */
        for (int tahun = A; tahun >= A + B; tahun--) {
            if (isKabisat(tahun)) {
                cout << tahun << " kabisat" << endl;
            } else {
                cout << tahun << " bukan kabisat" << endl;
            }
        }
    }

    return 0;
}
