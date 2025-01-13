/* ncurses.c */
#include <ncurses.h>

int main(){
    
    char letter;

    initscr(); // initiate screen
    printw("press any key");
    refresh();

    letter = getch();
    clear();

    printw("you pushed: %c", letter);
    refresh();

    getch();
    endwin();

    return 0;
}
