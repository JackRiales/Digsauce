#include "gfxm.hpp"
using namespace dig;

GraphicsManager::GraphicsManager()
{
    /* Nothing */
}

GraphicsManager::~GraphicsManager()
{
    /* Nothing */
}

bool GraphicsManager::CreateTexture( const std::string& directory )
{
    m_TextureGroup.resize( m_TextureGroup.size() + 1 );
    if( !m_TextureGroup.back().loadFromFile( directory ) )
    {
        return false;
    }
    return true;
}

void GraphicsManager::DestroyTexture( int index )
{
    m_TextureGroup.erase( m_TextureGroup.begin() + index );
}

sf::Texture& GraphicsManager::GetTextureIndex( int index )
{
    return m_TextureGroup[index];
}

std::vector<sf::Texture>& GraphicsManager::GetTextureGroup()
{
    return m_TextureGroup;
}
