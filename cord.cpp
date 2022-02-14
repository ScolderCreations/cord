#include <iostream>
#include <string>
#include <fstream>
#include <./defs.cpp>

using namespace std;

int main() {
  string input;
  try {
    input = ifstream.open(argv[0], ifstream::in);
  } catch {
    cerr << "Could not find source file";
    return 1;
  }
  input = ifstream.open(argv[0], ifstream::in);
  string currentLet;
  string toPass[237089];
  for (int i = 0; i < input.gcount(); i++) {
    cout << input.get();
  }
  return 0;
}
