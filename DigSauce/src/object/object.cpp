#include "object.hpp"
using namespace dig;

Object::Object()
{
    m_label     = "Object";
    m_spr_res.x = 32;
    m_spr_res.y = 32;
    m_hspeed    = 0;
    m_vspeed    = 0;
    vct_sprite_rects.resize(1);
    vct_sprite_rects[0] = sf::IntRect(0, 0, m_spr_res.x, m_spr_res.y );
}

Object::Object( const std::string& name, sf::Vector2u spr_res, sf::Texture& tex )
{
    m_label     = name;
    m_spr_res   = spr_res;
    m_hspeed    = 0;
    m_vspeed    = 0;
    vct_sprite_rects.resize(1);
    vct_sprite_rects[0] = sf::IntRect(0, 0, m_spr_res.x, m_spr_res.y );

    m_sprite.setTexture( tex );
    m_sprite.setTextureRect( vct_sprite_rects[0] );
}

Object::~Object()
{
    /* Nothing */
}

void Object::SetLabel( const std::string& label )
{
    m_label     = label;
}

void Object::SetSpriteRes( sf::Vector2u res )
{
    m_spr_res   = res;
}

void Object::SetSpriteRes( unsigned int x, unsigned int y )
{
    m_spr_res.x = x;
    m_spr_res.y = y;
}

void Object::SetSpriteTexture( sf::Texture& tex )
{
    m_sprite.setTexture(tex);
}

void Object::SetIntrectCount( unsigned int n )
{
    vct_sprite_rects.resize(n);
}

template< typename T >
void Object::SetSpeed( T hspeed, T vspeed )
{
    m_hspeed    = hspeed;
    m_vspeed    = vspeed;
}

void Object::CenterSpriteOrigin()
{
    m_sprite.setOrigin( m_spr_res.x/2 , m_spr_res.y/2 );
}

void Object::SetSpriteOpacity( int opacity )
{
    if(opacity >= 0 && opacity <= 255)
    {
        m_sprite.setColor(sf::Color(255,255,255,opacity));
    }
}

void Object::SetCurrentIntrect( unsigned int index )
{
    if( index >! vct_sprite_rects.size()+1 )
    {
        m_sprite.setTextureRect( vct_sprite_rects[index] );
    }
}

void Object::DefineIntrect( unsigned int index, int top, int left )
{
    if( index >! vct_sprite_rects.size()+1 )
    {
        vct_sprite_rects[index].top = top;
        vct_sprite_rects[index].left= left;
        vct_sprite_rects[index].width= m_spr_res.x;
        vct_sprite_rects[index].height= m_spr_res.y;
    }
}

void Object::update()
{
    m_sprite.move( m_hspeed, m_vspeed );
}

void Object::draw( sf::RenderWindow& window )
{
    window.draw(m_sprite);
}
