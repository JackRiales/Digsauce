/* DigSauce SFML Source by Jack Riales, 2013 */

#ifndef SFXM__HPP
#define SFXM__HPP

#include <SFML/Audio.hpp>

namespace dig
{

class SoundManager
{

private:

    std::vector<sf::SoundBuffer>    m_SoundBufferGroup;

public:

    // Construct/Destruct
    SoundManager();
    ~SoundManager();

    // Add new sound or open new music file
    bool                            CreateSound( const std::string& directory );

    // Destroy sound or music object
    void                            DestroySound( int index );

    // Return sound index or music index
    sf::SoundBuffer&                GetSoundIndex( int index );

    // Return sound buffer group or music group
    std::vector<sf::SoundBuffer>&   GetSoundGroup();

};

}

#endif // SFXM__HPP
