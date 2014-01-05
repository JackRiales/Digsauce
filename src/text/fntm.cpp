#include "fntm.hpp"
using namespace dig;

FontManager::FontManager()
{
    /* Nothing */
}

FontManager::~FontManager()
{
    /* Nothing */
}

bool FontManager::CreateFont( const std::string& directory )
{
    m_FontGroup.resize(m_FontGroup.size() + 1);
    if(!m_FontGroup.back().loadFromFile(directory))
        return false;

    return true;
}

void FontManager::DestroyFont(unsigned int index)
{
    m_FontGroup.erase(m_FontGroup.begin()+index);
}
