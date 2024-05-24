#include <iostream>
#include <vector>


class FEN_Games{
    public:
    std::string FEN;
    bool FEN_valid;
    bool Playerturn = 0;
    std::vector<char> CastlingRights;
    int halfmoves = 0;
    int Turns = 1;

    FEN_Games(const std::string &fen) : FEN(fen){

    }
};

FEN_Games CreateFEN(std::string FEN){
    FEN_Games game(FEN);
    return game;
}


int main(){

std::string FEN;

std::cout << "please give the FEN to generate the desired board: \n";
std::getline(std::cin, FEN);

FEN_Games game = CreateFEN(FEN);

std::cout << game.FEN[1];

    return 0;
}