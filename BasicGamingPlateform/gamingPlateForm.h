#pragma once
#include<string>
#include<iostream>
using namespace std;

//1-user class
class User {
protected:
	string userName;
	string email;
public:
	User(){}
	User(string userName, string email) {
		this->userName = userName;
		this->email = email;
	}
	virtual void displayProfile()const;
};

//2- Account class
class Account {
protected:
	string accountID;
	double balance;
public:
	Account(){}
	Account(string id, double b):accountID(id),balance(b){}
	void addFunds(double ba);
	void deductFunds(double ba);
};

//3-class Player use multiple inheritance

class Player :public User, public Account {
protected:
	string level;
	int score;
public:
	Player(){}
	Player(string userN,string em,string accId,double bala,string level,int score):User(userN,em),Account(accId,bala),
		level(level),score(score){}
	void displayProfile()const override;
	void earnPoints(int s);
	void playGame();

};

//class 4- Game
class Game {
protected:
	string title;
	string gameId;
public:
	
	Game(string title=" ",string gameId="--"):title(title),gameId(gameId){}
	virtual void displayGame()const;
};

// class 5-onlineGame derived fomr game
class OnlineGame:public Game {
protected:
	
	string server;
public:
	OnlineGame() {}
	OnlineGame(string title, string gameId, string server) :Game(title, gameId) {
		this->server = server;
	}

	void displayGame()const override;
};

//class 6-MobileGame derived from onlineGame

class MobileGame :public OnlineGame {
protected:
	string ostype;
public:
	MobileGame(){}
	MobileGame(string title, string gameId, string server, string ostype) :
		OnlineGame(title, gameId, server) {
		this->ostype = ostype;
	}

	void displayGame()const override;
};

//7-Manager class
class PlateForm {
protected:
	Player players[100];
	int playerCount;
	Game* games[100];
	int gameCount;
public:
	PlateForm() {
		playerCount = 0;
		gameCount = 0;
	}

	void addPlayer(const Player& player);
	void showAllPlayer()const;
	void addGame(Game* game);
	void showAllGame()const;
};