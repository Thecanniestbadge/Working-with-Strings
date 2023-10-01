// Programmer:		Thecanniestbadge
// Date:			06/07/2023
// Program Name:	Working with Strings
// Description:		This program has the user to enter their first name and their partner's first name then the program provides basic information on the names.
//					This program also determines which name is longer, aplphabetically, and converts the last letter of the first name to an uppercase and displays the results to the user. 

#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf
#include <string.h>
#include <ctype.h>

int main(void)
{
	// Constant and Variable Declarations
	// The char statment allows the user enter names with the max character length of 100
	char nameOne[100];
	char nameTwo[100];

	// *** Your program goes here ***
	// *** Input ***
	// Has the user input names
	printf("Enter your first name: ");
	scanf("%s", nameOne); // has the user enter their first name
	printf("Enter your partner's first name: ");
	scanf("%s", nameTwo); // has the user enter their partners first name
	printf("\n"); // Blank line
	// *** Calculation ***
	// The two statements below detemines the length of both names starting with the first name and then the last name 
	int lengthOne = strlen(nameOne);
	int lengthTwo = strlen(nameTwo);
	// *** IF Statements ***
	// Compares the lengths of the names
	// Determines which name is longer or in some cases equal 
	if (lengthOne > lengthTwo) {
		printf("%s is the longer name.\n", nameOne);
	}
	else if (lengthTwo > lengthOne) {
		printf("%s is the longer name.\n", nameTwo);
	}
	else {
		printf("The names %s and %s are equal lengths.\n", nameOne, nameTwo);
	}
	// The if statements below determine whos name comes first alphabetically
	if (strcmp(nameOne, nameTwo) < 0) {
		printf("The name that comes first alphabetically is %s.\n", nameOne);
	}
	else if (strcmp(nameTwo, nameOne) < 0) {
		printf("The name that comes first alphabetically is %s.\n", nameTwo);
	}
	else {
		printf("The names %s and %s are alphabetically equal.\n", nameOne, nameTwo);
	}
	// *** PROCESSING ***
	// This line of code changes the last letter of the longest name to a uppercase letter
	nameOne[lengthOne - 1] = toupper(nameOne[lengthOne - 1]);

	// *** OUTPUT ***
	// Outputs the first name with the uppercase last letter to the console 
	printf("%s with the last character converted to uppercase is %s.\n", nameOne, nameOne);
	return 0;
} // end main()
