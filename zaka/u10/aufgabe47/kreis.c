#include <stdio.h>
#include <math.h>

void read_radius(double* radius);
void circle_circumference(double radius, double* circumference);
void circle_area(double radius, double* area);

const double pi = M_PI;

int main()
{
    double area;
    double radius;
    double circumference;
    double* pArea = &area;
    double* pRadius = &radius;



    read_radius(pRadius);
    circle_circumference(radius, &circumference);
    circle_area(radius, &area);

    printf("radius: %.2lf circumference: %.2lf area: %.2lf\n", radius, circumference, area);

    return 0;
}

void read_radius(double* radius)
{
    printf("Please enter a radius: ");
    scanf("%lf", radius);
}

void circle_circumference(double radius, double* circumference)
{
    *circumference = 2 * radius * pi;
}

void circle_area(double radius, double* area)
{
    *area = pi * pow(radius, 2);
}
