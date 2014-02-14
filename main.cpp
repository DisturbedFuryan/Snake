#include "Snake.hpp"
#include <iostream>


int main( int argc, char** argv ) {
    Snake snake;

    snake.GrowBack( 10 );

    snake.Print();
    
    return 0;
}
