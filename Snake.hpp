#ifndef SNAKE_HPP
#define SNAKE_HPP

#include "Segment.hpp"


//======================================================================================================================
class Snake {
public:
    Snake();

    /** Adds one segment behind. */
    void Grow();

private:
    /** Head. */
    Segment* m_head;

    /** Tail. */
    Segment* m_tail;
};
//======================================================================================================================


inline void Snake::Grow() {
    Segment* segment = new Segment;

}


#endif
