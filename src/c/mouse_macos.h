#include <CoreGraphics/CoreGraphics.h>
#include <QuartzCore/QuartzCore.h>
#include "mouse.h"


// get_mouse_pos gets the mouse position and returns it.
struct Position get_mouse_pos();
// set_mouse_pos moves the position of the mouse to X, Y.
void set_mouse_pos(int x, int y);
// screen_size returns the width and height of the screen.
struct Size screen_size();

// Hide and show the mouse cursor.
void hide_mouse();
void show_mouse();
