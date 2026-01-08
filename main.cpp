#include <iostream>
using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}

int main() {
    string s;
    cout << "Enter text: ";
    getline(cin, s);

    int vowels = 0, consonants = 0;

    for(char c : s) {
        if(isalpha(c)) {
            if(isVowel(c)) vowels++;
            else consonants++;
        }
    }

    cout << "\nVowels: " << vowels;
    cout << "\nConsonants: " << consonants;

    return 0;
}
