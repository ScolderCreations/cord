#include <string> // just in case

#define M_NEWLINE "\n"
#define M_END ";"

#define O_PLUS "+"
#define O_MINUS "-"
#define O_MULTI "*"
#define O_DIVIDE "/"
#define O_TERNARY "?"
#define O_TERNELSE ":"

#define B_PIPE "|"
#define B_UPPER ">"
#define B_LOWER "<"
#define B_NOT "!"
#define B_LEAST ">="
#define B_MOST "<="
#define B_SIMILAR "~"
#define B_EQUAL "=="
#define B_NOTEQUAL "!="

#define S_IFBEGIN "if"
#define S_ELSE "else"
#define S_ELIF "elif"
#define S_RETURN "return"
#define S_FUNC "function"
#define S_DEFINE "@rename"
#define S_TYPE "@type"
#define S_IMPORT "@import"
#define S_FROM "from"
#define S_TRY "try"
#define S_TRYFAIL "catch"
#define S_THEN "then"

#define _RESERVED [14] {"os", "system", "if", "else", "elif", "return", "from", "function", "try", "catch", "then", "undefined", "fluid", "strict"}
