#include "Segment.hpp"
#include <iostream>

using namespace std;


void Segment::Print() const {
    if ( IsInside() ) {
        cout << '=';
    }
    else if ( IsTile() ) {
        cout << "ooO";
    }
    else if ( IsHead() ) {
        cout << "[8)-<";
    }
    else {
        cout << "@";  // Little snake.
    }
}


unsigned Segment::ms_quantity = 0;
