#include "person.h"
#include "player.h"

Player::Player(std::string_view game_param)
    : m_game(game_param) // after the symbol : is Initializer list
{
}

std::ostream &operator<<(std::ostream &out, const Player &player)
{

    out << "Player : [ game : " << player.m_game
        << " names : " << player.get_first_name()
        << " " << player.get_last_name() << "]";
    return out;
}