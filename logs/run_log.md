#include <iostream>
#include <map>
#include <cmath>
using namespace std;

double calculate_entropy(const string &s) {
    map<char, int> freq;
    for (char c : s) freq[c]++;

    double H = 0.0;
    int n = s.length();

    for (auto &p : freq) {
        double prob = (double)p.second / n;
        H -= prob * log2(prob);
    }
    return H;
}

double calculate_redundancy(double H, int unique_chars) {
    double Hmax = log2(unique_chars);
    return 1.0 - (H / Hmax);
}
