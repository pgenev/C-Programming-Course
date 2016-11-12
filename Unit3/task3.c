#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TRUE 0
#define FALSE 1

void playGame(int switchDoors)
{	
	srand (time(NULL));
	int wins = 0;
	int winningDoor;
	int playerChoice;
	int doorWithGoat;
	int numberOfGames = 1000000;
	int doors[] = {0, 1, 2};
	
	for(int i=0; i < numberOfGames; ++i)
	{
		winningDoor = rand() % 3;
		playerChoice = rand() % 3;
		for(int j=0; j < 3; ++j)
		{
			if(winningDoor != doors[j] && playerChoice != doors[j]){
				doorWithGoat = doors[j];
				break;
			}
		}
		if(TRUE == switchDoors)
		{
			for(int i2=0; i2 < 3; ++i2)
			{
				if(doors[i2] != doorWithGoat && doors[i2] != playerChoice && doors[i2] == winningDoor)
				{
					++wins;
				}
			}
			continue;
		} 
		if(playerChoice == winningDoor)
		{
			++wins;
			continue;
		}
	}
	
	if(TRUE == switchDoors)
	{
		printf("\nSwitched winners: %lf%%\n", ((double)wins / numberOfGames) * 100);
	}
	else 
	{
		printf("\nDidn't switched winners: %lf%%\n\n", ((double)wins / numberOfGames) * 100);
	}
}

void main()
{
	playGame(TRUE);
	playGame(FALSE);
	return;
}