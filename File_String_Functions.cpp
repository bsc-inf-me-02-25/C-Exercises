#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Function to count vowels
int countVowels(string text) {
    int count = 0;

    for (char c : text) {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }

    return count;
}

// Function to count words
int countWords(string text) {
    int count = 0;
    bool inWord = false;

    for (char c : text) {
        if (c != ' ' && !inWord) {
            count++;
            inWord = true;
        }
        else if (c == ' ') {
            inWord = false;
        }
    }

    return count;
}

// Function to reverse text
string Reverse(string text) {
    string reversed = "";

    for (int i = text.length() - 1; i >= 0; i--) {
        reversed += text[i];
    }

    return reversed;
}

// Function to capitalize SECOND letter of each word
string capitalizeSecondLetter(string text) {
    bool newWord = true;

    for (int i = 0; i < text.length(); i++) {
        if (text[i] == ' ') {
            newWord = true;
        }
        else {
            if (newWord) {
                newWord = false; // first letter of word
            }
            else {
                // second letter ? capitalize
                text[i] = toupper(text[i]);
                newWord = false;

                // skip remaining letters of the word
                while (i + 1 < text.length() && text[i + 1] != ' ') {
                    i++;
                }
            }
        }
    }

    return text;
}

int main() {
    ifstream file("data.txt"); // make sure file exists
    string fileData;

    // Check if file opened
    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    // Read entire line
    getline(file, fileData);
    file.close();

    cout << "Original Text: " << fileData << endl;

    cout << "Number of vowels: " << countVowels(fileData) << endl;
    cout << "Number of words: " << countWords(fileData) << endl;

    cout << "Reversed Text: " << Reverse(fileData) << endl;

    cout << "Second Letter Capitalized: "
         << capitalizeSecondLetter(fileData) << endl;

    return 0;
}
