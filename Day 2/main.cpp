#include <iostream>
using namespace std;

long unsigned int DecToBin(unsigned int n) {
    long unsigned int bin = 0;
    int pow = 1;
    while (n > 0) {
        bin += (n % 2) * pow;
        n /= 2;
        pow *= 10;
    }
    return bin;
}

unsigned int BinToDec(long unsigned int b) {
    unsigned int dec = 0;
    int pow = 1;
    while (b > 0) {
        dec += (b % 10) * pow;
        pow *= 2;
        b /= 10;
    }
    return dec;
}

int main() {
    cout << DecToBin(8) << endl << BinToDec(DecToBin(8));
    return 0;
}
