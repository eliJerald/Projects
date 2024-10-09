#include <iostream>

using namespace std;

const bool BLACK = false;
const bool WHITE= false;



enum class Position
{ KING,QUEEN,ROOK,KNIGHT,BISHOP,PAWN };

class Piece 
{
    bool color;
    Position position;
    public:
    getPosition(); //have in other piece.h folder
    Piece(bool color, Position position){this->color = color,this->position = position;}
};

int main(){

    Piece pawn (WHITE, Position::KING);
    return 0;
}