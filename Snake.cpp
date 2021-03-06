#include "Segment.hpp"
#include "Snake.hpp"
#include <iostream>

using namespace std;


Snake::~Snake() {
    RemoveAllSegments();
}


void Snake::GrowFront( unsigned length ) {
    Segment* segment = nullptr;

    for ( unsigned i = 0; i < length; ++i ) {
        // Create new segment.
        segment = new Segment;
        
        if ( m_head ) {  // If head already exists.
            // Show new head for a previous one.
            m_head->SetNext( segment );

            // Show previous head for a new head.
            segment->SetPrev( m_head );
        }
        else {  // Head does not exist, so tail does not exist too.
            // Make tail as a head for a moment.
            m_tail = segment;
        }
        
        // Make new segment as a head.
        m_head = segment;
    }
}


void Snake::GrowBack( unsigned length ) {
    Segment* segment = nullptr;

    for ( unsigned i = 0; i < length; ++i ) {
        // Create new segment.
        segment = new Segment;
        
        if ( m_tail ) {  // If tail already exists.
            // Show new tail for a previous one.
            m_tail->SetPrev( segment );

            // Show previous tail for a new tail.
            segment->SetNext( m_tail );
        }
        else {  // Tail does not exist, so head does not exist too.
            // Make head as a tail for a moment.
            m_head = segment;
        }
        
        // Make new segment as a tail.
        m_tail = segment;
    }
}


void Snake::RemoveAllSegments() {
    // Remove segments starting from a tail.
    if ( m_tail ) {  // If there is no tail, there is nothing to remove.
        Segment* executor = m_tail;  // Points victim, which is a previous segment.
        Segment* nextExecutor = nullptr;
        Segment* victim = nullptr;

        // Point and remove victims sequentially.
        while ( ( nextExecutor = executor->GetNext() ) ) {
            executor = nextExecutor;
            victim = executor->GetPrev();

            cout << "Deleting " << victim->GetId() << " segment...\n";
            delete victim;
        }

        // Last executor is still alive, so...
        cout << "Deleting " << executor->GetId() << " segment...\n";
        delete executor;

        m_tail = m_head = nullptr;
    }
}


void Snake::Print() {
    if ( m_tail ) {  // If there is no tail, there is nothing to print.
        Segment* toPrint = m_tail;

        cout << endl;

        do {
            toPrint->Print();
        } while ( ( toPrint = toPrint->GetNext() ) );

        cout << endl << endl;
    }
}
