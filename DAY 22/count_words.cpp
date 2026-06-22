#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string sentence;
    
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    stringstream ss(sentence);
    string word;
    int count = 0;

    while (ss >> word) {
        count++;
    }

    cout << "Number of words = " << count;

    return 0;
}