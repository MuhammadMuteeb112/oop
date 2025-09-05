#include "gamingPlateForm.h"

void User::displayProfile()const {
	cout << "User Name:" << userName << ", Email:" << email << endl;
}

void Account::addFunds(double ba) {
	balance = balance + ba;
}

void Account::deductFunds(double ba) {
	balance = balance - ba;
}

void Player::displayProfile()const {
	User::displayProfile();
	cout << "  Account ID:" << accountID << " , Balance :" << balance <<
		" , Level :" << level << "  , Score:" << score << endl;
}

void Player::earnPoints(int s) {
	score = score + s;
}

void Player::playGame() {
	cout << userName << " is Playing game!" << endl;
}

void Game::displayGame()const {
	cout << "Title :" << title << ", Game-Id :" << gameId << endl;
}

void OnlineGame::displayGame()const {
	Game::displayGame();
	cout << "Server :" << server << endl;
}

void MobileGame::displayGame() const{
	OnlineGame::displayGame();
	cout<<"Operating System:" << ostype << endl;
}

void PlateForm::addPlayer(const Player& player) {
	if (playerCount < 100) {
		players[playerCount] = player;
		playerCount++;
	}
}

void PlateForm::showAllPlayer()const {
	cout << "\n ----All Players----\n";
	for (int i = 0; i < playerCount; i++) {
		players[i].displayProfile();
	}
}

void PlateForm::addGame(Game* game) {
	if (gameCount < 100) {
		games[gameCount] = game;
		gameCount++;
	}
}

void PlateForm::showAllGame()const {
	cout << "\n ----All Games----\n";
	for (int i = 0; i < gameCount; i++) {
		games[i]->displayGame();
	}
}
