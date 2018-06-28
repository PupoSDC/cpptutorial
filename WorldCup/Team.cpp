#include "Team.h"

Team::Team( const std::string & name ){
	this->name = name;
	this->games_played = std::vector< Game * >(0);
}

Team::~Team(){
	// Do nothing.
}


const std::string & Team::getName() const {
	return name;
}

int Team::getGoalDifference() const {

}

