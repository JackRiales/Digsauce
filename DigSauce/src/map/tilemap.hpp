/* DigSauce SFML Source by Jack Riales, 2013 */
/* Credit to SFML Vertex Array tutorial for this class
    If I could have figured out a way to do it myself I would have xP */

#ifndef TILEMAP__HPP
#define TILEMAP__HPP

#include "tile.hpp"

namespace dig
{

class TileMap : public sf::Drawable , public sf::Transformable
{

private:
    sf::VertexArray     m_grid;
    sf::Texture*        m_tex;
public:
    // Init / Deinit
    ~TileMap(){ ; }

    void                load(sf::Texture& tileset,
                             const int* tile_array,
                             sf::Vector2u tile_size,
                             unsigned int res_w,
                             unsigned int res_h  );

    void                draw( sf::RenderTarget& window, sf::RenderStates states ) const;

};

}

#endif // TILEMAP__HPP
