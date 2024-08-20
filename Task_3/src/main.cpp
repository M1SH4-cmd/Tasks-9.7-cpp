#include <iostream>
using namespace std;

int main() {
  cout << "Type a sentence" << endl;
  string sentence;
  getline(cin, sentence);

  int words = 0;

  for(int i = 0; i < sentence.size(); i++)
  {
    if(sentence[i] == ' ')
    {
      words++;
    }

  }
  words = words + 1;
  cout << "Quantity of words = " << words << endl;
}