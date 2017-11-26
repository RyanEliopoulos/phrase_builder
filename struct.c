#include<stdio.h>
#include<string.h>

void printPhraseList();

typedef struct{

	char phraseText[201];
	int count;

	}Phrase;

Phrase phraseList[1000];

int phraseCount = 0;


//This works, but would need to first search phraseText for any Phrases that match the incoming string.
void receiveString(char* inputString){

	//Need fnx here that checks string against phraseTexts.
	strcpy(phraseList[phraseCount].phraseText, inputString);
	phraseCount++;	

	printf("<%s>\n", inputString);

	//Need to figure out what to do with this fnx
//	printPhraseList();	
	
	//int j = 0;

	//search through struct list for a phrase match (testing/writing)
	//while(j < phraseCount){
	//	
	//	int i = 0;
	//	
	//	while(inputString[i] == phraseList[j].phraseText[i]){
//
//			if(inputString[i] == '\0'){
//				printf("We've got a match!\n");
//			}
//			i++;	
//		j++;
//
//		}
//	}	

	
//	printf("the string of phraseList[0] is %s\n", phraseList[0].phraseText);
//	printf("the string of phraseList[3] is %s\n", phraseList[3].phraseText);
//	printf("the first char of phraseList[4] is %c\n", phraseList[4].phraseText[0]);
}


void printPhraseList(){
	
	for(int p = 0;p<phraseCount;p++){
		printf("inside print phrase list\n");
		printf("<%s>\n", phraseList[p].phraseText);
	}


}

//testing in above function
//void traversephraseList(){
//
//	int j = 0;
//
//	while(j < phraseCount){
//		
//		int i = 0;
//		
//		while(inputString[i] == phraseList[j].phraseText[i]){
//
//			if(inputString[i] == '\0'){
//				printf("We've got a match!\n");
//			}	
///
//		}
//	}	

//}
