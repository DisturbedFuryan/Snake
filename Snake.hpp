#ifndef SNAKE_HPP
#define SNAKE_HPP

#include "Segment.hpp"


/** Snake as a bidirectional list. */
class Snake {
public:
    Snake() : m_head( nullptr ), m_tail( nullptr ) {}
    ~Snake();

    /** Adds one segment in front. */
    void GrowFront(); 

    /** Adds one segment behind. */
    void GrowBack();

    void RemoveAllSegments();

    void Print();

private:
    /** Head. */
    Segment* m_head;

    /** Tail. */
    Segment* m_tail;
};


#endif
