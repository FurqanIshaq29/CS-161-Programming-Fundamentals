#include <iostream>


using namespace std;

int main() {
  string word;
  int idx = 0;
  cout << "Enter a word: ";
  cin >> word;

   while (word[idx] != '\0')
    {
        idx++;
    }

  for (int i = 0; i < idx; i++) {
   idx++;
  }

  char alphabet;
  cout << "Enter an alphabet to search for: ";
  cin >> alphabet;

  for (int i = 0; i < idx; i++) {
    if (word[i] == alphabet) {
      cout << "Alphabet " << alphabet << " found at position " << i + 1 << endl;
    }
  }

  return 0;
}