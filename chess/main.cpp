#include<iostream>
#include"piece.h"
const bool WHITE = true;
const bool BLACK = false;

using namespace std;
int main(){
    pieceType pawn1("pawn",WHITE);
    pieceType pawn2("pawn",WHITE);
    pieceType pawn3("pawn",BLACK);
    pieceType pawn4("pawn",BLACK);

    cout<<pawn1.getColor()<<endl;
    cout<<pawn2.getColor()<<endl;
    cout<<pawn3.getColor()<<endl;
    cout<<pawn4.getColor()<<endl;

    return 0;
}