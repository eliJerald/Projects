#include<iostream>
#include<vector>
#include<string>
#include"piece.h"

const bool WHITE = true;
const bool BLACK = false;

using namespace std;
int main(){
    //TODO:
    //Create board
    //board = 8x8 vector of numbers
    vector<vector<int>> board (8,{0,0,0,0,0,0,0,0});
    cout<<board.size()<<endl;
    for(int i = 0;i<board[1].size();i++){
        board[1][i] = 1;
    }

        int j = 1;
    for(auto& item:board){
        int i = 1;
        for(int num:item){
            cout<<j<<i<<" : "<<num<<'\t';
            if(i == 8)cout<<endl;
            i++;
            
        }
        j++;
    }



    //TODO:
    //1. while nobody has won yet
        //loop through the moves
        //until someone loses


        //-> reask the same player to reinput another (user input)

        //error check if input is legal (error checking)

        //output the updated board after every move



    //1a. 


    Piece pawn (WHITE, Position::PAWN);
    cout<<pawn.getPosition();
    return 0;
}