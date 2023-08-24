#include"main.h"
void color(int i){
if(i==0)
i=29;
else
i=i+30;
printf("\033[0;%dm",i);
}
void end_color()
{
printf("\033[0;0m");

}
void gotoxy(int x,int y){
COORD c;
c.X=x;
c.Y=y;

SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}