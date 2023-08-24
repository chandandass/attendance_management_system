
#include"main.h"
//for students
int subject(int select)
{    
  up:
  system("cls");
system("color 70");
creator();
 gotoxy(48,5);
 printf("Choose Your Subject\n\n\n\n\n\n\n");


printf("   1. C++\n");
printf("   2. DATA STRUCTURE\n");
printf("   3. NUMERCAL METHODS\n");
printf("   4. DATABASE MANAGEMENT\n");
printf("   5. SOFTWARE ENGINEERING\n");
printf("   6. COMPUTER ARCHITECTURE\n");
  _u:
gotoxy(52,22);
printf("Enter No : ");
fflush(stdin);
int i=0;
i=(int)getche();


unsigned int _t = date_time();


if(select==1)
{
switch (i)
{
case '1':

 if(_t >=1330 && _t <= 1415)


uplo_downlo(1,"C++");
else
{
msg_2("C++");
return _one; }

case '2':
 if(_t>=1415 && _t<=1500)
  uplo_downlo(1,"D_S");

else
{
msg_2("DATA STRUCTURE");
return _one; }



case '3':
 if(_t>=1115 && _t<=1200)
uplo_downlo(1,"N_M");

else
{
msg_2("NUMERICAL METHODS");
return _one;
}


case '4':
 if(_t>=1200 && _t<=1245)
 uplo_downlo(1,"D_M");

else
{
msg_2("DATABASE MANAGEMENT");
return _one;
}


case '5':
 if(_t>=1245 && _t<=1330)
 uplo_downlo(1,"S_E");

else
{
msg_2("SOFTWARE ENGINEERING");
return _one;
}

case '6':
 if(_t>=1030 && _t<=1115)
   uplo_downlo(1,"C_A");

else
{
msg_2("COMPUTER ARCHITECTURE");
return _one;
}


default:
gotoxy(42,24);
printf("Sorry! You Have Entered Wrong Option");
sleep(2);
gotoxy(42,24);
printf("     Entered A Valid Option           ");
goto _u;
 
  }
  
  }

// for teachers...

if(select==2)
{
switch (i)
{
  case '1':

    while(f_write(i,"c++"))
    f_write(i,"c++");

    return _two;
    break;
  case '2':
    while(f_write(i,"Data Structure"))
    f_write(i,"Data Structure");


    
    return _two;
     break;
  case '3':
    while(f_write(i,"Numerical Methods"))
    f_write(i,"Numerical Methods");
    
     return _two;
     break;
  case '4':
    while(f_write(i,"Database Management"))
    f_write(i,"Database Management");
    
      return _two;
     break;
  case '5':
    while(f_write(i,"Software Engineeing"))
    f_write(i,"Software Engineeing");
    
     return _two;
     break;
  case '6':
    while(f_write(i,"Computer Architecture"))
    f_write(i,"Computer Architecture");

   return _two;
    break;

default:
gotoxy(42,24);
printf("Sorry! You Have Entered Wrong Option");
sleep(2);
gotoxy(42,24);
printf("     Entered A Valid Option           ");
goto _u;
  
}
 
 } }