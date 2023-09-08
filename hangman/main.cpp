//
//  main.cpp
//  hangman
//
//  Created by Kosa Kasanda on 07.09.23.
//

#include <iostream>
#include <stdio.h>
#include <ncurses.h>
#include <string>
#include "hangman.hpp"

int main(int argc, const char * argv[]) {
    /*
    // insert code here...
    std::cout << "Hello, World!\n";
    
    const char* arr[] = {"Red", "Blue"};
    std::cout << arr[0] << std::endl;
    std::cout << arr[1][1] << std::endl;
    */
    
    initscr();
    noecho();
    curs_set(0);
    
    keypad(stdscr, true);
    start_color();
    
    hangmangame();
    
    endwin();
    
    return 0;
}
