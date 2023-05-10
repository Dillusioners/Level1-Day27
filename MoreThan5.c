/*
    Author - Debag101
    Purpose - Product of all numbers greater than 5 in an array
    Date - 10-05-2023
*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
// A function to display the array using for loops
void displayArray(float arr[], int size)
{
    printf("%c", '[');
    for (int i = 0; i < size; i++)
    {
        printf("%0.3f ", arr[i]);
    }
    printf("%c", " ]\n");
}
// This function receieves the array and its size and computes the product
float productOfMoreThan5(float numbers[], int size)
{
    float product = 1.00; // float product will hold the answer
    for (int counter = 0; counter < size; counter++)
    { // Iterating through the loop
        if (numbers[counter] > 5)
            product *= numbers[counter]; // Multiplying to product if numbers[counter] is greater than 5
    }
    return product; // Returning product
}
int main(int argc, char const *argv[])
{
    // Initialising and declaring our array
    float numArray[10] = {45.3, 1.23, 2.5, 9.23, 2.45, -87.00, -99.234, 6789.1, 10.3, -10.1};
    printf("(-)The array is => ");
    // printing array using displayArray()
    displayArray(numArray, 10);
    // Display result
    printf("(-)The product of all numbers more than 5 in the list is %0.3f \n", productOfMoreThan5(numArray, 10));
    printf("\n(-)Press any key to exit.....");
    getch();
    system("cls");
    return 0;
}
