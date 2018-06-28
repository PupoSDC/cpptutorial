#pragma once
#include <vector>
#include <string>

class Game;

class Team {

	private:

		std::string name;
		
		std::vector< const Game * > games_played;

	public:

		/** Team constructor                                                  */
		Team( const std::string & name );

		/** Team destructor */
		~Team();

		/** @return The name of the team                                      */
		const std::string & getName() const;

		/** @return the goal difference of a team                             */
		int getGoalDifference() const;

		size_t getNumberOfVictories() const;

		size_t getNumberOfDefeats() const;

		size_t getNumberOfTies() const;

		/** Adds a game to the list of games this team played                 */
		void addGame( const Game & game );

};