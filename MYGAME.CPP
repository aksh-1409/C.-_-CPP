#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
system("cls"); //alternative of clrscr() to avoid conio.h(non-portable)header file
srand(time(NULL));

int player,pc=(rand() % 3 )+0;
//for player
printf("----------------------------SNAKE WATER GUN GAME--------------------------------\n");
printf("                            LET'S GO!!!!!!!!                                       \n");
printf("Press 0 for snake\nPress 1 for gun\nPress 2 for water\n");
printf("enter:\n");
scanf("%d",&player);
switch(player)
{
case 0:
 {
     if(pc==1)
     {
	 printf("hahhhaaa!!!!... You lost the round human\n");
	 printf(" You Better Luck next time!!!..\n");
	  printf("You have choose Snake & pc choose Gun\n");
	 goto l1;
     }
     else
     {
	 if(pc==2)
	 {
	    printf("I won...Aahhh!!! so easyy!!!\n");
	    printf("You choose Snake & Pc choose water\n");
	    goto l1;
	 }
	 else
	 {
	    printf("Doing Better my opponent\n");
	    printf("game tied\n");
	    printf("You & Pc both choose snake\n");
	    goto l1;

	 }
     }
 }

 case 1:
 {
    if(pc==0)
    {
	printf("I won...Aahhh!!! so easyy!!!\n");
	    printf("You choose gun & pc choose Snake\n");
	    goto l1;
    }
    else
    {
	if(pc==1)
	{
	    printf("Doing Better my opponent\n");
	    printf("game tied\n");
	    printf("You & Pc both choose gun\n");
	    goto l1;
	}
	else
	{
	   printf("hahhhaaa!!!!... You lost the round human\n");
	 printf(" You Better Luck next time!!!..\n");
	  printf("You have choose gun & pc choose water\n");
	 goto l1;
	}
    }
 }

 case 2:
 {

     if(pc==0)
     {
	printf("hahhhaaa!!!!... You lost the round human\n");
	 printf(" You Better Luck next time!!!..\n");
	  printf("You have choose water & pc choose snake\n");
	 goto l1;
     }
     else
     {
	 if(pc==1)
	 {
	     printf("I won...Aahhh!!! so easyy!!!\n");
	    printf("You choose water & Pc choose Gun\n");
	    goto l1;
	 }
	 else
	 {
	     printf("Doing Better my opponent\n");
	    printf("game tied\n");
	    printf("You & Pc both choose water\n");
	    goto l1;
	 }
      }
 }
 }
 l1:
 return 0;
}

