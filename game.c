/*write a c program capable of playing snake,water and gun with user*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int game(char,char);
int main()
{
    int number;
    char you,comp;
    srand(time(0));
    number=rand()%100+1;
    if(number<33){
        comp='s';
    }
    else if(number>33 && number<66){
        comp='w';
    }
    else{
        comp='g';
    }
    printf("welcome to the game\n");
    printf("enter 's for snake,'w' for water and 'g' for gun\n");
    scanf("%c",&you);
    int result=game(you,comp);
    printf("you choose %c and comp choose %c\n",you,comp);
    if(result==0){
        printf("game draw!\n");
    }
    if(result==1){
        printf("you won!\n");
    }
    else if(result==-1){
        printf("you lose!\n");
    }
    printf("thank you for playing the game\n");
    return 0;

}
int game(char you ,char comp){
    //return 0 for draw
    //return 1 for you win
    //return -1 for comp win
    if(you==comp){
        return 0;
    }
    else if(you=='s' && comp=='w'){
        return 1;
    }
    else if(you=='w' && comp=='s'){
        return -1;
    }
    else if(you=='g' && comp=='s'){
        return 1;
    }
    else if(you=='s' && comp=='g'){
        return -1;
    }
    else if(you=='w' && comp=='g'){
        return 1;
    }
    else if(you=='g' && comp=='w'){
        return -1;
    }

}