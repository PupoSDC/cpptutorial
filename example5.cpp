#include <string>
#include <iostream>
// C style POD tutorial
// POD - Plain Old Data

// C style struct defining a game
class Game {

	// This properties/methods can only be accessed by THIS CLASS
	private:

		int team_a_score;
		int team_b_score;
		std::string team_a_name;
		std::string team_b_name;

	protected:

	// can be accessed from outside the class.
	public:


		Game( 
			int team_a_score,
			int team_b_score,
			const std::string & team_a_name,
			const std::string & team_b_name ){

			this->team_a_score = team_a_score;
			this->team_b_score = team_b_score;
			this->team_a_name  = team_a_name;
			this->team_b_name  = team_b_name;
		}

		// Method to print a game
		void printGame( ){
			std::cout 
				<< "Match between " << team_a_name 
				<< " and " << team_b_name
				<< " Final Score "
				<< team_a_score << " vs "
				<< team_b_score
				<< std::endl;
		}	
};



int main() {

	int a = 124;
	Game game = Game(1,1, "Portugal", "Iran");
	game.printGame();

	game.team_a_score;
}
