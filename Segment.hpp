#ifndef SEGMENT_HPP
#define SEGMENT_HPP


//======================================================================================================================
class Segment {
public:
    Segment( void );

    /** Prints '=' or 'ooO', if segment is a tail and '[8)-<', if it is a head. */
    void print( void ) const;

private:
    /** Previous segment. */
    Segment* m_prev;

    /** Next segment. */
    Segment* m_next;
};
//======================================================================================================================


#endif
