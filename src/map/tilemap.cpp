#include "tilemap.hpp"
using namespace dig;

void TileMap::load( sf::Texture& tileset, const int* tile_array, sf::Vector2u tile_size, unsigned int res_w, unsigned int res_h )
{
    m_tex   = &tileset;

    // Create a grid
    m_grid.setPrimitiveType(sf::Quads);

    // Resize it to the given dimensions
    // (times 4 because of quads)
    m_grid.resize(res_w * res_h * 4);

    // Populate the array, with one quad per tile
    for(unsigned int i = 0; i < res_w; ++i)
        for(unsigned int i2 = 0; i2 < res_h; ++i2)
        {
            int tileCount   = tile_array[i + i2 * res_w];

            int tu          = tileCount % (tileset.getSize().x / tile_size.x);
            int tv          = tileCount / (tileset.getSize().x / tile_size.x);

            sf::Vertex* quad= &m_grid[(i + i2 * res_w) * 4];
            quad[0].position = sf::Vector2f(i * tile_size.x, i2 * tile_size.y);
            quad[1].position = sf::Vector2f((i + 1) * tile_size.x, i2 * tile_size.y);
            quad[2].position = sf::Vector2f((i + 1) * tile_size.x, (i2 + 1) * tile_size.y);
            quad[3].position = sf::Vector2f(i * tile_size.x, (i2 + 1) * tile_size.y);

            quad[0].texCoords = sf::Vector2f(tu * tile_size.x, tv * tile_size.y);
            quad[1].texCoords = sf::Vector2f((tu + 1) * tile_size.x, tv * tile_size.y);
            quad[2].texCoords = sf::Vector2f((tu + 1) * tile_size.x, (tv + 1) * tile_size.y);
            quad[3].texCoords = sf::Vector2f(tu * tile_size.x, (tv + 1) * tile_size.y);
        }
}

void TileMap::draw( sf::RenderTarget& window, sf::RenderStates states ) const
{
        // apply the transform
        states.transform *= getTransform();

        // apply the tileset texture
        states.texture = m_tex;

        // draw the vertex array
        window.draw(m_grid, states);
}
