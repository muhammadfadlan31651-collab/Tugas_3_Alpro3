/* input :
sebuah kalimat
sebuah huruf 
output 
huruf yang terdapat pada kalimat yang sesuai dengan huruf yang diinputkan akan menghilang.
contoh input                     contoh output 
ilmu komputer usu                ilm kompter s
u                                karakter yang dihapus = 4
saya sakit                       sy skit
a                                karakter yang dihapus= 3
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string kalimat;   
    char huruf;       
    string hasil = "";
    int count = 0;    

    cout << "Masukkan kalimat : "; 
    cin.ignore();           // digunakn untuk mengabaikan karakter newline(\n)
    getline(cin, kalimat);  // getline dipakai agar bisa membaca kalimat dengan spasi

    cout << "Masukkan huruf   : ";
    cin >> huruf;

    /*
    LOGIKA UTAMA:
    Loop setiap karakter dalam string kalimat satu per satu.
    kalimat.length() mengembalikan panjang (jumlah karakter) dari string.
    */
    for (int i = 0; i < (int)kalimat.length(); i++) {
        if (kalimat[i] == huruf) {
            count++;
        } else {
            hasil += kalimat[i];
        }
    }
    cout << hasil << endl;
    cout << "Karakter terhapus = " << count << endl;
    return 0;
}
