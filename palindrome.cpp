#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char string[50];

int main(int argc, char *argv[]){
	
	string input;
	
	printf("input your words : ");
	fflush(stdin);gets(input);
	
	int i = 0;
	int j = strlen(input) - 1;
	
	while(i < strlen(input)){
		if(input[i]==input[j]){
			i++;
			j--;
			if(i = j){
				printf("palindrome");
				return 0;
			}
		} 
		else{
			printf("not a palindrome");
			return 0;
		}
	}
}
