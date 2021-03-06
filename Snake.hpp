#ifndef SNAKE_HPP
#define SNAKE_HPP

class Segment;


/** Snake as a bidirectional list. */
class Snake {
public:
    Snake() : m_head( nullptr ), m_tail( nullptr ) {}
    ~Snake();

    /** Adds segments in front. */
    void GrowFront( unsigned length = 1 ); 

    /** Adds segments behind. */
    void GrowBack( unsigned length = 1 );

    void RemoveAllSegments();

    void Print();

private:
    /** Head. */
    Segment* m_head;

    /** Tail. */
    Segment* m_tail;
};


#endif
