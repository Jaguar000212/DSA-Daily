#include <iostream>
using namespace std;

int SumOfDigits(int n) {
    int sum = 0;
    while (n != 0) {
        int digit = n % 10;
        sum += digit;
        n /= 10;
    }
    return sum;
}

int factorial(int n) {
    if (n == 1 || n == 0)
        return 1;
    return n * factorial(n - 1);
}

int nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int isPrime(int n) {
    if (n == 1) {
        return 0;
    }
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int fibonacci(int n) {
    if (n == 1 || n == 0)
        return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

void printPrime(int n) {
    for (int i = 2; i < n; i++) {
        int flag = 1;
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            cout << i << endl;
    }
}

int main() {
    int n;
    cin >> n;
    // int r;
    // cin >> r;
    // cout << SumOfDigits(n);
    // cout << nCr(n, r);
    // cout << isPrime(n);
    // printPrime(n);
    cout << fibonacci(n);
    return 0;
}
