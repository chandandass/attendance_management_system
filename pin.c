#include"main.h"


int  pin()
{  

     system("color 30");
     
        gotoxy(49,5);
    printf("Enter Given PIN ");
    int pin1=0;
    up:
    gotoxy(63,22);
    printf("        ");
gotoxy(52,22);

printf("Enter PIN : ");
scanf("%d",&pin1);
if(pin1!=pin_n())
{
gotoxy(49,24);
 printf("                           ");
   gotoxy(52,24);
   printf("PIN Isn't Matched");
   fflush(stdin);
   sleep(1);
   gotoxy(52,24);
   printf("Enter A Valid PIN");
   sleep(1);
  goto up;
 }
return _two;
}





int pin_n()
{   
  
    
    MYSQL * con;
    con=mysql_init(NULL);
 _v1=" ";   //password
    if(mysql_real_connect(con,"sql7.freemysqlhosting.net","sql7369404",_v1,"sql7369404",0,NULL,0)==NULL)
  
   {
        msg();
        
    }  
    _v1=NULL;
     if(mysql_query(con,"SELECT * FROM `key`"))
           msg();

    MYSQL_ROW row;
    //MYSQL_FIELD * field;
    MYSQL_RES * result;

    result=mysql_store_result(con);
if(result==NULL)
printf("result is null");

row = mysql_fetch_row(result);

int i=0;
//printf("%d",atoi(row[i]));
i=atoi(row[i]);

mysql_free_result(result);
mysql_close(con);

    return i;

}