#include "Segment.hpp"
#include <iostream>

using namespace std;


Segment::Segment() : m_prev( nullptr ), m_next( nullptr ) {}


void Segment::print() const {
    if ( m_prev && m_next ) {
        cout << '=';
    }
    else if ( !m_prev && m_next ) {
        cout << "ooO";
    }
    else if ( m_prev && !m_next ) {
        cout << "[8)-<";
    }
    else {
        cout << '@';  // Little snake.
    }
}
