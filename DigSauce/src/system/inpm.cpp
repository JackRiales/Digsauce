#include "inpm.hpp"
using namespace dig;

bool input::KeyUp( KEYBOARD_CONTROL_STATE& kcs )
{
    switch(kcs)
    {
    case(ARROW):
        if(KEYPRESSED(KEY::Up))
            return true;
        break;
    case(WASD):
        if(KEYPRESSED(KEY::W))
            return true;
        break;
    }
    return false;
}

bool input::KeyDown( KEYBOARD_CONTROL_STATE& kcs )
{
    switch(kcs)
    {
    case(ARROW):
        if(KEYPRESSED(KEY::Down))
            return true;
        break;
    case(WASD):
        if(KEYPRESSED(KEY::S))
            return true;
        break;
    }
    return false;
}

bool input::KeyLeft( KEYBOARD_CONTROL_STATE& kcs )
{
    switch(kcs)
    {
    case(ARROW):
        if(KEYPRESSED(KEY::Left))
            return true;
        break;
    case(WASD):
        if(KEYPRESSED(KEY::A))
            return true;
        break;
    }
    return false;
}

bool input::KeyRight( KEYBOARD_CONTROL_STATE& kcs )
{
    switch(kcs)
    {
    case(ARROW):
        if(KEYPRESSED(KEY::Right))
            return true;
        break;
    case(WASD):
        if(KEYPRESSED(KEY::D))
            return true;
        break;
    }
    return false;
}
