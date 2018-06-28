#pragma once
#include <vector>
#include <string>

class Game;

class Team {

	private:

		std::string name;
		
		std::vector< Game * > games_played;

	public:

		/** Team constructor                                                  */
		Team( const std::string & name );

		/** Team destructor */
		~Team();

		/** @return The name of the team                                      */
		const std::string & getName() const;

		/** @return the goal difference of a team                             */
		int getGoalDifference() const;

		/** @return The number of games the team played                        */
		void updateWithGame( const Game & game );

};