#include<stdio.h>
#include<stdlib.h>
#include<time.h>//the lib which includes the code to print random numbers
int main()
{
	int number,guess,nguesses;
	srand(time(0));//code to print random numbers
	number=rand()%100+1;
	//printf("the number is %d\n",number);
	do{
		printf("Guess a number between 1 to 100/n");
		scanf("%d",&guess);
		if(guess>number)
		{
			printf("Lowercase please/n");
		}
		else if(guess<number){
			printf("Uppercase please/n");
		}
		else{
			printf("You guessed it right in %d attempts\n",nguesses);
		}
		nguesses++;
	}while(guess!=number);
	return 0;
}
