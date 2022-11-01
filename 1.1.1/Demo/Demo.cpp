/*          Gius Corporation          *\
 *       All rights are reserved      *
 *                                    *
 *  - Author: Giulio Salvi            *
 *  - Date: 10.VII.2022               *
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
    
    std::cout << "Starts typing your string, when you'll have finished press 'Enter':\n";
    for(char c = getchar(); c != '\n'; c = getchar()) s->getBuffer()->add((Org::Gius::Types::Object*) new Org::Gius::Types::Primitives::Char(c));

    std::cout << "This is what is stored in your string with " << s->length() << " length:\n";
    for(int i = 0; i < s->length(); i++) std::cout << s->at(i);
}