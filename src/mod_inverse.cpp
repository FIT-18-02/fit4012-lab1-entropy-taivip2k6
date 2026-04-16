#include <iostream>

using namespace std;

// Thuật toán Euclid mở rộng
long long extended_gcd(long long a, long long b, long long &x, long long &y) {
    if (a == 0) {
        x = 0; y = 1;
        return b;
    }
    long long x1, y1;
    long long gcd = extended_gcd(b % a, a, x1, y1);
    x = y1 - (b / a) * x1;
    y = x1;
    return gcd;
}

void modInverse(long long a, long long m) {
    long long x, y;
    long long g = extended_gcd(a, m, x, y);
    if (g != 1) {
        cout << "không tồn tại" << endl;
    } else {
        long long res = (x % m + m) % m;
        cout << res << endl;
    }
}

int main() {
    long long a, m;
    while (cin >> a >> m) {
        modInverse(a, m);
    }
    return 0;
}
