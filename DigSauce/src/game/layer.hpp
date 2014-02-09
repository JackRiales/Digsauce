/* DigSauce SFML Source by Jack Riales, 2013 */

#ifndef LAYER__HPP
#define LAYER__HPP

#include "../graphics/gfxm.hpp"
#include "../sound/sfxm.hpp"
#include "../text/fntm.hpp"
#include "../map/tilemap.hpp"
#include "../map/camera.hpp"

namespace dig
{

class Layer
{
public:
    GraphicsManager gfxm;
    FontManager     fntm;
    SoundManager    sfxm;
    TileMap         t_map;
    Camera          camera;
};

}

#endif // LAYER__HPP
