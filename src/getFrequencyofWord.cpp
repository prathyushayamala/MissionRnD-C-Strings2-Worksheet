/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>

	int count_word_in_str_way_1(char *str, char *word){
		int len1 = 0, len2 = 0, i = 0, j = 0, count = 0;
		while (str[len1] != '\0'){
			len1++;
		}
		while (word[len2] != '\0'){
			len2++;
		}
		if (len2 == 1){
			while ((i < len1) && (str[i] != '\0')){
				if (str[i] == word[0]){
					count++;
				}
				i++;
			}
		}
		else{
			while ((i < len1) && (str[i] != '\0')){
				while (str[i] == word[j]){
					if ((str[i] == '\0') || (word[j] == '\0')){
						break;
					}
					i++;
					j++;
				}
				if (j == len2){
					count++;
					i--;
				}
				else{
					i++;
				}
				j = 0;
			}
		}
		return count;
	}

int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}

