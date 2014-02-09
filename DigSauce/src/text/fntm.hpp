/* DigSauce SFML Source by Jack Riales, 2013 */

#ifndef FNTM__HPP
#define FNTM__HPP

#include <SFML/Graphics.hpp>

namespace dig
{

class FontManager
{
private:
    std::vector<sf::Font>   m_FontGroup;
public:
    FontManager();
    ~FontManager();

    bool        CreateFont( const std::string& directory );
    void        DestroyFont( unsigned int index );

    std::vector<sf::Font>   GetFontGroup()                  { return this->m_FontGroup; }
    sf::Font&               GetFont( unsigned int index )   { return this->m_FontGroup[index]; }

};

}

#endif // FNTM__HPP
