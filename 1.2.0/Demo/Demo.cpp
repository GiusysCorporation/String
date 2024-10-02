/*          Gius Corporation          *\
 *       All rights are reserved      *
 *                                    *
 *  - Author: Giulio Salvi            *
 *  - Date: 10.VII.2022               *
 *  - Last Modified: 02.X.2024        *
 *  - Name: Demo.cpp                  *
 *  - Notes: This file can be compiled*
 *     by the users to have a demo of *
 *     the library.                   *
\*                                    */

#include <iostream>
#include <malloc.h>
#include "../Libs/Headers/Primitives/Char.hpp"
#include "../Headers/String.hpp"

using namespace Org::Gius::Strings;

void demoString();

int main() {
    demoString();

    system("pause>nul");
    return 0;
}

void demoString() {
    String* s = new String();
    int j = 0;

    std::cout << "Starts typing your string, when you'll have finished press 'Enter':\n";
    for(char c = getchar(); c != '\n'; c = getchar()) {
        if(j%2 == 0) {
            s->getBuffer()->add((Org::Gius::Types::Object*) new Org::Gius::Types::Primitives::Char(c));
        } else {
            *s += c;
        }

        j++;
    }
    
    std::cout << "This is what is stored in your string with " << s->length() << " length:\n";
    s->print();

    *s += ". Hola!";
    std::cout << "I have added a small string to yours! ;)\n";
    s->print(false); 
}