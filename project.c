//guess the correct number
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int number;int guess,nguess;
    srand(time(0));
    number=rand()%100+1;       //this will give from 0 to 100
    //printf("the number is %d\n",number);    //if %1000+1 gives from 0 to 1000
    for(nguess=1;number!=guess;nguess++){
        
        printf("guess the number between 1 to 100\n");
        scanf("%d",&guess);
        if(guess>number){
            printf("lower number please\n");
        }
        else if(guess<number){
             printf("higher number please\n");     
        }
        else{
            printf("congrats, correct guess\n");
            printf("you guess it in=%d attempts\n",nguess);
        }
        
    }
    return 0;
        
}