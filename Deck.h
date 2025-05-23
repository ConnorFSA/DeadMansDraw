#ifndef DECK_H
#define DECK_H

#include <vector>

class Game;
class Card;

class Deck
{
private:
	std::vector<Card*> _cards;
	Game& _game;
public:
	// Constructor and destructor
	Deck(Game& game);
	~Deck();

	// Deck Functions
	void shuffle();
	Card* drawCard();
	void createDeck(Game* game);
	bool isEmpty();
	int remainingCards();

	// Getters
	std::vector<Card*>& getCards();
};

#endif // DECK_H