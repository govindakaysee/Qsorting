//Govinda KC    
#ifndef _GAMELIB_H
#define _GAMELIB_H

#define MAX_INPUT 81
#define STRIKES 3

void StartGame(char ChosenPhrase[MAX_INPUT]);
void CheckPhrase(char *phrase);
int GuessALetter(char Phrase[MAX_INPUT], char DashPhrase[MAX_INPUT] ,char UpperPhrase[MAX_INPUT]);
void DashIt(char *Phrase, char DashPhrase[MAX_INPUT]);

#endif




