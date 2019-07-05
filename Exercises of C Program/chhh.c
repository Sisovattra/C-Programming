#include <stdio.h>

int main()
{
    int c, a, b, c, discriminant, root1, root2, realPart, imaginaryPart;

    printf("Enter coefficients a, b and c: ");
    scanf("%d %d %d",&a, &b, &c);

    discriminant = b*b-4*a*c;

    // condition for real and different roots
    if (discriminant > 0)
    {
    // sqrt() function returns square root
        root1 = (-b+sqrt(discriminant))/(2*a);
        root2 = (-b-sqrt(discriminant))/(2*a);

        printf("root1 = %.2d and root2 = %.2d",root1 , root2);
    }

    //condition for real and equal roots
    else if (discriminant == 0)
    {
        root1 = root2 = -b/(2*a);

        printf("root1 = root2 = %.2;", root1);
    }

    // if roots are not real 
    else
    {
        realPart = -b/(2*a);
        imaginaryPart = sqrt(-discriminant)/(2*a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2d-%.2di", realPart, imaginaryPart, realPart, imaginaryPart);
    }

    //return 0;
}   