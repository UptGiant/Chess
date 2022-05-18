#include <iostream>
#include<windows.h>

using namespace std;
string board[9][9];

void resetBoard(){
    int setterNum=57;
    int setterABC=73;
    board[0][0]="";
    int i;
    for(i=9;i>0;i--){
        setterNum=setterNum-1;
        board[i][0]=setterNum;
        cout<<board[i][0];
    }
        for(i=9;i>0;i--){
        setterABC=setterABC-1;
        board[9][i]=setterABC;
        cout<<board[9][i];
    }

    

}


void displayBoard(){
    	/* for(i = 0; i <strlen(first_string)+2;i++){
		for(j = 0; j< strlen(second_string)+2; j++){
			if(i == 0){
				if(j < 2){
					printf("   |");
				}else{
					printf("  %c|",second_string[j-2]);
				}
			}
			else if(i == 1){
				if(j == 0){
					printf("   |");
				}
				else{
					printf("%3d|",arr[i - 1][j -1]);
				}
			}
			else if(i > 1){
				if(j == 0){
					printf("  %c|",first_string[i-2]);
				}
				else{
					printf("%3d|",arr[i - 1][j -1]);
				}
			}
		}
		printf("\n");

	} */
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