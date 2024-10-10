#ifndef Piece_H
#define Piece_H
#include <string>

using namespace std;

enum class Position
{ KING,QUEEN,ROOK,KNIGHT,BISHOP,PAWN };

class Piece 
{
    bool color;
    Position position;
    public:
    string getPosition(); //have in other piece.h folder
    Piece(bool color, Position position){this->color = color,this->position = position;}
};

#endif