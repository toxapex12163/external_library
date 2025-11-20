#ifndef TERM_UTILS_H
#define TERM_UTILS_H

typedef enum {
    RED,
    GREEN,
    YELLOW,
    BLUE,
    MAGENTA,
    CYAN
} Color;

/**
 * Clears the terminal screen completely.
 */
void clear_screen();

/**
 * Changes the text color for subsequent print statements.
 * @param c The color to change to (use the Color enum).
 */
void set_text_color(Color c);

/**
 * Resets the text color back to the system default.
 */
void reset_text_color();

/**
 * Prints a fancy divider line across the screen.
 */
void print_divider();

#endif
