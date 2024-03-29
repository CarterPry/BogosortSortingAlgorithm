#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h> 



void shuffleArray(int *array, int arraySize){   //Randomly shuffle the array
    for (int i = 0; i < arraySize - 1; i++) {
        int j = i + rand() % (arraySize - i);
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
}

unsigned int factorial(unsigned int n){ //Simple Factorial function
    
    int result = 1, i;
    for (i = 2; i <= n; i++) {
        result *= i;
    }
 
    return result;
}

bool checkSorted(int *array, int howLong){  //Check if the array is sorted properly from least to greatest
    for (int i = 0; i < howLong - 1; i++) {
        if (array[i] > array[i+1]){
            return false;
        }
    }
    return true;
}





int main() {
    srand(time(NULL)); // Start the random number generator
    int unsortedArray[] = {3, 11, 21, 42, 69}; // Can put as many numbers as wanted in the array, in any order
    int howLong = sizeof(unsortedArray) / sizeof(unsortedArray[0]);   //This is because sizeOf in C will just give you plain memory, we want the number of int's in the array
    int possible = factorial(howLong);
    double chance = ((1.0 / possible) * 100);
    printf("Size of the array is: %d\n", howLong);
    printf("There are %d possible combinations for this array, meaning a %f%% chance to get the correct sequence for every random pick\n\n", possible, chance);
    
    int count = 0;
    while (true){

        shuffleArray(unsortedArray, howLong);
        count++;

        for (int i = 0; i < howLong; i++){
            printf("%d ", unsortedArray[i]);
        }
        
        if (checkSorted(unsortedArray, howLong)) {
            printf("--> SORTED SEQUENCE FOUND\n");
            break;
        } 
        
        else{
            printf("\n");
        }
        
    }

    printf("\n\nAfter %d tries the amazingly efficient Bogosort algorithm found the sorted sequence: \n", count);
    for (int i = 0; i < howLong; i++) {
        printf("%d ", unsortedArray[i]);
    }
    printf("\n");

    return 0;
}
