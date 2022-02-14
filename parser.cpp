#include <iostream>
#include <string>
#include <fstream>
#include <./lib/defs.cpp>

using namespace std;

int main() {
  string input;
  
  try {
    input = ifstream.open(argv[0], ifstream::in);
  } catch {
    throw exception;
  }
  
  input = ifstream.open(argv[0], ifstream::in);
  string currentLet;
  string curStr;
  string toPass[150000];
  int ii = 0;
  for (int i = 0; i < input.gcount(); i++) {
    currentLet = input.get();
    curStr+=currentLet;
    if ((curStr.find("//") == ii - 1)) {
      curStr = "";
      ii = 0;
      while ((currentLet != M_NEWLINE) && (i < input.gcount();) {
        currentLet = input.get();
        i++;
      }
    }
    if ((curStr.find("/*") == ii - 1)) {
      while (() && (i < input.gcount()) {
        currentLet = input.get();
        i++;
      }
      curStr = "";
      ii = 0;
    }
    ii++;
  return 0;
}
