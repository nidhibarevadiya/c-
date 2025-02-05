#include <iostream>
#include <cctype>
#include <string>

using namespace std;

string swapFirstLetterCase(const string& sentence)
 {
    string result = sentence;
    bool isNewWord = true;

    for (int i = 0; i < result.length(); ++i)
     {
        if (isNewWord && isalpha(result[i]))
         {
            // Swap the case of the first letter of the word
            if (islower(result[i]))
                result[i] = toupper(result[i]);
            else if (isupper(result[i]))
                result[i] = tolower(result[i]);
            isNewWord = false;
        } 
        else if (isspace(result[i]))
     {
            isNewWord = true;
        }
    }

    return result;
}

int main() {
    string sentence;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    string modifiedSentence = swapFirstLetterCase(sentence);
    cout << "Modified sentence: " << modifiedSentence << endl;

    return 0;
}
