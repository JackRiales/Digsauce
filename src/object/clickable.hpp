/* DigSauce SFML Source by Jack Riales, 2013 */

#ifndef CLICKABLE__HPP
#define CLICKABLE__HPP

#include "object.hpp"

namespace dig
{

class Clickable : public Object
{

public:
    bool    CheckForHover();
    bool    CheckForLeftClick();
    bool    CheckForRightClick();
    bool    CheckForMiddleClick();

};

}
#endif // CLICKABLE__HPP
