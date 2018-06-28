#include "Game.h"

Game::Game( const Team & team_1, const Team & team_2 ) {
	this->team_1 = &team_1;
	this->team_2 = &team_2;
	this->team_1_goals = 0;
	this->team_2_goals = 0;
	// (*a).getName(); ===> a->getName();
}

void Game::scoreTeam1() {
	std::cout 
		<< "What a goal! " << team_1->getName() 
		<< " scored!" 
		<< std::endl;
	this->team_1_goals++;
}

void Game::scoreTeam2() {
	std::cout 
		<< "What a goal! " << team_2->getName() 
		<< " scored!" 
		<< std::endl;
	team_2_goals++;
}

const Team * Game::getTeam1() const {
	return team_1;
}

const Team * Game::getTeam2() const {
	return team_2;
}

const Team * Game::getWinner() const {
	if( team_1_goals > team_2_goals ){
		return team_1;
	} 
	if( team_1_goals < team_2_goals ){
		return team_2;
	}
	return NULL;
}

size_t Game::getTeam1Goals() const {
	return team_1_goals;
}

size_t Game::getTeam2Goals() const {
	return team_2_goals;
};
