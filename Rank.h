#ifndef RANK_H
#define RANK_H

#endif // RANK_H

#pragma once

#include <iostream>


enum class Rank
{
    Ace,
    Two,
    Three,
    Four,
    Five,
    Six,
    Seven,
    Eight,
    Nine,
    Ten,
    Jack,
    Queen,
    King
};

static const Rank AllRankValues[] = { Rank::Ace, Rank::Two, Rank::Three,
                                      Rank::Four, Rank::Five, Rank::Six, Rank::Seven, Rank::Eight, Rank::Nine,
                                      Rank::Ten, Rank::Jack, Rank::Queen, Rank::King};

inline std::ostream& operator<<(std::ostream& os, Rank rank)
{
    switch (rank)
    {
    case Rank::Ace: os << "Ace";    break;
    case Rank::Two: os << "Two"; break;
    case Rank::Three: os << "Three";  break;
    case Rank::Four: os << "Four";   break;
    case Rank::Five: os << "Five";    break;
    case Rank::Six: os << "Six"; break;
    case Rank::Seven: os << "Seven";  break;
    case Rank::Eight: os << "Eight";   break;
    case Rank::Nine: os << "Nine";   break;
    case Rank::Ten: os << "Ten";    break;
    case Rank::Jack: os << "Jack"; break;
    case Rank::Queen: os << "Queen";  break;
    case Rank::King: os << "King";   break;
    default: os.setstate(std::ios_base::failbit);
    }
    return os;
}
