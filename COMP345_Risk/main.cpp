#include "Dice.h"
#include "Player.h"
#include "Time.h"
#include "main.h"
#include "Game.h"
#include "GameStatus.h"
#include "Tournament.h"

#include <iostream>
using namespace std;

int main() {
	loadMenu();
	return 0;
}

void loadMenu() {
	int selection;
	cout << "Welcome to Team18's COMP345 Risk Game!" << endl;
	
	do {
		// Menu for a2.
		cout << "\n\nAssignment 4 Debug Menu" << endl;
		cout << "1- Start Manual Game" << endl;
		cout << "2- Start Tournament Demo" << endl;
		cout << "3- Exit" << endl;

		cin >> selection;
		switch (selection) {
		case 1://Starts game.
			startManualGame();
			break;
		case 2://Starts game.
			startTournament();
			break;
		case 3://Exit
			exit(0);
			break;
		default:
			break;
		}
	} while (selection != 3);
}

void startManualGame() {
	//start game here. (Game.cpp)
	Game *game = new Game();
	GameStatus *gameStatus = new GameStatus(game);
	game->startTestGame();
}

void startTournament() {
	Tournament *tournament = new Tournament();
}