#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    unordered_map<char, int> freq;

    // Count frequency
    for (char ch : str)
        freq[ch]++;

    // Find first non-repeating character
    for (char ch : str) {
        if (freq[ch] == 1) {
            cout << "First non-repeating character: " << ch;
            return 0;
        }
    }

    cout << "No non-repeating character found.";
    return 0;
}