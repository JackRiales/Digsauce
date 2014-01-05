/* DigSauce SFML Source by Jack Riales, 2013 */

#ifndef GAME__HPP
#define GAME__HPP

#include "level.hpp"
#include "../system/application.hpp"
#include "../system/inpm.hpp"

namespace dig
{

class Game
{
private:
    Application         m_app;
    std::vector<Level>  vct_level;

public:
    // Init / Deinit
    Game(){ vct_level.resize(1); }
    ~Game(){ ; }

    inline void         Run(const std::string& window_header, sf::Vector2u window_res)
                        {
                            m_app.SetHeader(window_header);
                            m_app.SetResolution(window_res);
                            while(m_app.isRunning())
                            {
                                m_app.Update();
                            }
                        }

    // Getters
    Application&        GetApplicationWindow()          { return this->m_app; }
    std::vector<Level>  GetLevelGroup()                 { return this->vct_level; }
    Level&              GetLevel(unsigned int index)    { return this->vct_level[index]; }

};

}

#endif // GAME__HPP
