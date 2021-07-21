// ---------------- IMPORTATIONS ----------------

//standard
#include <stdio.h>
#include <stdlib.h>



//strings & string arrays utility
#include "../lib/more_strings.h"












/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Prog [V.V.V] ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
                          more_strings.h demonstration program

        Blablabla about the subject.

    DD/MM/YYYY > [V.V.V] :
    - Added something.
    - Added something else.

    DD/MM/YYYY > [V.V.V] :
    - Added something that wasn't before.
    - Fixed a bug.
    - Added something else.
    - Added something else again.

    BUGS : Active bugs in last version.
    NOTES : Notes.

    Contact : 
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */




















// ---------------- EXECUTION ----------------

//main
int main(){
	//presentation
	printf("I.A. > This is a basic demonstration of \"more_strings.c/.h\".\n");



	//string split test1
	char* test1 = "";
	printf("char* test1 = \"%s\";\n", test1);
	char** result1 = strArr_split(test1, ' ');

	//show result1
	printf("char** result1 = {\n");
	for(int c=0; c < strArr_len(result1); c++){
		printf("    \"%s\",\n", result1[c]);
	}
	printf("};\n\n");



	//string split test2
	char* test2 = "okay that's great ";
	printf("char* test2 = \"%s\";\n", test2);
	char** result2 = strArr_split(test2, ' ');

	//show result2
	printf("char** result2 = {\n");
	for(int c=0; c < strArr_len(result2); c++){
		printf("    \"%s\",\n", result2[c]);
	}
	printf("};\n\n");



	//string split test3
	char* test3 = " ah ok .";
	printf("char* test3 = \"%s\";\n", test3);
	char** result3 = strArr_split(test3, ' ');

	//show result3
	printf("char** result3 = {\n");
	for(int c=0; c < strArr_len(result3); c++){
		printf("    \"%s\",\n", result3[c]);
	}
	printf("};\n\n");



	//string split test4
	char* test4 = "hello Houston here is Apollo";
	printf("char* test4 = \"%s\";\n", test4);
	char** result4 = strArr_split(test4, ' ');

	//show result4
	printf("char** result4 = {\n");
	for(int c=0; c < strArr_len(result4); c++){
		printf("    \"%s\",\n", result4[c]);
	}
	printf("};\n\n");



	//string split test5
	char* test5 = " ";
	printf("char* test5 = \"%s\";\n", test5);
	char** result5 = strArr_split(test5, ' ');

	//show result5
	printf("char** result5 = {\n");
	for(int c=0; c < strArr_len(result5); c++){
		printf("    \"%s\",\n", result5[c]);
	}
	printf("};\n\n");



	//string split test6
	char* test6 = "a";
	printf("char* test6 = \"%s\";\n", test6);
	char** result6 = strArr_split(test6, ' ');

	//show result6
	printf("char** result6 = {\n");
	for(int c=0; c < strArr_len(result6); c++){
		printf("    \"%s\",\n", result6[c]);
	}
	printf("};\n");



	//free all data
	strArr_free(result1);
	strArr_free(result2);
	strArr_free(result3);
	strArr_free(result4);
	strArr_free(result5);
	strArr_free(result6);



	return EXIT_SUCCESS;
}
