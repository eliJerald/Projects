#include "piece.h"

using namespace std;

string pieceType::getType()
{
    return this->type;
}

bool pieceType::getColor()
{
    return this->color;
}

string pieceType::getPosition()
{
    return this->position;
}