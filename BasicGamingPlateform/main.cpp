#include"gamingPlateForm.h"

int main() {
	PlateForm pF;
	Player p1("Ali", "ali123@gmail.com", "stdur123", 500.0, "Medium-4", 300);
	Player p2("Hassan", "hassan333@gmail.com", "mnour123", 900.0, "Hard-2", 400);
	Player p3("Sara", "sara233@gmail.com", "unour234", 200.0, "Easy-3", 100);
	pF.addPlayer(p1);
	pF.addPlayer(p2);
	pF.addPlayer(p3);
	
	p3.playGame();
	
	//Applying polymorphism

	Game* g1 = new Game("Chess","1");
	Game* g2 = new OnlineGame("PUBG","2", "Asia");
	Game* g3 = new MobileGame("Clash of Clans","3", "Global", "Android");

	pF.addGame(g1);
	pF.addGame(g2);
	pF.addGame(g3);

	pF.showAllPlayer();
	cout << "-------------------------\n";
	pF.showAllGame();

	return 0;
}