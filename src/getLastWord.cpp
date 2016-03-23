/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){
	int len = 0,temp_index,i=0;
	if (str == NULL){
		return NULL;
	}
	else{
		while (str[len] != '\0'){
			len++;
		}
		temp_index = len;
		while (str[temp_index] != '\0'){
			if (str[temp_index] == ' '){
				break;
			}
			temp_index--;
		}
		char* result = (char*)malloc((len - temp_index)*sizeof(char));
		while (temp_index <= len){
			result[i] = str[temp_index];
			i++;
			temp_index++;
		}
		return result;
	}
}
