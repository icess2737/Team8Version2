#define _CRT_SECURE_NO_WARNINGS

// import header file
#include "tokenizing.h"


// function definition
void tokenizing() {
	printf("*** Start of Tokenizing Word Demo***\n");
    // Initialization of variables
	char words[200];
	char* word;
	int w_counter;
    // Iteration
	while (TRUE) {
		printf("Type a few words separated by space(q - to quit):\n");
		gets(words);
		if (strcmp(words, "q") == 0) break;
		word = strtok(words, " ");
		w_counter = 1;
        // More iteration
		while (word)
		{
			printf("Word #%d is \'%s\'\n", w_counter++, word);
			word = strtok(NULL, " ");
		}

	}
	printf("*** End of Tokenizing Words Demo ***\n\n");
}