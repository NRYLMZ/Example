#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int main ()
{ int i,k,m=0,a=0,c=0,r=1500;
  char DNA[r+1];
  char denek[1500];
  
  

  srand(time(0));
     
  for(i=0;i<r;i++) {DNA[i]=rand()%26+65;}
    DNA[i]='\0'; 
      
   for(i=0;i<r;i++)
    for
      {
      for(k=i;k<i+strlen(denek);k++) 
        {if(denek[m]==DNA[k]) a=a+1;
          m=m+1;
        }
    }
    if(a==strlen(denek)) c=c+1;
     m=0;a=0;
   
    
}        
 if(c>0) printf("DNA eslesti,%d adet %s bulundu.\n%s\n",c,denek,DNA);
 else printf("DNA da %s bulgusuna rastlanmadi.\n",denek);
  system("pause");
  return 0;
}
