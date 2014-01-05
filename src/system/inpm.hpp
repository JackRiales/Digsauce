/* DigSauce SFML Source by Jack Riales, 2013 */

#ifndef INPM__HPP
#define INPM__HPP

#include <SFML/Graphics.hpp>

#define KEY         sf::Keyboard
#define KEYPRESSED  sf::Keyboard::isKeyPressed

/// Input Management File

namespace dig
{
    namespace input
    {
        enum KEYBOARD_CONTROL_STATE { WASD,ARROW };

        // Keyboard
        bool    KeyUp( KEYBOARD_CONTROL_STATE& kcs );
        bool    KeyDown( KEYBOARD_CONTROL_STATE& kcs );
        bool    KeyLeft( KEYBOARD_CONTROL_STATE& kcs );
        bool    KeyRight( KEYBOARD_CONTROL_STATE& kcs );
    }
}

#endif // INPM__HPP
