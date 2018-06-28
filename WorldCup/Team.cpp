#include "Team.h"
#include "Game.h"

Team::Team( const std::string & name ){
	this->name = name;
	this->games_played = std::vector< const Game * >(0);
}

Team::~Team(){
	// Do nothing.
}


const std::string & Team::getName() const {
	return name;
}

int Team::getGoalDifference() const {

}

size_t Team::getNumberOfVictories() const {
	size_t response = 0;
	for( size_t i = 0; i < games_played.size(); i++ ){
		if( games_played[i]->getWinner() == this ){
			response++;
		}
	}
	return response;
}

size_t Team::getNumberOfDefeats() const {
	size_t response = 0;
	for( size_t i = 0; i < games_played.size(); i++ ){
		if( games_played[i]->getLooser() == this ){
			response++;
		}
	}
	return response;
}

size_t Team::getNumberOfTies() const {
	// assumes that no games do not contain the team.
	return this->games_played.size() 
		- this->getNumberOfVictories() 
		- this->getNumberOfDefeats();
}

void Team::addGame( const Game & game ) {
	// tests if the team is on the game
	if( game.getTeam1() != this && game.getTeam2() != this ){
		return;
	}
	// If the game already exists
	for( size_t i = 0; i < games_played.size(); i++ ){
		if( &game == games_played[i] ){
			return;
		}
	}
	games_played.push_back( &game );
}
