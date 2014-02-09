#include "textbox.hpp"
using namespace dig;

TextBox::TextBox()
{
    m_string = "";
}

void TextBox::update()
{
    m_text.setString(m_string);
}

void TextBox::load(sf::Font& font)
{
    m_text.setFont(font);
}

void TextBox::SetString(const std::string& string)
{
    m_string = string;
    update();
}

void TextBox::VarToString(float var)
{
    std::ostringstream  stream;
    stream << var;
    m_string = stream.str();
    update();
}

float TextBox::StringToVar()
{
    std::istringstream stream(m_string);
    float tmp;
    stream >> tmp;
    return tmp;
}

void TextBox::draw(sf::RenderTarget& window)
{
    window.draw(m_text);
}
