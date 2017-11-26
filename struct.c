#include<stdio.h>
#include<string.h>

void printPhraseList();


//data structure that tracks unique phrases and their occurences
typedef struct{

	char phraseText[201];
	int count;

	}Phrase;

Phrase phraseList[1000];


//
int phraseCount = 0;


//This works, but would need to first search phraseText for any Phrases that match the incoming string.
void receiveString(char* inputString){

	//Need fnx here that checks string against phraseTexts.
	strcpy(phraseList[phraseCount].phraseText, inputString);
	phraseCount++;	

//	Attempting to search through data struct and determine if a phrase is a match	
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

	
}

//Iterates through the list of phrases and prints the phraseText of each one
void printPhraseList(){
	
	for(int p = 0;p<phraseCount;p++){
		
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
