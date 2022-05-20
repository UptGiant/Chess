#include <iostream>
#include <string>
#include <windows.h>

using namespace std;
string board[9][9];

/*
This function will be used to place every chess piece in their correct starting position.
It will also be used to reset the board when the game is over and the user wants to play again.
Returns void
*/

void resetBoard(){
    int setterNum=57;
    int setterABC=73;
    int i;
    board[8][0]=" ";
    for(i=7;i>=0;i--){
        setterNum=setterNum-1;
        board[i][0]=setterNum;
        //cout<<board[i][0];
    }
        for(i=8;i>0;i--){
        setterABC=setterABC-1;
        board[8][i]=setterABC;
        //cout<<board[8][i];
    }

    

}

/*
This function will display the coordinates for move making as well as display the chess pieces
Returns void
*/
void displayBoard(){
    int i,j;
    	for(i = 0; i <9;i++){
            cout<<"\t";
            for(j = 0; j< 9; j++){
                if(j==0){
                    cout<<""<<board[i][j]<<"|";

                }else{
                    cout<<""<<board[i][j]<<"\t|";
                }
                
		}
        if(i!=8){
            cout<<"\n      ----";
            for(j=0;j<10;j++){
            cout<<"------";
            }
            cout<<"----\n";   
        }
	}
}


/*
This function will determine which player will make the first move in the game.
Return 0 if Player 1 will make the first move
Return 1 if Player 2 will make the first move
*/
int random(string player1,string player2){
    int firstRoll;
    int secondRoll;
    bool firstMove;
/* Roll until one player rolls greater than the other
If a tie occurs it will re-roll*/
    while(true){
    firstRoll = rand() % 6 + 1;
    secondRoll =rand() % 6 + 1;
    //Sleep(1000);
    cout<<player1<<" rolled "<<firstRoll<<".\n";
    //Sleep(1000);
    cout<<player2<<" rolled "<<secondRoll<<".\n";
    //Sleep(1000);
    if(firstRoll>secondRoll){
        cout<<"Player 1 will make the first move.\n";
        return 0;
    }
    else if(secondRoll>firstRoll){
        cout<<"Player 2 will make the first move.\n";
        return 1;
    }
    else{
        cout<<"Tie! Re-roll!\n";
    }
    }



   
}


int main(){
    string player1;
    string player2;
    int firstMove;
    cout<<"Enter Player 1 Name: \n";
    cin>>player1;
    cout <<"Enter Player 2 Name: \n";
    cin>>player2;
    firstMove= random(player1,player2);
    resetBoard();
    displayBoard();
    


}