#include <stdio.h>
#include "term_utils.h"

// ANSI Escape codes
#define ANSI_RESET   "\033[0m"
#define ANSI_CLEAR   "\033[H\033[J"

void clear_screen() {
    printf("%s", ANSI_CLEAR);
}

void set_text_color(Color c) {
    switch(c) {
        case RED:     printf("\033[1;31m"); break;
        case GREEN:   printf("\033[1;32m"); break;
        case YELLOW:  printf("\033[1;33m"); break;
        case BLUE:    printf("\033[1;34m"); break;
        case MAGENTA: printf("\033[1;35m"); break;
        case CYAN:    printf("\033[1;36m"); break;
        default:      printf("%s", ANSI_RESET);
    }
}

void reset_text_color() {
    printf("%s", ANSI_RESET);
}

void print_divider() {
    printf("\n--------------------------------------------------\n");
}
