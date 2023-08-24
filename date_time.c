#include"main.h"
unsigned int date_time()
{
time(&t);
mytime=localtime(&t);
 
 _v1=(char *) malloc(6*sizeof(char));
 if(_v1==NULL){
//printf("memory isnot  allocated");
 exit(EXIT_FAILURE);
 }

if(mytime->tm_min >= 0 && mytime->tm_min <10)
sprintf(_v1,"%d0%d",mytime->tm_hour,mytime->tm_min);

else
 sprintf(_v1,"%d%d",mytime->tm_hour,mytime->tm_min);

  unsigned int _t = atoi(_v1);
 free(_v1);
 _v1=NULL;

return _t;


  }



int time_check(int i)
{
unsigned int _t = date_time();

switch (i)
{
case '1':
if(_t>=1330 && _t<=1415)
{
 msg_3(); 
return _one;
}

else
uplo_downlo(2,"C++");


 

break;

case '2':
 if(_t>=1415 && _t<=1500)
 {  msg_3(); 
return _one;
 }
else
 uplo_downlo(2,"D_S");
 

case '3':

 if(_t>=1115 && _t<=1200)
{ msg_3(); 
return _one;
}
else
uplo_downlo(2,"N_M");


case '4':
 if(_t>=1200 && _t<=1245)
{
 msg_3(); 
return _one;
}
else
uplo_downlo(2,"D_M");



case '5':
 if(_t>=1245 && _t<=1330)
{msg_3(); 
return _one;
}
else
  uplo_downlo(2,"S_E");


case '6':
 if(_t>=1030 && _t<=1115)
{
  msg_3(); 
return _one;
}
else
 uplo_downlo(2,"C_A");



default :
exit(EXIT_FAILURE);


}

exit(EXIT_FAILURE);
}
