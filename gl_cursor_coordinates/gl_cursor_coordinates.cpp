#include "gl_cursor_coordinates.h"

gl_cursor_coordinates::gl_cursor_coordinates(unsigned int screen_width,
                                             unsigned int screen_height)
        : m_screen_width(screen_width), m_screen_height(screen_height)
{
    m_textrenderer = new gl_textrenderer(m_screen_width,
                                         m_screen_height,
                                         "./assets/UbuntuMono-R.ttf",
                                         12,
                                         {0.0f, 1.0f, 0.0f, 1.0f});
}

gl_cursor_coordinates::~gl_cursor_coordinates()
{
    delete m_textrenderer;
}

void gl_cursor_coordinates::set_cursor_pos(double xpos, double ypos)
{
    m_cursor_x = xpos;
    m_cursor_y = m_screen_height - ypos;
}

void gl_cursor_coordinates::draw()
{
    std::string str =
            std::to_string((int) m_cursor_x) + ", " +
            std::to_string((int) m_cursor_y);
    m_textrenderer->render_text(str, m_cursor_x + 5, m_cursor_y + 5);
}
