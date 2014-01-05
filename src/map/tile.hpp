/* DigSauce SFML Source by Jack Riales, 2013 */

#ifndef TILE__HPP
#define TILE__HPP

#include <SFML/Graphics.hpp>

namespace dig
{

class Tile
{

private:
    sf::Sprite      m_tileSprite;
    sf::Vector2u    m_tileRes;
    bool            m_solid;

public:
    // Init/Deinit
    Tile();
    Tile( sf::Texture& tex, sf::Vector2u res, bool solid );
    ~Tile();

    // Getter and Setter
    sf::Sprite&     GetSprite();
    sf::Vector2u&   GetTileRes();
    bool            isSolid();
    void            SetSpriteTexture( sf::Texture& tex );
    void            SetTileRes( sf::Vector2u res );
    void            SetTileRes( unsigned int w, unsigned int h );
    void            SetSolid( bool solid );
    void            SetSolid();

};

}

#endif // TILE__HPP
