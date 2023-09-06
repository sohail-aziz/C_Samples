#include <stdio.h>

int main(){

//print hello for 10 times
// this loop will run until  i<10 == true, increment i after each iteration
  for(int i=0;i<10;i++){
    printf("hello %d \n",i);
  }

  
  //integer array declaration and assignment at the same time
  int packages[]={23,45,65,74,88,91,98,108}; 
   // printing the first element in array
   printf("first element is %d \n",packages[0]); // array index start from 0
   //printing the last element of array
   printf("last element is %d \n",packages[7]); //7 since total elements are 8 and index starts from 0

   //printing complete array using for loop
   for(int index=0; index<8;index++){
     printf("%d \n",packages[index]);
   }


   /*
  for(int index=0;index<8;index++){ 
    
     printf("value=%d at index=%d\n",packages[index],index);
   
   ///don't inspect package no 5, there's something special 
    if(index==4){
      continue;
    }

    printf("value=%d at index=%d\n",packages[index],index);
    
    //if any container with value 91 is found, stop looking other containers and break.
    if(packages[index]==91){
      printf("found!\n");
      break;
    } 

  }*/

    return 0;
}