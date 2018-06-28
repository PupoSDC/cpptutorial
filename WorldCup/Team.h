#pragma once
#include <string>

// Header file, header files should not contain method definitions.
// they exist as both a reference for you to use the code someone else did
// AND for the code to know what is implemented in the cpp files.
// It's almost like an interface. (cpp interfaces is somethign else)
class Team {

	private:

		std::string name;
		size_t games_played;
		size_t victories;
		size_t defeats;
		int    goals_scored;
		int    goals_against;

	public:

		Team( const std::string & name );

		const std::string & getName() const;

		int getGoalDifference() const;

		void setGamesPlayed( size_t games_played );

		void updateGamesPlayed();
};