#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <cmath>
#include <iomanip>

using namespace std;

void solve() {
    string s;
    getline(cin, s);
    if (s.empty()) return;

    map<char, int> freq;
    for (char c : s) freq[c]++;

    double entropy = 0;
    int n = s.length();
    for (auto const& [ch, count] : freq) {
        double p = (double)count / n;
        entropy -= p * log2(p);
    }

    double h_max = log2(freq.size());
    double redundancy = (h_max > 0) ? (1 - (entropy / h_max)) : 0;

    cout << fixed << setprecision(4) << "Entropy: " << entropy << endl;
    cout << fixed << setprecision(4) << "Redundancy: " << redundancy << endl;
}

int main() {
    solve();
    return 0;
}
