#include "mouse_macos.h"

struct Position get_mouse_pos() {
    struct Position pos = {0, 0};
    CGEventRef ourEvent = CGEventCreate(NULL);
    CGPoint point = CGEventGetLocation(ourEvent);
    CFRelease(ourEvent);

    pos.x = point.x;
    pos.y = point.y;
    return pos;
}

void set_mouse_pos(int x, int y) {
    CGPoint point = CGPointMake(x, y);
    CGWarpMouseCursorPosition(point);
}

struct Size screen_size() {
    CGDirectDisplayID mainDisplay = CGMainDisplayID();
    struct Size size = {
        CGDisplayPixelsWide(mainDisplay),
        CGDisplayPixelsHigh(mainDisplay)
    };
    return size;
}
