#include <stdio.h>
void main()
{
   int mark1;
    printf("Enter the Mark: ");
    scanf("%d", &mark1);
    printf("\nYou've entered: %d", mark1);
    if (mark1 > 80) 
    {
        printf("\ngrade is A");
    }
    else if(mark1 > 79)
    {
        printf("\ngrade is B");
    }
    else if (mark1 > 59)
    {
        printf("\ngrade is C");
    }
    else 
    {
        printf("\ngrade is D");
    }
}
