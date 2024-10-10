#ifndef Piece_H
#define Piece_H
#include <string>

using namespace std;

enum class Position
{ KING,QUEEN,ROOK,KNIGHT,BISHOP,PAWN ,EMPTY};
const string positionNames[7] = {"K","Q","R","KN","B","P","E"};



class Piece 
{
    int pieceType;
    bool color;
    Position position;
    int row,col;
    public:
    bool getColor();
    Position getPosition();
    string getPositionStr(Position pos); //have in other piece.h folder
    Piece(){this->position = Position::EMPTY;}
    Piece(bool color, Position position){this->color = color,this->position = position;}
};

#endif