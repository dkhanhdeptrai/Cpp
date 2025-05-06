#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
using namespace std;

// Function to normalize a single string
string normalizeString(const string &s) {
    stringstream ss(s);
    string word, result = "";

    while (ss >> word) { // Extract words while ignoring extra spaces
        // Capitalize the first letter and make the rest lowercase
        word[0] = toupper(word[0]);
        for (size_t i = 1; i < word.size(); ++i) {
            word[i] = tolower(word[i]);
        }
        result += word + " ";
    }

    // Remove the trailing space
    if (!result.empty()) {
        result.pop_back();
    }

    return result;
}

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline after the number of test cases

    while (t--) {
        string s;
        getline(cin, s);
        cout << normalizeString(s) << endl;
    }

    return 0;
}