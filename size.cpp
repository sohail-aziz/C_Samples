#include <stdio.h>

/**
 * What is sizeof operator 
 * and how to find size of a variable and an array
*/
int main(){

    int age=10;
    int ages[10];
    printf("size of int in bytes is %d\n", sizeof(age));
    printf("size of array in bytes %d bytes \n",sizeof(ages));
    printf("size of on element of array is %d bytes\n", sizeof(ages[0]));
    printf("size of array is %d \n", sizeof(ages)/sizeof(ages[0]));

    char name;
    float weight;
    double exchange_rate;
    long veryLongNumber;
    printf("size of name is %d\n",sizeof(name));
    printf("size of weight is %d\n",sizeof(weight));
    printf("size of exchange_rate is %d\n",sizeof(exchange_rate));
    printf("size of veryLongNumber is %d\n",sizeof(veryLongNumber));

    //sizeof is a function which returns size in integer
    int size = sizeof(weight);
    printf("size of float is %d\n",size);

   

    

  return 0;

}