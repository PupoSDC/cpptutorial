#pragma once
#include <stdexcept>
#include <iostream>
#include "Team.h"

// A completely encapsulated class for a game. 
// 101 OOP --> Encapsulation uber alles
class Game {

	private:
	
		const Team * team_1;
		const Team * team_2;
		size_t team_1_goals;
		size_t team_2_goals;

	public:

		Game( const Team &, const Team & );

		Game( 
			const Team & team_1, 
			const Team & team_2, 
			size_t team_1_goals, 
			size_t team_2_goals 
		);

		void scoreTeam1();

		void scoreTeam2();

		const Team * getTeam1() const;

		const Team * getTeam2() const;

		const Team * getWinner() const;

		size_t getTeam1Goals() const;

		size_t getTeam2Goals() const;

};

// References CANNOT be NULL. User pointers instead.
// Can my variable ever be unnassigned? If yes use references.


// Header file, header files should not contain method definitions.
// they exist as both a reference for you to use the code someone else did
// AND for the code to know what is implemented in the cpp files.
// It's almost like an interface. (cpp interfaces is something else)