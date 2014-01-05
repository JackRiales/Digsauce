/* DigSauce SFML Source by Jack Riales, 2013 */

#ifndef CAMERA__HPP
#define CAMERA__HPP

#include "../object/object.hpp"

namespace dig
{

class Camera
{

private:
    std::vector<sf::View>   vct_views;

public:
    // Init / Deinit
    ~Camera();

    // Getters
    std::vector<sf::View>&  GetViewGroup()  { return this->vct_views; }
    sf::View&               GetView( int index ) { return this->vct_views[index]; }

};

}

#endif // CAMERA__HPP
