#include <cmath>
#include <iostream>
#include <map>
#include <unordered_set>
#include <string>
using namespace std;

double calculate_entropy(const string &text) {
    if (text.empty()) {
        return 0.0;
    }
    map<char, int> freq;
    for (char c : text) {
        freq[c]++;
    }
    double entropy = 0.0;
    for (const auto &pair : freq) {
        double p = static_cast<double>(pair.second) / text.size();
        entropy -= p * log2(p);
    }
    return entropy;
}

double calculate_redundancy(const string &text, int alphabet_size = 256) {
    double entropy = calculate_entropy(text);
    return log2(alphabet_size) - entropy;
}

int main() {
    string s1 = "aaaaaa";
    string s2 = "abcabc";
    string s3 = "hello123";

    cout << "String 1: " << s1 << endl;
    cout << "Entropy: " << calculate_entropy(s1) << endl;
    cout << "Redundancy: " << calculate_redundancy(s1) << endl << endl;

    cout << "String 2: " << s2 << endl;
    cout << "Entropy: " << calculate_entropy(s2) << endl;
    cout << "Redundancy: " << calculate_redundancy(s2) << endl << endl;

    cout << "String 3: " << s3 << endl;
    cout << "Entropy: " << calculate_entropy(s3) << endl;
    cout << "Redundancy: " << calculate_redundancy(s3) << endl;

    return 0;
}          // ← thêm dấu } này
