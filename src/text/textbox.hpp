/* DigSauce SFML Source by Jack Riales, 2013 */

#ifndef TEXTBOX__HPP
#define TEXTBOX__HPP

#include <SFML/Graphics.hpp>
#include <sstream>

namespace dig
{

class TextBox
{
private:
    std::string m_string;
    sf::Text    m_text;
protected:
    // Update the text object's string
    void        update();
public:
    TextBox();
    ~TextBox(){ ; }

    // Load a font into the text object
    void            load( sf::Font& font );

    // Set the string to a given string
    void            SetString( const std::string& string );

    // Convert a variable to the string object
    void            VarToString( float var );

    // Convert the string object to a variable and return that variable
    float           StringToVar();

    // Draw the text object
    void            draw(sf::RenderTarget& window);

    std::string&    GetString()    { return this->m_string; }
    sf::Text&       GetTextObject(){ return this->m_text; }
};

}

#endif // TEXTBOX__HPP
