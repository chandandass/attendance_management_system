#include"main.h"




void msg()
{
    system("cls");
creator();
system("color 70");
gotoxy(44,13);

printf("CHECK YOUR NETWORK CONNECTION");
sleep(3);
exit(EXIT_FAILURE);
}

void msg_2(char a[]){
system("cls");
creator();
system("color 70");
gotoxy(40,13);
printf("IT IS NOT YOUR %s'S CLASS TIME ",a);
sleep(2);
//exit(EXIT_FAILURE);


}
void msg_3(){
    
creator();
system("cls");
system("color 70");
gotoxy(30,13);
printf("YOU CAN'T ACCESS DATA DURING YOUR CLASS TIME, TRY AGAIN LATER");
sleep(3);
}

void down_msg(int i){
system("cls");
creator();
system("color B0");
gotoxy(36,13);
if(i==1){
gotoxy(38,13);
printf("SORRY! THERE IS NO ANY ATTENDANCE MARKED");
sleep(3);
exit(EXIT_SUCCESS);
}
printf("ALL THE ATTENDANCE ARE BEING DOWNLOADED WAIT!");
sleep(2);
}


int up_msg(int i)
{
 
  
//system("cls");
creator();
system("cls");
system("color B0");
gotoxy(42,13);
if(i==1){
printf("YOUR ATTENDANCE IS ALREADY MARKED");
sleep(3); 
exit(EXIT_SUCCESS);}

printf("YOUR ATTENDANCE IS BEING SENT WAIT!");

sleep(3);

return 0;}

void thanks()
{
    system("cls");
    
    creator();
 gotoxy(50,10);
printf("IT HAS BEEN DONE");
sleep(1);
gotoxy(50,12);
printf(".....THANKS.....");
sleep(2);

exit(EXIT_SUCCESS);

void gotoxy(int x,int y){
COORD c;
c.X=x;
c.Y=y;

SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
}


void mkdir(char a[])
{
    
    system(a);
    system("cls");
    creator();
}