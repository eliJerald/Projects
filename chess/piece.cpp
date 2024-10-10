#include "piece.h"


using namespace std;
bool Piece::getColor(){
    return this->color;
}
Position Piece::getPosition(){
    return this->position;
}
string Piece::getPositionStr(Position pos){
    return positionNames[static_cast<int>(pos)];
}