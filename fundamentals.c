#include "fundamentals.h"

// Index a character entered by usser in the strings
void fundamentals() {

	printf("*** Start of Indexing Strings Demo ***\n");
	
	// Define variables and initialize them 
	char buffer1[80 + 1] = { '\0' };
	char num_input[10 + 1] = { '\0' };
	int position;

	while (TRUE) {
		printf("Type a string (q - to quit):\n");
		gets(buffer1);
		if (strcmp(buffer1, "q") == 0) break;

		// nested iteration
		while (TRUE) {
			printf("Type the character position whithin the string:\n");
			gets(num_input);
			position = atoi(num_input);
			if (position >= strlen(buffer1)) {
				printf("Wrong position... type again, please\n");
				continue;
			}
			printf("The character found at %d position is \'%c\'\n",
				position, buffer1[position]);
			break;
		}
	}
	printf("*** End of Indexing Starts Demo *** \n\n");
}