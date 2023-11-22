#include <stdio.h>
#include <math.h>

int main()
{
    double a;
    double b;
    double c;
    double discriminant;
    double x1;
    double x2;

    // Print program title with bold formatting
    printf("\n\033[1mZeropoint calculator of a quadratic function ax^2+bx+c = 0\033[0m\n");
    // Ask for coefficient 'a'
    printf("Pleas enter a number for a: ");
    scanf("%lf", &a);
    // Ask for coefficient 'b'
    printf("Pleas enter a number for b: ");
    scanf("%lf", &b);
    // Ask for coefficient 'c'
    printf("Pleas enter a number for c: ");
    scanf("%lf", &c);

    discriminant = b*b - 4*a*c;
    
    // Handle case where all coefficients are 0
    if (a == 0 && b == 0 && c == 0)
    {  
        // Infinite number of solutions
        printf("%.0fx^2+%.0fx+%.0f = 0 has an \033[1minfinite number of solutions\033[0m\n", a, b, c);
        printf("\n");

        return 0;
    }
    else if (a == 0 && b != 0)
    {
        // Single solution for a linear equation
        printf("%.0fx^2+%.0fx+%.0f = 0 has \033[1mone solution x = %f\033[0m\n", a, b, c, (double)-c/b);
        printf("\n");

        return 0;
    }
    else if(a == 0 && b == 0 && c != 0 || discriminant < 0)
    {
        // No solution
        printf("%.0fx^2+%.0fx+%.0f = 0 has \033[1mno solution\033[0m\n", a, b, c);
        printf("\n");
        return 0;    
    }
    else if (discriminant == 0)
    {
        // One real solution
        printf("%.0fx^2+%.0fx+%.0f = 0 has \033[1mone solution\033[0m ", a, b, c);

        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);

        if (x1!= 0)
        {
            printf("\033[1mx = %f\033[0m\n", x1);
            printf("\n");
        }
        else
        {
            printf("\033[1mx = %f\033[0m\n", x2);
            printf("\n");
        }

        return 0;
    }
    else if (discriminant > 0)
    {
        // Two real solutions
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);

        printf("%.0fx^2+%.0fx+%.0f = 0 has \033[1mtwo solutions x1 = %f x2 = %f\033[0m\n", a, b, c, x1, x2);
        printf("\n");

        return 0;
    }

    return 0;
}
