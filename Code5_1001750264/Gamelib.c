//Govinda KC    
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "Gamelib.h"

void CheckPhrase( char *Phrase) {      // function checks for the '-' in the chosen phrase
	int i =0;
	char ch = '-';
	char *FirstOccur = strchr(Phrase,ch);   //checks for '-' in the phrase
	 
	if (FirstOccur != NULL) {
		while(*(Phrase+i)!= ch) {
			i++;
		}
		printf("The phrase '%s' contains a dash in position %d.\n",Phrase, (i+1));       
		exit(0);                         // exits the program if it contains the '-'.
	}
}

void DashIt(char *Phrase, char DashPhrase[MAX_INPUT]) {    //Creates the dashed version of the phrases
	int i=0;
	char *alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZZ";      //pointer containing the alphabet
	char *FirstOccur = NULL;
	for (i = 0; *(Phrase+i)!='\0'; i++) {
		DashPhrase[i] = toupper(*(Phrase+i));            //changes the phrases to uppercase
	}
	DashPhrase[strlen(Phrase)] = '\0';
	FirstOccur = strpbrk(DashPhrase, alphabet);
	while(FirstOccur!= NULL) {
		*FirstOccur ='-';
		FirstOccur = strpbrk(DashPhrase, alphabet);      // strpbrk puts the alphabet to dasedphrase.
	}

}

void StartGame(char ChosenPhrase[MAX_INPUT]) {          // function to start thr game
	#include "PhraseBank.txt"                           // include the text phrase from the phrase bank
	char DashPhrase[MAX_INPUT]={};
	int i=0;
	int j=0;
	int choice;
	printf("Welcome to %d STRIKES - YOU'RE OUT- the CSE version\n",STRIKES);     
	printf(" Please pick a phrase from the following menu\n");
	while (strcmp(PhraseBank[i],"") != 0) {            //stringcompares the phrasebank  with "" 
		CheckPhrase(PhraseBank[i]);
		DashIt(PhraseBank[i],DashPhrase);
		printf("%d.    %s\n", i+1, DashPhrase);        //prints the format in the prompt
		++i;
	}

	do {
		printf(" Enter choice from 1 to %d: ", i);      //runs the code till the choice is between 1-10.
		scanf("%d",&choice);
	} while (choice<1 || choice>i);

	for( j=0; j<strlen(PhraseBank[choice-1]); j++ ) {
	    ChosenPhrase[j] = *( PhraseBank[choice-1] + j );
	}

}


int GuessALetter(char Phrase[MAX_INPUT], char DashPhrase[MAX_INPUT] ,char UpperPhrase[MAX_INPUT]) {     //	GuessAletter function.
	
	char *FindGuess, Guess;
	char UpperCaseCopy [MAX_INPUT];
	int FoundALetter = 0;
	int strikes = 0;
	strcpy( UpperCaseCopy, UpperPhrase);             //Copies the upperphrase to uppercsecopy using string copy
	printf("%s",DashPhrase);
	printf("\nGuess a letter :\n" );
	scanf(" %c", &Guess);
	Guess = toupper(Guess);
	FindGuess = strchr(UpperCaseCopy, Guess);
	while (FindGuess != NULL) {
		FoundALetter = 1;
		DashPhrase[FindGuess- UpperCaseCopy] = Phrase[FindGuess- UpperCaseCopy];   //
		*FindGuess = '-';
		FindGuess= strchr(UpperCaseCopy,Guess);      //strchr finds the guessed character in the upperCaseCopy


	}
	return FoundALetter;
}

