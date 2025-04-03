#include <iostream>
#include <unordered_map>
using namespace std;

void Frequency(string str) {
    unordered_map<char, int> freqMap; 
  
    for (char ch : str) {
        freqMap[ch]++;
    }

  
    cout << "Character frequencies:\n";
    for (auto pair : freqMap) {
        cout << "'" << pair.first << "': " << pair.second << endl;
    }
}

int main() {
    string str;

   
    cout << "Enter a string: ";
    getline(cin, str); 

    Frequency(str); 

    return 0;
}
