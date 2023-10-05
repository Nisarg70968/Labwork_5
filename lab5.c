#include <stdio.h>

int main() {
    //using a third variable (c)
    int a, b, c;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swap the values of a and b using a third variable (c)
    c = a;
    a = b;
    b = c;

    printf("After swapping: a = %d, b = %d\n", a, b);

    printf("___________________________________________________________________\n");

    // without using a third variable

    int d, e;
    printf("Enter the value of d: ");
    scanf("%d", &d);

    printf("Enter the value of e: ");
    scanf("%d", &e);

    printf("Before swapping: d = %d, e = %d\n", d, e);

    d = d + e;
    e = d - e;
    d = d - e;

    printf("After swapping: d = %d, b = %d\n", d, e);

    return 0;
}


/*
Output:

Enter the value of a: 12
Enter the value of b: 11
Before swapping: a = 12, b = 11
After swapping: a = 11, b = 12
___________________________________________________________________
Enter the value of d: 20
Enter the value of e: 30
Before swapping: d = 20, e = 30
After swapping: d = 30, b = 20

*/