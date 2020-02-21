#include"str_.h"
#include<string.h>
#include<stdio.h>

char init_string(char str[]) {
	int count=0;
	gets_s(str, 10);
	for (int i = 0; i < 10; i++) {
		if (str[i]!=NULL) {
			count++;
		}
	}
	
	/*str = (char*)realloc(str, count * sizeof(char));*/
	return str;
}
char compare_string(char str1[], char str2[]) {
	//compare true string return 1 or return 0 if different
	int i, j;
	for (i = 0; i <(int) strlen(str1); i++) {
		for (j = 0; j < (int)strlen(str2); j++) {
			if (str1[i] == str2[j]) {
				continue;
			}
			else {
				return 0;
			}
		}
	}
	return 1;
}
char copy_string(char str1[], char str2[]) {
	//copy string2 to string 1 and return pointer to string 1;
	int i, j;
	for (i = 0; i < (int)strlen(str1); i++) {
		for (j = 0; j <(int) strlen(str2); j++) {
			str1[i] = str2[j];
		}
	}
	return (str1);
}
char add_string(char str1[], char str2[]) {
	
	// add string 2 to string 1 also eliminate null element of str1 
	return 0;
}
char search_string(char str1[], char letter) {
	//search an element of str return 1 if exist, 0 if doesn't exist
	for (int i = 0; i < (int)strlen(str1); i++) {
		if (letter == str1[i]) {
			return 1;
		}
	}
	return 0;
}
