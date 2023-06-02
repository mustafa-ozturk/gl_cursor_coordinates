#pragma once
#include <iostream>
#include <gl_textrenderer/gl_textrenderer.h>

class gl_cursor_coordinates
{
public:
    gl_cursor_coordinates(unsigned int screen_width, unsigned int screen_height);
    ~gl_cursor_coordinates();

    void set_cursor_pos(double xpos, double ypos);
private:
    gl_textrenderer* m_textrenderer;
    unsigned int m_screen_width;
    unsigned int m_screen_height;
    double m_cursor_x;
    double m_cursor_y;
};
