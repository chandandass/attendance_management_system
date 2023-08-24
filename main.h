#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#include<stdio.h>
#include<time.h>
#include<mysql.h>
#include<windows.h>


#define _one 1
#define _two 2
#define _three 3
#define _four 4


// msg group
void msg();
void msg_2(char a[]);
void msg_3();
void down_msg(int i);
int  up_msg(int i);
void thanks();
void mkdir();
void creator();
void gotoxy(int,int);



//time
unsigned int date_time();
int time_check(int i);

//register
int regis();
int t_name();
int f_write(int i, char a[]);

//login
int login();
int tlogin();

//option & pin
int option();
int subject(int );
int pin();
int pin_n();


// upload and download
int uplo_downlo(int i,char a[]);




#define cdetails (rec.roll > 3013210000 && rec.roll < 3013210060) || (rec.roll > 3013220000 && rec.roll < 3013220021)

struct student
{
    char name[20];
    unsigned long int roll;
    char tname[20];
}rec;

FILE *ptr;
char * _v1;



time_t t;
struct tm *mytime;
SYSTEMTIME s;

 //int len;