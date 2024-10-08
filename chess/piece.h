#ifndef Piece_H
#define Piece_H
#include <string>

using namespace std;

class pieceType
{
    string type;
    bool color;
    public:
    pieceType();
    pieceType(string type,bool color){
        this->type = type;
        this->color = color;
    }
    string getType();
    bool getColor();
    //color is white or black
};

#endif