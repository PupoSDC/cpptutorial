#pragma once
#include "Team.h"

class Game {

	private:
	
		Team * team_1;
		Team * team_2;
		size_t team_1_goals;
		size_t team_2_goals;

	public:

		Game( const Team &, const Team & );

		void scoreTeam1();

		void scoreTeam2();

		const Team & getTeam1() const;

		const Team & getTeam2() const;

		const Team & getWinner() const;

		size_t getTeam1Goals() const;

		size_t getTeam2Goals() const;

};



// Header file, header files should not contain method definitions.
// they exist as both a reference for you to use the code someone else did
// AND for the code to know what is implemented in the cpp files.
// It's almost like an interface. (cpp interfaces is something else)