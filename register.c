#include"main.h"
 int regis()

 {
   up:
      rec.roll=0;
      rec.name[0] = '\0'; 
     // 
     system("color 30");
     system("cls");   
     gotoxy(0,4);
      
      creator();
      gotoxy(0,5);
       printf(" Enter your name please....");
       fflush(stdin); 
       gets(rec.name);

       printf(" Enter your roll number....");
       fflush(stdin);
      scanf("%lu",&rec.roll);
      if(cdetails)
     {if(strlen(rec.name) < 21){
      
   ptr=fopen("s_data.dat","wb+");
  if(ptr==NULL)
  return 0;

  rewind(ptr);
  fwrite(&rec,sizeof(rec),1,ptr);
  fclose(ptr);
  ptr=NULL;
  system("cls");
  creator();
gotoxy(46,4);  
printf("Registration Succesfull\n");
sleep(2);
system("cls");
 return _one;
 } else
   goto down;
 }
else
{ down:
system("color c0");
   system("cls");
   creator();
   gotoxy(39,5);
 printf("Your Have Entered Invalid Information! wait...");
  sleep(2);
  system("cls");
   creator();
  gotoxy(44,5);
  printf("Please Enter A Valid Information...\n\n");

 sleep(1);

  
  goto up;
            }

            return 0;
  }









  int t_name()
  {
    system("cls");
    creator();
int i=0;
up:
if(i)
{
gotoxy(68,22);
printf("                                                     ");

}
   
   
    gotoxy(48,5);
     printf(" Enter Your Name  ");
gotoxy(66,22);
printf("                  ");
 gotoxy(48,22);
 printf("Enter Your Name : ");
  fflush(stdin);
  gets(rec.tname);
 
 if(strlen(rec.tname)>20)
 {    gotoxy(36,24);
   printf("Name Must Have To Be Less Than 20 Characters");
   i=1;
    goto up;
 }

 /*
ptr=fopen("t_data.dat","wb+");

if(ptr==NULL)
exit(EXIT_FAILURE);



fclose(ptr);

return 0;
*/
return 0;

  }



int f_write(int i,char a[]){

  strcpy(rec.name,a);
  rec.roll=i;
 ptr=fopen("t_data.dat","wb+");
 if(ptr==NULL)
 { return 1;
 }

fwrite(&rec,sizeof(rec),1,ptr);
fclose(ptr);
ptr=NULL;

return 0;

}
