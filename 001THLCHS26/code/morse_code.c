/*
 * File:          morse_code.c
 * Author:        Miquéias Medeiros
 * Created:       2026-09-04
 * Modified:      2026-09-04
 *
 * Description:
 *     A small implementation of Morse code encoding, written as a practical
 *     exploration of the concept of encoding discussed in the current reading.
 *     It maps alphanumeric characters to their Morse code representations
 *     and prints the resulting encoded message. 
 *
 * Usage:         
 *     Compile:
 *     $ gcc -Wall -Wextra -Wpedantic -std=c23 morse_code.c -o morse_code
 *
 *     Run:
 *     $ ./morse_code
 *
 * References:    
 *     - https://www.geeksforgeeks.org/dsa/morse-code-implementation/ 
 *
 * SPDX-License-Identifier: MIT
 * Copyright:     © 2026 All rights reserved.
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_INPUT_LENGTH 100

char *morse_encode(const char x);

int main(void)
{
	char str[MAX_INPUT_LENGTH];

	printf("Type something here: ");
	scanf("%99s", str);

	size_t str_length = strlen(str);

	for (int i = 0; i < str_length; i++) {
		char *code = morse_encode(str[i]);
		printf("%s ", code);
	}

	printf("\n");

	return 0;
}

char *morse_encode(const char x)
{
	// refer to the Morse table
	switch (x) {
	case 'a':
		return ".-";
	case 'b':
		return "-...";
	case 'c':
		return "-.-.";
	case 'd':
		return "-..";
	case 'e':
		return ".";
	case 'f':
		return "..-.";
	case 'g':
		return "--.";
	case 'h':
		return "....";
	case 'i':
		return "..";
	case 'j':
		return ".---";
	case 'k':
		return "-.-";
	case 'l':
		return ".-..";
	case 'm':
		return "--";
	case 'n':
		return "-.";
	case 'o':
		return "---";
	case 'p':
		return ".--.";
	case 'q':
		return "--.-";
	case 'r':
		return ".-.";
	case 's':
		return "...";
	case 't':
		return "-";
	case 'u':
		return "..-";
	case 'v':
		return "...-";
	case 'w':
		return ".--";
	case 'x':
		return "-..-";
	case 'y':
		return "-.--";
	case 'z':
		return "--..";
	case '1':
		return ".----";
	case '2':
		return "..---";
	case '3':
		return "...--";
	case '4':
		return "....-";
	case '5':
		return ".....";
	case '6':
		return "-....";
	case '7':
		return "--...";
	case '8':
		return "---..";
	case '9':
		return "----.";
	case '0':
		return "-----";
	default:
		printf("Found invalid character.");
		exit(0);
	}
}
