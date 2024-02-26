#include <stdio.h>
int main(){
    float radius, pi, c;
    pi = 3.14159;
    printf("Enter value of radius : ");
    scanf("%f", &radius);
    c = (2 * pi * radius);
    printf("Circumference of the circle is %f: ", c);
    return 0;
}