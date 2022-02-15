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
  int toPassI = 0;
  int ii = 0;
  int gc = input.gcount();
  for (int i = 0; i < gc; i++) {
    currentLet = input.get();
    curStr+=currentLet;
    if ((curStr.find("//") == ii - 1)) {
      curStr = "";
      ii = 0;
      while ((currentLet != M_NEWLINE) && (i < gc;) {
        currentLet = input.get();
        i++;
      }
    }
    if ((curStr.find("/*") == ii - 1)) {
      while ((currentLet != "*") && (i < gc) {
        currentLet = input.get();
        i++;
      }
      i++;
      currentLet = input.get();
      curStr = "";
      ii = 0;
    }
    if (curStr == S_IFBEGIN) {
      
    }
    ii++;
  return 0;
}
