#include "gl_cursor_coordinates.h"

gl_cursor_coordinates::gl_cursor_coordinates(unsigned int screen_width,
                                             unsigned int screen_height)
        : m_screen_width(screen_width), m_screen_height(screen_height)
{
    m_textrenderer = new gl_textrenderer(screen_width,
                                         screen_height,
                                         "./assets/UbuntuMono-R.ttf",
                                         20,
                                         {1.0f, 1.0f, 1.0f, 1.0f});
}

gl_cursor_coordinates::~gl_cursor_coordinates()
{
    delete m_textrenderer;
}

void gl_cursor_coordinates::set_cursor_pos(double xpos, double ypos)
{
    m_cursor_x = xpos;
    m_cursor_y = m_screen_height - ypos;

    std::cout << m_cursor_x << ", " << m_cursor_y << std::endl;
}

