#define _CRT_SECURE_NO_WARNINGS

#include "manipulating.h"

void manipulating() {
    printf("*** Start of Concatenating Strings Demo ***\n");

    // declare two char arrays to store user input strings
    char compare1[80];
    char compare2[80];

    // declare an integer variable to store result of comparison
    int result;

    // while loop starts
    while (TRUE) {
        printf("Type the 1st string to compare (q - to quit):\n");

        // reads the first string from keyboard into compare1 variable
        gets(compare1);

        // check if user enters "q"
        // if yes, break while loop
        if (strcmp(compare1, "q") == 0) break;
        printf("Type the 2nd string to compare:\n");

        // reads the second string from keyboard into compare2 variable
        gets(compare2);

        // use strcmp to compare two strings
        result = strcmp(compare1, compare2);

        // 1st string is less than 2nd if result is smaller than 0
        if (result < 0)
            printf("1st string is less than 2nd\n");
        // 1st string is equal to 2nd if result is smaller than 0
        else if (result == 0)
            printf("1st string is equal to 2nd\n");
        // 1st string is greater than 2nd if result is bigger than 0
        else
            printf("1st string is greater than 2nd\n");
    } // while loop ends

    printf("*** End of Comparing Strings Demo ***\n\n");
}