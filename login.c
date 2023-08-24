#include"main.h"
 int login()
{ system("color 70");


  ptr=fopen("t_data.dat","rb+");
  if(ptr!=NULL)
{ 
 fclose(ptr);
 ptr=NULL;
return _one;

}
  fclose(ptr);




  ptr=fopen("s_data.dat","rb+");
  if(ptr==NULL)
  return _two;

  //printf("I am here.");
  rewind(ptr);
   fread(&rec,sizeof(rec),1,ptr);
   fclose(ptr);
system("cls");
creator();
//fflush(stdout);
gotoxy(49,3);

printf("You Are Logged In \n\n\n\n");

 

printf(" This Is Your Name := %s\n This Is Your Roll Number := %lu\n",rec.name,rec.roll);



gotoxy(36,18);                  // detais

printf("If You Want To Edit Your Information PRESS E\n");
//sleep(1);
gotoxy(47,19);
printf("OTHERWISE PRESS ANY KEY");
gotoxy(57,20);
char ch=getch();

if((ch==69) || (ch==101))
return _four;



return _three;
  }


// for teachers

  int  tlogin(int u_p)
  {

   if(u_p==1)
   goto up;
system("color 70");

 ptr=fopen("t_data.dat","rb+");
  if(ptr==NULL)
  exit(EXIT_FAILURE);

  //printf("I am here.");
  rewind(ptr);
   fread(&rec,sizeof(rec),1,ptr);
   fclose(ptr);
   ptr=NULL;
   up:
system("cls");
creator();
//fflush(stdout);

gotoxy(49,3);

printf("YOU ARE LOGGED IN \n\n\n\n");

if(strlen(rec.tname)<9)
gotoxy(51,9);
else
gotoxy(48,9);

printf("YOU ARE %s",strupr(rec.tname));

if(strlen(rec.name)<4)
    gotoxy(49,11);
else
    gotoxy(43,11);


printf("YOUR SUBJECT IS %s\n",strupr(rec.name));

gotoxy(37,19);

printf("IF YOU WANT TO EDIT YOUR INFORMATION PRESS E\n");
//sleep(1);
gotoxy(36,20);
printf("OTHERWISE PRESS ANY KEY TO DOWNLOAD ATTENDANCE");
gotoxy(58,21);
char ch=getch();

if((ch=='E') || (ch=='e'))
  return _one;  
 
   //while(time_check(rec.roll))
   //goto up;

return _two;




  }