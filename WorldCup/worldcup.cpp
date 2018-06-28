#include "Team.h"
#include "Game.h"
#include <iostream>

int main(){
	


	Team portugal = Team("Portugal");
	Team germany  = Team("Germany");
	Team ireland  = Team("Ireland");

	Game first_game  = Game(portugal,germany);
	Game second_game = Game(portugal,ireland);

	first_game.scoreTeam1();
	first_game.scoreTeam1();
	first_game.scoreTeam1();
	first_game.scoreTeam1();
	first_game.scoreTeam1();
	first_game.scoreTeam1();
	first_game.scoreTeam1();


	std::cout << "The winner of the first game was " << first_game.getWinner()->getName() << std::endl;

	portugal.addGame( first_game  );
	portugal.addGame( second_game );

	std::cout << "Portugal has " << portugal.getNumberOfVictories() << " Victories!" << std::endl;
	std::cout << "Portugal has " << portugal.getNumberOfDefeats()   << " Defeats!  " << std::endl;
	std::cout << "Portugal has " << portugal.getNumberOfTies()      << " Ties!"      << std::endl;
	return 0;
}
