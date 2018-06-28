#include "Team.h"
#include "Game.h"
#include <iostream>

int main(){
	
	Team * ireland;

	{
		ireland = new Team("ireland");
	}

	delete ireland;

	Team portugal = Team("Portugal");
	Team germany  = Team("Germany");

	Game first_game = Game(portugal,germany);
	first_game.scoreTeam1();
	first_game.scoreTeam1();
	first_game.scoreTeam1();
	first_game.scoreTeam1();
	first_game.scoreTeam1();
	first_game.scoreTeam1();
	first_game.scoreTeam1();
	first_game.scoreTeam2();
	std::cout 
		<< "And the winner was: " 
		<< first_game.getWinner()->getName()
		<< std::endl;
	return 0;
}
