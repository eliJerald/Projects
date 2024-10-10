#include "piece.h"

using namespace std;
string Piece::getPosition(){
    if(this->position == Position::PAWN)    {return "p";}
    if(this->position == Position::BISHOP)  {return "B";}
    if(this->position == Position::KNIGHT)  {return "KN";}
    if(this->position == Position::KING)    {return "K";}
    if(this->position == Position::QUEEN)   {return "Q";}
    if(this->position == Position::ROOK)    {return "R";}
    return "error";
}