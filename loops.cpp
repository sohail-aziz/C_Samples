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
     we can also define an array and assign values later
   */
   
    int student_weights[3]; //we must specify the size of array if the values are assigned later in this case 3
    student_weights[0] =56;
    student_weights[1]=49;
    student_weights[2]=60;

    for(int i=0;i<3;i++){
        printf("weight is %d \n",student_weights[i]);
    }
        
    //taking value from user and store in array
    //let's update the value of second array element 
    printf("please enter the weight of 2nd student\n");
    scanf("%d",&student_weights[1]);

    //let's print weights again
        for(int i=0;i<3;i++){
        printf("weight is %d \n",student_weights[i]);
    }




   /**
    * Break and Continue
    * 
    * Break would break the loop i.e whenever break statement is executed, the loop will end 
    * Continue would continue to next iteration without executing any statement below the continue.
    *  
   */
  int container[]={23,45,65,74,88,91,98,108}; 
  for(int index=0;index<8;index++){ 
    
      ///don't inspect package no 5, there's something special 
    if(index==4){
      continue;
    }
    //when index==4, the loop will continue to next iteration without executing anything below this line.

    printf("value=%d at index=%d\n",container[index],index);
    
    //if any container with value 91 is found, stop looking other containers and break.
    if(container[index]==91){
      printf("found!\n");
      break;
    } 

  }

   printf("Last line of the program\n");

    return 0;
}