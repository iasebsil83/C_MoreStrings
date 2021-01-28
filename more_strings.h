#ifndef MORE_STRINGS_H
#define MORE_STRINGS_H




















// -------------------------------- HEX TOOLS --------------------------------

//int
int hexCharToInt(char c); //output value is on 32 bits but only the 4 LSb are used
int hexStrToInt(char* s); // #h# don't require an '\0' at the end
                          //example : "ffffff9c" => -100



















// -------------------------------- STRINGS --------------------------------

//utilities
char* str_malloc(char* s);
int str_indexOf(char* s, char c);




















// -------------------------------- STRING ARRAYS --------------------------------

//utilities
int strArr_len(char** sa);
void strArr_free(char** sa);
char** strArr_split(char* s, char c);




















#endif
