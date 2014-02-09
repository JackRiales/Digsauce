/* DigSauce SFML Source by Jack Riales, 2013 */

#ifndef OBJECT__HPP
#define OBJECT__HPP

#include <SFML/Graphics.hpp>

namespace dig
{

class Object
{

protected:
    std::string     m_label;
    sf::Vector2u    m_spr_res;
    sf::Sprite      m_sprite;
    double          m_hspeed;
    double          m_vspeed;
    std::vector<sf::IntRect> vct_sprite_rects;

public:

    /// Const/Dest
    Object();
    Object( const std::string& name, sf::Vector2u spr_res, sf::Texture& tex );
    ~Object();

    /// Getters and setters
    void            SetLabel( const std::string& label);
    void            SetSpriteRes(sf::Vector2u res);
    void            SetSpriteRes( unsigned int x, unsigned int y );
    void            SetSpriteTexture(sf::Texture& tex);
    void            SetIntrectCount(unsigned int n);
    void            SetSpeed( double hspeed, double vspeed );

    std::string&    GetLabel()      { return this->m_label;  }
    sf::Vector2u&   GetSpriteRes()  { return this->m_spr_res;}
    sf::Sprite&     GetSprite()     { return this->m_sprite; }
    double          GetHSpeed()     { return this->m_hspeed; }
    double          GetVSpeed()     { return this->m_vspeed; }
    int             GetIntrectCount(){ return this->vct_sprite_rects.size(); }
    std::vector<sf::IntRect>&   GetIntrectGroup()
                                {
                                    return this->vct_sprite_rects;
                                }

    /// Sprite and Intrect Modifiers
    void            CenterSpriteOrigin();
    void            SetSpriteOpacity( int opacity );
    void            SetCurrentIntrect( unsigned int index );
    void            DefineIntrect( unsigned int index, int top, int left );

    /// Maintainence
    virtual void    update();
    void            draw(sf::RenderWindow& window);

}; // Object

} // dig

#endif // OBJECT__HPP
