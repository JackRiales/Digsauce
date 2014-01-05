/* DigSauce SFML Source by Jack Riales, 2013 */

#ifndef GFXM__HPP
#define GFXM__HPP

#include <SFML/Graphics.hpp>

namespace dig
{

class GraphicsManager
{

private:

    std::vector<sf::Texture>    m_TextureGroup;

public:

    // Construct/Destruct
    GraphicsManager();
    ~GraphicsManager();

    // Create a new texture index
    bool                        CreateTexture( const std::string& directory );

    // Destroy a texture at the index
    void                        DestroyTexture( int index );

    // Return a given index in the texture vector
    sf::Texture&                GetTextureIndex( int index );

    // Return the Texture Vector
    std::vector<sf::Texture>&   GetTextureGroup();

};

}

#endif // GFXM__HPP
