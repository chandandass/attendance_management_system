#include"main.h"

int uplo_downlo(int i,char a[])
{   

    GetSystemTime(&s);
    MYSQL * con=mysql_init(NULL);
    
    _v1=""; //password

 if(mysql_real_connect(con,"sql7.freemysqlhosting.net","sql7369404",_v1,"sql7369404",0,NULL,0)==NULL) 

    {
    
       msg();

    }
   _v1=NULL;


    //for students
if(i==1){


  _v1=(char *) malloc(130 * sizeof(char));
    if(_v1==NULL)
    msg();
    

    sprintf(_v1,"CREATE TABLE `sql7369404`.`%d-%d-%d_%s`(`name` VARCHAR(25), `roll` BIGINT(11) PRIMARY KEY AUTO_INCREMENT) ENGINE = InnoDB;",s.wDay,s.wMonth,s.wYear,a);

    mysql_query(con,_v1);
    
  
   
   sprintf(_v1,"INSERT INTO `%d-%d-%d_%s` (`name`, `roll`) VALUES ('%s',%lu)",s.wDay,s.wMonth,s.wYear,a,rec.name,rec.roll);


    if(mysql_query(con, _v1)) 
    {
    up_msg(1);}
    else
    {
    up_msg(0);
    thanks();
    }
  

mysql_close(con);
    
 free(_v1);
 _v1=NULL;

    return 0;
}


// for teachers
if(i==2)
{
  _v1=(char *) malloc(130 * sizeof(char));
    if(_v1==NULL)
    msg();

   
      
      sprintf(_v1,"SELECT * FROM `%d-%d-%d_%s`",s.wDay,s.wMonth,s.wYear,a);
      if(i=mysql_query(con,_v1))
      down_msg(1);

      
    
    MYSQL_ROW row;
    MYSQL_FIELD * field;
    MYSQL_RES * result;

    result=mysql_store_result(con);
    //ms

    mkdir("mkdir C:\\Users\\user\\Desktop\\Students_Attendance");
    sprintf(_v1,"C:\\Users\\user\\Desktop\\Students_Attendance\\%d-%d-%d%s.csv",s.wDay,s.wMonth,s.wYear,a);



ptr=fopen(_v1,"w+");
if(ptr==NULL)
   msg();

    
    down_msg(0);
   
   strcpy(_v1,"  DATE");
     
int num_field=mysql_num_fields(result);
     fprintf_s(ptr,"%s ,",_v1);
  while(row = mysql_fetch_row(result))
{
for(int j=0;j<num_field;j++)
{
if(j==0)
{
while(field = mysql_fetch_field(result))
    {
      
     fprintf_s(ptr,"  %s ,",strupr(field->name));
    
    // printf("%s ,",field->name);
   
       }
   fputc('\n',ptr);
   fprintf_s(ptr,"%d-%d-%d ,",s.wDay,s.wMonth,s.wYear);
 
   }
     
      fprintf_s(ptr,"%s ,",row[j]);
  
    //printf("this is i =%d %s\n",i,row[j]);
    }

}


 sprintf(_v1," DROP TABLE IF EXISTS `%d-%d-%d_%s` ",s.wDay,s.wMonth,s.wYear,a);

 mysql_query(con,_v1);
 

mysql_close(con);
fclose(ptr);

sprintf(_v1,"C:\\Users\\user\\Desktop\\Students_Attendance\\%d-%d-%d%s.csv",s.wDay,s.wMonth,s.wYear,a);

system(_v1);

free(_v1);
 _v1=NULL;


 thanks();

return 0;

}




}