#include "Team.h"

Team::Team( const std::string & name ){
	this->name = name;
}

const std::string & Team::getName() const {
	return name;
}

int Team::getGoalDifference() const {
	return goals_scored - goals_against;
}

