#include "Deck.h"
#include "Creature.h"
#include "Land.h"
#include <iostream>

int Deck::totalDecks = 0;

Deck::Deck() {
    totalDecks++;
}

Deck::Deck(const Deck& other) {
    totalDecks++;
    for (Card* c : other.cards) {
        cards.push_back(c->clone());
    }
}

Deck::~Deck() {
    for (Card* c : cards) {
        delete c;
    }
    totalDecks--;
}

void Deck::addCard(Card* card) {
    cards.push_back(card);
}

int Deck::size() const {
    return cards.size();
}

int Deck::countCreatures() const {
    int count = 0;
    for (Card* c : cards) {
        if (dynamic_cast<Creature*>(c)) count++;
    }
    return count;
}

void Deck::printDeck() const {
    std::cout << "Deck contains " << cards.size() << " cards:" << std::endl;
    for (Card* c : cards) {
        c->printInfo();
    }
}

int Deck::getTotalDecks() {
    return totalDecks;
}
