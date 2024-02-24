#include <stdio.h>
#include <stdlib.h>

int main() {
    int cont,a,b;
    printf("Enter First number: ");
    scanf("%d",&a);
    printf("Enter Second number: ");
    scanf("%d",&b);
    printf("Enter -->\n1 for Addition\n2 for Substraction\n3 for Multiplication\n4 for divison\nYour Choice <--> ");
    scanf("%d",&cont);
    switch (cont)
    {
    case 1:
        printf("%d + %d = %d",a,b,a+b);
        break;
    case 2:
        printf("%d - %d = %d",a,b,a-b);
        break;
    case 3:
        printf("%d X %d= %d",a,b,a*b);
        break;
    case 4:
        printf("%d / %d= %.4f",a,b,(float)a/b);
        break;
    default:
        printf("Wrong Choice Entered. Re-Run Code");
        break;
    }
    
    return 0;
}
