#include<iostream>
#include<vector>
#include<string>
#include"piece.h"

const bool WHITE = true;
const bool RED = false;

using namespace std;
int main(){
    //TODO:
    //Create board
    //board = 8x8 vector of numbers

    cout<<"Would you like to play chess with a friend? (y/n)\n->";
    char input;
    cin>>input;
    if(input == 'n'){
        cout<<"okay have a nice day!";
        return 0;
    }

    vector<vector<Piece>> board (8);

    board[0].push_back(Piece(RED,Position::ROOK));
    board[0].push_back(Piece(RED,Position::KNIGHT));
    board[0].push_back(Piece(RED,Position::BISHOP));
    board[0].push_back(Piece(RED,Position::QUEEN));
    board[0].push_back(Piece(RED,Position::KING));
    board[0].push_back(Piece(RED,Position::BISHOP));
    board[0].push_back(Piece(RED,Position::KNIGHT));
    board[0].push_back(Piece(RED,Position::ROOK));

    for(int i = 0;i<=7;i++){
            board[1].push_back(Piece(RED, Position::PAWN));
    }

    for(int j = 2;j<6;j++){
        for(int i = 0;i<=7;i++){
            board[j].push_back(Piece());
        }
    }

    for(int i = 0;i<=7;i++){
            board[6].push_back(Piece(WHITE, Position::PAWN));
    }

    board[7].push_back(Piece(WHITE,Position::ROOK));
    board[7].push_back(Piece(WHITE,Position::KNIGHT));
    board[7].push_back(Piece(WHITE,Position::BISHOP));
    board[7].push_back(Piece(WHITE,Position::QUEEN));
    board[7].push_back(Piece(WHITE,Position::KING));
    board[7].push_back(Piece(WHITE,Position::BISHOP));
    board[7].push_back(Piece(WHITE,Position::KNIGHT));
    board[7].push_back(Piece(WHITE,Position::ROOK));


//print the board
    //print the letter as the columns
    cout<<'\t';
    for(int i = 0;i<8;i++){
        char temp = 'a' + i;
        cout<< temp<<'\t';
    }
    cout<<endl;
    int k = 1;
    for(auto& list:board){
        //print number as the rows
        cout<<"\033[0m"<<k<<'\t';
        for(int i = 0;i<list.size();i++){
            if(list[i].getPosition()== Position::EMPTY){
                cout<<"\033[32m"<<list[i].getPositionStr(list[i].getPosition())<<"\t";
            }else if(list[i].getColor() == RED){
                cout<<"\033[31m"<<list[i].getPositionStr(list[i].getPosition())<<"\t";

            }else{
                cout<<"\033[0m"<<list[i].getPositionStr(list[i].getPosition())<<"\t";

            }
        }
        cout<<endl;
        k++;
    }







    //TODO:
    //1. while nobody has won yet
        //loop through the moves
        //until someone loses


        //-> reask the same player to reinput another (user input)

        //error check if input is legal (error checking)

        //output the updated board after every move



    //1a. 

    return 0;
}