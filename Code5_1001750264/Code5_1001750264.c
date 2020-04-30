//Govinda KC    
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "Gamelib.h"

int main(void) {
	char Phrase[MAX_INPUT] = {};             //initialize following three null arrays
	char DashPhrase[MAX_INPUT] = {};
	char UpperPhrase[MAX_INPUT] = {};
	int NumStk, containLetter, i;
	char *p, dash;
	int strikes = 0;

	StartGame(Phrase);                       // passing the startgame with empty array phrase
	DashIt(Phrase,DashPhrase);               // passing the dashit with filled phrase and empty array dashedphrase

	for (i = 0; i<strlen(Phrase); i++) {
		UpperPhrase[i] = toupper(*(Phrase+i));  //uppercases the each character of the phrase.
	}
	dash = '-';
	p = strchr(DashPhrase, dash);             //finds the dash in the Dashphrase 

	do {																//do while loop to check if guessaletter returns true or false
		containLetter=GuessALetter(Phrase,DashPhrase,UpperPhrase);       
		if (containLetter==0) {
			++strikes;                                 					//increases strike if the letter doesn't match the letter in the phrase
			printf(" Strike %d \n",strikes);
		 }
	} while ( strchr(DashPhrase, dash) != NULL && strikes<STRIKES);     //condtion to check if the player has not won and also the strikes is less the Strikes
	if (strikes<STRIKES) {   											//checks if the Strikes is less then STRIKES to check if the game is won or lost.
		printf( "You figured it out!!\n");
		printf("The phrase is: '%s'!!\n",Phrase);
		printf("YOU WIN!!!\n");  										//Prints if the players win it 
	 } else {
		printf("\n3 STRIKES - YOU'RE OUT!!\n");							// Prints if the players cannot guess the letter with 3 strikes.
		printf("\nGame over!!\n");										// Game over if strikes equals 3.
	 }
}



