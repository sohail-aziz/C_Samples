#include <stdio.h>

int main ()
{

 int day;

  printf("please enter the day of the week\n"); 

  scanf("%d",&day);

  switch (day){
    
    case 1:
        printf("it's first day of the week\n");
        break;
    case 2:
    case 3:
    case 4:
    case 5:
        printf("it's working day\n");
        break;
    case 6:
    case 7:
      printf ("it's a Weekend");
      break;
    default:
      printf ("The %d is not a valide day number\n",day);
    }


  

  //print hello for 10 times
  for(int i=0;i<10;i++){
    printf("hello %d \n",i);
  }

  


  int container[]={23,45,65,74,88,91,98,108}; 
                
  for(int i=0;i<8;i++){ 
    
     printf("value=%d at index=%d\n",container[i],i);
   
   ///don't inspect package no 5, there's something special 
    if(i==4){
      continue;
    }

    printf("value=%d at index=%d\n",container[i],i);
    
    //if any container with value 91 is found, stop looking other containers and break.
    if(container[i]==91){
      printf("found!\n");
      break;
    }

  }

return 0;

}