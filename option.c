#include"main.h"
int option()
{

  int i=0;
  system("cls");
  creator();
  system("color 70");
  gotoxy(49,5);
  
  printf("Chosse An Option\n\n\n\n\n\n\n");
   
   
  printf("         1. Student\n");
  printf("         2. Teacher");
up:
 gotoxy(47,24);
 if(i==10)
 printf("                            ");
gotoxy(52,22);
printf("Enter No : ");

i=(int)getche();

switch (i)
{
case '1':
   return _one;
    break;
case '2':
/*
system("cls");
creator();
 gotoxy(9,12);
 printf("           \n");
 */

   return _two;

break;
default:
gotoxy(42,24);
printf("Sorry! You Have Entered Wrong Option");
sleep(1);
gotoxy(42,24);
printf("     Entered A Valid Option           ");
sleep(1);
i=10;
goto up;
}

}
/*
int main(int argc, char const *argv[])
{
    option();
    getch();
    return 0;
}
*/