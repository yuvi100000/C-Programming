# include<stdio.h>
int main ()
{ // scanf example with area of square
    float  side;
    scanf("%f", &side);
    printf("Area of square is %f\n", side*side);
    // scanf example with area of circle
    int radius;
    scanf("%d", &radius);   
    printf("Area of circle is %f\n", 3.14*radius*radius);
    return 0;

}