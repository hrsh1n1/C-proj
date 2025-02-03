
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int game(char player1, char player2)
{

	if (player1 == player2)
		return -1;

	
    if (player1 == 's' && player2 == 'p')
		return 0;
	else if (player1 == 'p' && player2 == 's') return 1;


	
    if (player1 == 's' && player2 == 'z')
		return 1;
	else if (player1 == 'z' && player2 == 's')
		return 0;

	
    
    if (player1 == 'p' && player2 == 'z')
		return 0;
    else if (player1 == 'z' && player2 == 'p')
		return 1;
}


int main()
{
	

    int choice;

    printf("\n\n\t\t\t\tWelcome to rock-paper-scissors!!!");
    printf("\n\n\n\n\t\t\t\tSelect appropriate choice: ");
    printf("\n\n\t\t\t\t 1. Play with computer.");
    printf("\n\n\t\t\t\t 2. Play with a partner.\n");
    scanf("\n\t\t\t\t%d", &choice);
    getchar();


	if(choice==1){

        int n;

	    char player, computer;
	    int result;

        printf("\n\n\n\n\t\t\t\tYou have chosen to play with computer.");
        
        srand(time(NULL));

	    n = rand() % 100;

	    if (n < 33)
		    computer = 's';
	    else if (n > 33 && n < 66)
		    computer = 'p';
	    else
		    computer = 'z';

	    printf("\n\n\n\n\t\t\t\tEnter s for STONE, p for PAPER and z for SCISSOR\n\t\t\t\t\t\t\t");

	
	    scanf("%c", &player);
	    result = game(player, computer);

	    if (result == -1) {
		    printf("\n\n\t\t\t\tGame Draw!\n");
	    }
	    else if (result == 1) {
		    printf("\n\n\t\t\t\tCongratulation!!! You have won the game!\n");
	    }
	    else { 
		printf("\n\n\t\t\t\tOh! You have lost the game!\n");
	    }
		printf("\t\t\t\tYou choose : %c and Computer choose : %c\n",player, computer);

    }

    else if(choice==2){
        char player1;
        char player2;

        printf("\n\n\n\n\t\t\t\tYou have chosen to play with a partner.");

        printf("\n\n\n\n\t\t\t\tPLAYER 1: Enter s for STONE, p for PAPER and z for SCISSOR\n\t\t\t\t\t\t\t");
        scanf("\n\t\t\t\t%c", &player1);
        
        getchar();

        printf("\n\n\n\n\t\t\t\tPLAYER 2: Enter s for STONE, p for PAPER and z for SCISSOR\n\t\t\t\t\t\t\t");
        scanf("\n\t\t\t\t%c", &player2);


	    int result = game(player1, player2);

	    if (result == -1) {
		    printf("\n\n\t\t\t\tGame Draw!\n");
	    }
	    else if (result == 1) {
		    printf("\n\n\t\t\t\tCongratulations! PLayer 1 has won the game!\n");
	    }
	    else { 
		    printf("\n\n\t\t\t\t\tCongratulations! Player 2 has won the game!\n");
	    }
		
    }

    else{
        printf("\n\nInvalid choice!\n");
    }

	return 0;
}


