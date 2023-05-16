#ifndef SUIT_H
#define SUIT_H

#endif // SUIT_H

#pragma once

#include <iostream>



enum class Suit
    {
        Clubs,
        Diamonds,
        Hearts,
        Spades
    };

static const Suit AllSuitValues[] = { Suit::Clubs, Suit::Diamonds, Suit::Hearts,
Suit::Spades };


inline std::ostream& operator<<(std::ostream& os, Suit suit)
{
   switch (suit)
    {
      case Suit::Clubs: os << "Clubs";    break;
      case Suit::Diamonds: os << "Diamonds"; break;
      case Suit::Hearts: os << "Hearts";  break;
      case Suit::Spades: os << "Spades";   break;
      default: os.setstate(std::ios_base::failbit);
    }
    return os;
}
