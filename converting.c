// Incluiding header files and libraries

#include "converting.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Converting function
void converting(){

	printf("*** Start of Converting Strings to int Demo ***\n");
	// Initialization of variables
    char int_string[80];
	int int_number;
    
    //Iteration
	while (TRUE) {
		printf("Type the int numeric string (q - to quit):\n");
		gets(int_string);
		if (strcmp(int_string, "q") == 0) break;
		int_number = atoi(int_string);
		printf("Converted number is %d\n", int_number);
	}
	printf("*** End of Converting Strings to int Demo ***\n\n");



}