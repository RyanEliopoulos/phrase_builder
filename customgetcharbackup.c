#include<stdio.h>
#include<ctype.h>

char customgetchar(FILE* input){



//	int c = fgetc(input);


	int c = fgetc(stdin);
	char i;
	
	i = c;
	
	if(i==EOF){
		printf("Its a null terminator alright");
	}	
	while(c != EOF){
		i = c;
		printf("%c\n", i);

		if(isspace(c)){
			return ' ';
		}
		if(isalpha(c)){
			int d = toupper(c);
			return d;
		}
		if(isascii(c)){
			i = c;
			return i;
		}
		c = fgetc(input);
		
	

	}

	if(c==EOF){
		printf("C is EOF");
	}	
	return '\0';
}
