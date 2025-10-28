#include <iostream>
#include "Card.h"
#include "Creature.h"
#include "Land.h"
#include "Deck.h"

int main() {
    Deck deck;
    deck.addCard(new Creature("Elf Archer", 3, Creature::CreatureType::ARCHER, 2, 1));
    deck.addCard(new Land("Mystic Mountain", 0, Land::LandType::MOUNTAIN));
    deck.addCard(new Creature("Knight", 2, Creature::CreatureType::WARRIOR, 3, 4));

    deck.printDeck();
    std::cout << "Deck creature count: " << deck.countCreatures() << std::endl;
    std::cout << "Total Cards (overall): " << Card::getTotalCards() << std::endl;
    std::cout << "Total Decks: " << Deck::getTotalDecks() << std::endl;

    Deck deck2 = Deck(deck);
    std::cout << "Copied deck2 from deck. Deck2 size: " << deck2.size()
              << ", Deck1 size: " << deck.size() << std::endl;
    deck2.printDeck();
    std::cout << "Total Cards after copying decks: " << Card::getTotalCards() << std::endl;

    return 0;
}
