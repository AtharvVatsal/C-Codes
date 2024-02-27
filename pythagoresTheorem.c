#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float p, b, h;
    int c;
    printf("If you have Perpendicular And Base, Press 1\nIf you have Base and Hypotenuse, Press 2\nIf you have Hypotenuse and Perpendicular, Press 3: ");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
        printf("Enter Perpendicular And Base: ");
        scanf("%f %f", &p, &b);
        float h = sqrt(pow(p,2) + pow(b,2));
        printf("Hypotenuse = %.2f", h);
        break;
    case 2:
        printf("Enter Hypotenuse And Base: ");
        scanf("%f %f", &h, &b);
        p = sqrt(pow(h, 2) - pow(b, 2));
        printf("Perpendicular = %.2f", p);
        break;
    case 3:
        printf("Enter Hypotenuse and Perpendicular: ");
        scanf("%f %f", &h, &p);
        b = sqrt(pow(h, 2) - pow(p, 2));
        printf("Base = %.2f", b);
        break;
    default:
        printf("Invalid Choice\nRe-Run Code");
        break;
    } 
    return 0;
}