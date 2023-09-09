#include<stdio.h>

/**
 * user defined functions
*/

/**
 * add function, receives 2 arguments and returns the result of a+b
*/
int add(int a,int b){
    return a+b;
}

/**
 * divide function
 * receives nominator and a denominator and returns the result of a/b or return -1 if denominator is 0
*/

float divide(int nominator,int denominator){
    if(denominator==0){
        //cannot divide
        return -1;
    }

    return (float)nominator/denominator;
}

/**
 * prints integer with a new line
*/
void printInteger(int value){
    printf("%d \n",value);
}

/**
 * prints float with 2 decimal points and a new line
*/
void printFloat(float argument){
    printf("%0.2f \n", argument);

}

/**
 * prints string message with a new line
*/
void printMessage(char message[]){
    printf("%s\n",message);
}


int main(){


    
    int value1=15,value2=20;
    //call add function
    int result_add = add(value1,value2);
    
    //call print function
    printInteger(result_add);

    //we can also pass the values directly
    int c=add(10,20);
    printInteger(c);

    //we can directly call and print the result of a function
    printInteger(add(10,30));


    //calling divide function
    float result_divide= divide(10,0);

    if(result_divide==-1){
        printMessage("Can not divide, division error");
    }else{
        printFloat(result_divide);
    }
   


    return 0;
}