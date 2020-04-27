#include <iostream>
using namespace std;

bool getBit(int sk, int kuri) {
    int ind = 1 << kuri;
    return (sk & ind) != 0;
}

void printBinary(int sk) {
  for (int i=31; i>=0; i--) {
    cout << getBit(sk, i);
  }
  cout << endl;
}

void setBit(int &sk, int kuri, int r) {
    int inv = ~(1 << kuri);
    r = (r != 0) << kuri;
    sk = (sk & inv) | r;
}

int main() {
  int a;
  cout << "Skaičius: ";
  cin >> a;
  printBinary(a);
  setBit(a, 10, 1);
  printBinary(a);
  cout << a << endl;
}
