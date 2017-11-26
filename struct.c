#include<stdio.h>
#include<string.h>

typedef struct{

	char phraseText[201];
	int count = 0;

	}Phrase;

Phrase phraseList[1000];



void receiveString(char* inputString){


	
	strcpy(phraseList[0].phraseText, inputString);
	printf("the string of phraseList[0] is %s\n", phraseList[0].phraseText);

}

