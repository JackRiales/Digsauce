#include "application.hpp"
using namespace dig;

Application::Application()
{
    Setup( sf::Vector2u( 640, 480 ), "DIGSAUCE APP" );
}

Application::Application( sf::Vector2u res, const std::string& header )
{
    Setup( res, header );
}

Application::~Application()
{
    m_window.close();
}

void Application::Setup( sf::Vector2u res, const std::string& header )
{
    srand( (unsigned)time(NULL) );

    m_resolution.x  = res.x;
    m_resolution.y  = res.y;
    m_header        = header;
    m_fullscreen    = false;
    m_running       = true;
    CreateWindow();
}

void Application::CreateWindow()
{
    if( m_fullscreen )
        m_windowStyle   = sf::Style::Fullscreen;
    else
        m_windowStyle   = sf::Style::Close;

    m_window.create( sf::VideoMode( m_resolution.x, m_resolution.y ), m_header, m_windowStyle );
}

void Application::Update()
{
        sf::Event event;
        while( m_window.pollEvent( event ) )
        {
            if( event.type == sf::Event::Closed || event.key.code == sf::Keyboard::Escape )
                m_running   = false;
            else if( event.key.code == sf::Keyboard::F5 )
                SetFullscreen();
        }
}

void Application::StartDraw()
{
    m_window.clear( sf::Color::Black );
}

void Application::EndDraw()
{
    m_window.display();
}

void Application::SetResolution( sf::Vector2u res )
{
    m_resolution    = res;
}

void Application::SetHeader( const std::string& header )
{
    m_header        = header;
}

void Application::SetFullscreen()
{
    m_fullscreen    = !m_fullscreen;
    CreateWindow();
}

void Application::SetFullscreen(bool isFullscreen)
{
    m_fullscreen    = isFullscreen;
    CreateWindow();
}
