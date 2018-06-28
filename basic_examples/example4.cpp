#include <string>
#include <iostream>
// C style POD tutorial
// POD - Plain Old Data

// C style struct defining a game
struct Game {
	int team_a_score;
	int team_b_score;
	std::string team_a_name;
	std::string team_b_name;
};

void printGame( const Game & game ){
	std::cout 
		<< "Match between " << game.team_a_name 
		<< " and " << game.team_b_name
		<< " Final Score "
		<< game.team_a_score << " vs "
		<< game.team_b_score
		<< std::endl;
}

int main() {

	int a = 124;
	Game game = Game();
	game.team_a_name  = "Portugal";
	game.team_b_name  = "Iran";
	game.team_a_score = 1;
	game.team_b_score = 1;

	printGame( game );
}