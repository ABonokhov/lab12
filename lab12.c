#include <stdio.h>
 #include <stdlib.h>
  #include <math.h>
   #include <time.h>
    int HashFunc(int key,int i){ return key*1+1; } 
	int main(){ srand(time(NULL));
	 int a[10],b[10];
	 int i;
	  if (i>-10&&i<10){
	  for(i=0;i<10;i++)
	  { a[i]=rand() %10;
	   printf("key(%d)",a[i]);
	    b[i]=HashFunc(a[i],i);
		 } 
		 printf("\n\n");
		  for(i=0;i<10;i++)
		  {
		   printf(" HashFunc(%d)=%d",a[i],b[i]);
		   }
		    printf("\n\n");
			 for(i=0;i<10;i++)
			 { 
			 if(b[i]>=0)
			  printf(" HashFuncMoreZero(%d)=%d ",a[i],b[i]);
			  } 
		}
			  return 0;

}
