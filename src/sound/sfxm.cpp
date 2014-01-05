#include "sfxm.hpp"
using namespace dig;

SoundManager::SoundManager()
{
    /* Nothing */
}

SoundManager::~SoundManager()
{
    /* Nothing */
}

bool SoundManager::CreateSound( const std::string& directory )
{
    m_SoundBufferGroup.resize( m_SoundBufferGroup.size() + 1 );
    if(!m_SoundBufferGroup.back().loadFromFile( directory ))
    {
        return false;
    }
    return true;
}

void SoundManager::DestroySound( int index )
{
    m_SoundBufferGroup.erase( m_SoundBufferGroup.begin() + index );
}

sf::SoundBuffer& SoundManager::GetSoundIndex( int index )
{
    return m_SoundBufferGroup[index];
}

std::vector<sf::SoundBuffer>& SoundManager::GetSoundGroup()
{
    return m_SoundBufferGroup;
}
