#include <stdio.h>

int main (){

    /**
     * A variable is a container for different data types whose value can be changed after definition.
    */

    //declaring and assigning at the same time
    int age=22;  //int variable for holding integers
    float height= 5.8; // a variable to hold floating point numbers
    char name='C';  //a variable to hold characters, symbols, numbers and everything as character

    //we can also declare a variable and assign a value later

    int house_number;

    house_number=233;

    //printing variables
    printf("your age is %d \n",age);
    //we can print multiple variables using a single printf statement.
    printf("your name is %c and your height is %f and your house number is %d \n",name,height,house_number);


    /**
     * we can take input from user and store in our variables. please note the & sign
    */

    float weight=0;
    printf("Please enter your weight\n");
    scanf("%f",&weight);

    printf("Your weight is %f \n",weight);

    /**
     * Constant in contrast to variables are those whose value can't be changed afte definition
    */

    const int date_of_birth=1990;

    // can't do this, uncomment and test. compiler error.
    //date_of_birth=1992 
    printf("date of birth is %d \n",date_of_birth);
    
    return 0;
}