#include<stdio.h>
#include<ctype.h>

char customgetchar(FILE* input){



//	int c = fgetc(input);
	char temp_string[50];

	int c = fgetc(stdin);
	char i;
	int j = 0;

	while(c != EOF){
		i = c;
		printf("%c\n", i);

		if(isspace(c)){
			//return ' ';
			temp_string[j] = ' ';
			j++;
		}
		if(isalpha(c)){
			int d = toupper(c);
			temp_string[j] = d;
			j++;
			//return d;
		}
		if(isascii(c)){
			temp_string[j] = c;
			j++;
			//return i;
		}
		c = fgetc(input);
		
	

	}

	if(c==EOF){
		printf("C is EOF");
	}	
	return '\0';
}
