#include "clickable.hpp"
using namespace dig;

bool Clickable::CheckForHover()
{
    if( m_sprite.getGlobalBounds().contains( sf::Mouse::getPosition().x, sf::Mouse::getPosition().y ) )
        return true;
    else
        return false;
}

bool Clickable::CheckForLeftClick()
{
    if(sf::Mouse::isButtonPressed(sf::Mouse::Left))
        return true;
    else
        return false;
}

bool Clickable::CheckForRightClick()
{
    if(sf::Mouse::isButtonPressed(sf::Mouse::Right))
        return true;
    else
        return false;
}

bool Clickable::CheckForMiddleClick()
{
    if(sf::Mouse::isButtonPressed(sf::Mouse::Middle))
        return true;
    else
        return false;
}
