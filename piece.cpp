#include <bits/stdc++.h>
using namespace std;

class piece { 
  private:          
    int color;    
    string pieceType;
    string boardName;
    int Xposition;
    int Yposition;

  public:
    piece();
    void setColor(int color);
    void setPieceType(string pieceType);
    void setBoardName(string boardName);
    void setXp(int Xposition);
    void setYp(int Yposition);
    int getColor() const;
    string getPieceType() const;
    string getBoardName() const;
    int getXp() const;
    int getYp() const;

};

piece::piece(){
  this->color = color;
  this->pieceType = pieceType;
  this->boardName = boardName;
  this->Xposition = Xposition;
  this->Yposition = Yposition;
}
void piece::setColor(int color){
  color = color;
}
void piece::setPieceType(string pieceType){
  pieceType = pieceType;
}
void piece::setBoardName(string boardName){
  boardName = boardName;
}
void piece::setXp(int Xposition){
  Xposition = Xposition;
}
void piece::setYp(int Ypositoin){
  Yposition = Yposition;
}
int piece::getColor() const{
  return color;
}
string piece::getPieceType() const{
  return pieceType;
}
string piece::getBoardName() const{
  return boardName;
}
int piece::getXp() const{
  return Xposition;
}
int piece::getYp() const{
  return Yposition;
}