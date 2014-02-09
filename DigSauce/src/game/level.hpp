/* DigSauce SFML Source by Jack Riales, 2013 */

#ifndef LEVEL__HPP
#define LEVEL__HPP

#include "layer.hpp"

namespace dig
{

class Level
{
private:
    std::vector<Layer>  vct_layer;
public:
    // Init / Deinit
    Level(){ vct_layer.resize(1); }
    ~Level(){ ; }

    // Getters
    std::vector<Layer>  GetLayerGroup()                 { return this->vct_layer; }
    Layer&              GetLayer( unsigned int index )  { return this->vct_layer[index]; }
};

}

#endif // LEVEL__HPP
