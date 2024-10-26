#include <iostream>
#include <vector>
using namespace std;

class Card{
    public:
    Card(){
    }
    vector<int> val;
    string face = "number";
    char suit;          //c = club      d = diamond     h = hearts      s = spades
    bool color;         //1 = red       0 = black
    int status;         //0 = in deck   1 = in play     2 = discard pile
    
}Deck [53];