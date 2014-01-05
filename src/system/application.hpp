/* DigSauce SFML Source by Jack Riales, 2013 */

#ifndef APPLICATION__HPP
#define APPLICATION__HPP

#include <SFML/Graphics.hpp>

namespace dig
{

class Application
{

private:
    sf::RenderWindow    m_window;
    sf::Vector2u        m_resolution;
    std::string         m_header;
    sf::Uint32          m_windowStyle;
    bool                m_fullscreen;
    bool                m_running;

protected:
    // Performs setup of the application
    // also performs srand()
    void    Setup( sf::Vector2u res, const std::string& header );

    // Creates a window based on the values currently set
    void    CreateWindow();

public:
    // Creates an application at default values
    Application();

    // Creates an application with the given values
    Application( sf::Vector2u res, const std::string& header );

    // Destructor
    ~Application();

    // Window maintainence functions
    void    Update();   // Essentially the main loop
    void    StartDraw();// "Clear"
    void    EndDraw();  // "Display"

    // Sets the window resolution
    void    SetResolution( sf::Vector2u res );

    // Set the header to the given string
    void    SetHeader( const std::string& header );

    // Toggles the fullscreen
    void    SetFullscreen();

    // Sets the fullscreen to the given value
    void    SetFullscreen( bool isFullscreen );

    // Returns private elements
    sf::RenderWindow&   GetWindow()     { return m_window;      }
    sf::Vector2u&       GetResolution() { return m_resolution;  }
    bool                isFullscreen()  { return m_fullscreen;  }
    bool                isRunning()     { return m_running;     }

};

}

#endif // APPLICATION__HPP
