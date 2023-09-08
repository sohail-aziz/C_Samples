#include <stdio.h>

/**
 * Iterating and modifying arrays
*/


int main(){

    int subject_marks[]={66,53,77,92,89};

    //find average of the subject marks
    int size= sizeof(subject_marks)/sizeof(subject_marks[0]); //this will give us the size of the array

    int total=0;
    for(int i=0;i<size;i++){  //i<size since the index starts from 0 and end at size-1
        total=total+subject_marks[i];
    }

    printf("Total obtained marks= %d \n",total);
    printf("Average marks= %d \n", total/size); //no type casting that's why it drops floating point
    printf("Average marks with floating point accuracy= %f \n", (float)total/size); 

    return 0;
}