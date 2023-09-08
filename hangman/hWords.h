//
//  hWords.h
//  hangman
//
//  Created by Kosa Kasanda on 07.09.23.
//

#ifndef hWords_h
#define hWords_h

#include <iostream>
#include <stdio.h>
#include <string>

const char* group1[20] = {"England", "France", "Germany", "Russia", "China", "Turkey", "Canada", "Mexico", "Bolivia", "Zambia", "Botswana", "Spain", "Chad"};

const char* group2[20] = {"Oppenheimer", "Barbie", "Inception", "Interstellar", "Imitation"};

const char* group3[20] = {"Find You", "Try Agian", "Always You", "Give it back"};

const char* hangmanWords[3][2][20] = {{{"Countries"}, {"England", "France", "Germany", "Russia", "China", "Turkey", "Canada", "Mexico", "Bolivia", "Zambia", "Botswana", "Spain", "Chad"}},
    
    {{"Movies"}, {"Oppenheimer", "Barbie", "Inception", "Interstellar", "Imitation"}},
    
    {{"Songs"}, {"Find You", "Try Agian", "Always You", "Give it back"}}};

#endif /* hWords_h */
