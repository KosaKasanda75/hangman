//
//  hClass.h
//  hangman
//
//  Created by Kosa Kasanda on 07.09.23.
//

#ifndef hClass_h
#define hClass_h

#include <iostream>
#include <stdio.h>
#include <ncurses.h>

#include "hWords.h"

#define totalCATEGORIES 3

class hman {
public:
    hman();
    void newGame();
    void setCategory(WINDOW * win);
    void chooseWord();
    void newmv();
    void setMenu();
    bool checkMenu();
    int getmv();
private:
    bool continueGame;
    bool menu;
    int category;
    int word;
    int highlight;
};

hman::hman(){
    
}

void hman::setMenu(){
    menu = true;
    highlight = 0;
}

bool hman::checkMenu(){
    return menu;
}

void hman::setCategory(WINDOW * win){
    
    for (int i=0;i<totalCATEGORIES;i++){
        if (i == highlight)
            wattron(win, A_STANDOUT);
        mvwprintw(win, i+1, 1, hangmanWords[i][0][0]);
        wattroff(win, A_STANDOUT);
    }
    wrefresh(win);
    mvwprintw(stdscr, 0, 0, "%d", highlight);

}

void hman::chooseWord(){
    word = rand()%20;
    move (2, 0);
    clrtoeol();
    mvprintw(2, 0, "Word: %d", category);
}

int hman::getmv(){
    int choice = getch();
    switch (choice) {
        case KEY_UP:
            if (menu){
                highlight--;
                if (highlight == -1)
                    highlight = 0;
            }
            break;
        case KEY_DOWN:
            if (menu){
                highlight++;
                if (highlight == totalCATEGORIES)
                    highlight = totalCATEGORIES-1;
            }
            break;
        case KEY_LEFT:
            break;
        case KEY_RIGHT:
            break;
        case 'g':
            if (menu)
                menu = false;
            break;
        default:
            break;
    }
    return choice;
}

#endif /* hClass_h */
