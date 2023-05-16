#ifndef CARD_H
#define CARD_H
#pragma once

#include "Rank.h"
#include "Suit.h"

class Card
{
private:
    Rank Rank;
    Suit Suit;
    bool bFaceUp{ false };

public:

    Card(enum Rank Rank,enum Suit Suit);

    enum Rank GetRank();

    /**
         * Gets the card suit
         * @return suit
        */
    exercise9::Suit GetSuit();

    /**
         * Gets whether or not the card is face up
         * @return true if face up, false if face down
        */
    bool IsFaceUp();

    /**
         * Flips the card over
        */
    void FlipOver();

    /**
         * Flips the card over
        */
    void Print();
};

#endif // CARD_H
