#ifndef SEGMENT_HPP
#define SEGMENT_HPP


/** Creates a snake in the group. */
class Segment {
public:
    Segment() : m_prev( nullptr ), m_next( nullptr ) { m_id = ms_quantity; ms_quantity++; }
    ~Segment() { ms_quantity--; }

    void Print() const;

    /* Setters. */
    void SetPrev( Segment* segment ) { m_prev = segment; }
    void SetNext( Segment* segment ) { m_next = segment; }

    /* Getters. */
    Segment* GetPrev() { return m_prev; }
    Segment* GetNext() { return m_next; }

    /* Check alignment. */
    bool IsHead() const { return ( m_prev && !m_next ); }
    bool IsTile() const { return ( !m_prev && m_next ); }
    bool IsInside() const { return ( m_prev && m_next ); }
    bool IsAlone() const { return ( !m_prev && !m_next ); }

    unsigned GetId() const { return m_id; }

private:
    static unsigned ms_quantity;

    /** Pointer to a previous segment. */
    Segment* m_prev;

    /** Pointer to a next segment. */
    Segment* m_next;

    unsigned m_id;
};


#endif
