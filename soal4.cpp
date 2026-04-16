// buatlah program yang menerima input sebuah bilangan bulat n (1 <= n <= 10000). program harus mencetak kata "Hore!" dengan syarat:
// huruf o dicetak sebanyak n kali.
// huruf e dicetak sebanyak n kali.
// tanda seru ! dicetak sebanyak n kali.

#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;
  string hasil = "H";

  // loop untuk huruf "o"  sebanyak n kali
  for (int i = 0; i < n; i++) {
      hasil += "o";
  }

  hasil += "r";
  // loop untuk huruf "e" sebanyak n kali
  for (int i = 0; i < n; i++) {
      hasil += "e";
  }
  //loop untuk huruf "!" sebanyak n kali
  for (int i = 0; i < n; i++) {
      hasil += "!";
  }

  cout << hasil << endl;
  return 0;
}
    
