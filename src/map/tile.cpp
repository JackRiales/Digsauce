#include "tile.hpp"
using namespace dig;

Tile::Tile()
{
    m_tileRes = sf::Vector2u(32, 32);
    m_solid = false;
}

Tile::Tile( sf::Texture& tex, sf::Vector2u res, bool solid )
{
    m_tileSprite.setTexture(tex);
    m_tileRes   = res;
    m_solid     = solid;
}

Tile::~Tile()
{
    /* Nothing */
}

sf::Sprite& Tile::GetSprite()
{
    return this->m_tileSprite;
}

sf::Vector2u& Tile::GetTileRes()
{
    return this->m_tileRes;
}

bool Tile::isSolid()
{
    return this->m_solid;
}

void Tile::SetSpriteTexture( sf::Texture& tex )
{
    m_tileSprite.setTexture(tex);
}

void Tile::SetTileRes( sf::Vector2u res )
{
    m_tileRes   = res;
}

void Tile::SetTileRes( unsigned int w, unsigned int h )
{
    m_tileRes.x = w;
    m_tileRes.y = h;
}

void Tile::SetSolid( bool solid )
{
    m_solid = solid;
}

void Tile::SetSolid()
{
    m_solid = !m_solid;
}
