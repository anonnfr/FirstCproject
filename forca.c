#include <stdio.h>
// First C project, hangman
// Thu Nov  2 11:30:28 AM -03 2023

#define TOT_CAMPAIGN_WORDS 1

void choose_game_mode();
void campaign_mode();
void play(char word[20]);

const char CAMPAIGN_MODE_WORDS[TOT_CAMPAIGN_WORDS][20] = {
	"Easy\0", "Peasy\0"
};

int main() {
	printf("Welcome to the Based Hangman Game by Meself!\n");
	choose_game_mode();

	return 0;
}

void choose_game_mode() {
	printf("Do you want to:\n1 - Play Campaign\n2 - Exit\nChoose a number: ");
	int player_choice;
	scanf("%d", &player_choice);
	switch (player_choice) {
	case 1:
	campaign_mode();
	break;
	case 2:
	break;
	default:				
	printf("\nInvalid Choice. Please, insert 1 or 2!\n");
	choose_game_mode();
	}

}

void campaign_mode() {
	printf("\nCampaign Mode!\n");

	for (int round = 0; round < TOT_CAMPAIGN_WORDS; round++ ) {
	printf("Round %d\nThis is the word:\n");
	char guess[1], word[20];
	strcpy(word, CAMPAIGN_MODE_WORDS[round]);

	printf("\n %sd\n\n", word); // Change later
	printf("Try guessing a letter.\nYour guess: ");
	scanf(" %c", &guess);
	printf("\nLooking for %c...\n", guess);
	}
}

void play(char word[20]) {
	char guess;
	printf("\n %sd\n\n", word);
	printf("Try guessing one letter.\nYour guess: ");
	scanf("c", &guess);

}
