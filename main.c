#include"main.h"

int main(int argc, char const *argv[])
{ 
    //for directions
    int i;
// for login function
   
   l_ogin:
    switch (login())
    {
    case 1:
    i=tlogin(0);
    goto t_log;
       
    case 2:
    i=option();
    goto o_ption;
       
    case 3:
    i=subject(1);
    goto s_ubject;

    case 4:
    i=regis();
    goto r_gis;
       
    }
    
    // teachers login function
    t_log:
     switch(i)
     {
      case 1:
     i=option();
     goto o_ption;

      case 2:
    while(time_check(rec.roll))
    { tlogin(1);
       
    }
   
      
     }
      
      // for option function
      o_ption:
      switch (i)
      {
      case 1:
      i=regis();
      goto r_gis;
        case 2:
      i=pin();
      goto p_in; 
      }

     // for subject function
     
     s_ubject:
     switch (i)
     {
     case _one:
     i=1;
      while(i==_one)
      i=subject(_one);
    
    case _two:
    i=tlogin(0);
    goto t_log;
     }

     
     
     // for register function
     r_gis:
     if(i)
     goto l_ogin;
     else 
     return 0;
    


     // for pin function

     p_in:
      if(i==_two)
      {
  while(t_name())
  t_name();
   
   if(subject(2)==2)
   goto l_ogin;
      }




    return 0;
}

  
