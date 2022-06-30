#include<stdio.h>

int main(void)
{
    printf("***Hello World!***\n\n");
    printf("\nHello World!\n");
    printf("I am learning C.\n");
    printf("Hello World!\nI am learning C.\nAnd it is awesome!\n");
    printf("Hello World!\n\n");


    // Create variables
    printf("***Create variables***\n\n");
    int myNum = 5;             // Integer (whole number)
    float myFloatNum = 5.99;   // Floating point number
    char myLetter = 'D';       // Character

    // Print variables
    printf("%d\n", myNum);
    printf("%f\n", myFloatNum);
    printf("%c\n", myLetter);
    printf("\n\n");

    printf("***My favorite number***\n\n");
    int myFavNum = 5;
    printf("My favorite number is: %d", myFavNum);
    printf("\n\n");

    
    printf("***My number and my letter***\n\n");
    int myNum1 = 5;
    char myLetter1 = 'D';
    printf("My number is %d and my letter is %c", myNum1, myLetter1);
    printf("\n\n");

    printf("***Add Variables Together***\n\n");
    int x1 = 5;
    int y1 = 6;
    int sum = x1 + y1;
    printf("%d", sum);
    printf("\n\n");

    printf("***Add Variables Together***\n\n");
    int x2 = 5, y2 = 6, z2 = 50;
    printf("%d", x2 + y2 + z2);
    printf("\n\n");

    int x, y, z;
    x = y = z = 50;
    printf("%d", x + y + z);
    
    return 0;
}

/*

***Hello World!***


Hello World!    
I am learning C.
Hello World!    
I am learning C.
And it is awesome!
Hello World!



***Create variables***

5
5.990000
D




***My favorite number***

My favorite number is: 5





***My number and my letter***

My number is 5 and my letter is D




***Add Variables Together***

11




***Add Variables Together***

61


*/

