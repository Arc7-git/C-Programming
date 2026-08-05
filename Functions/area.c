#include <stdio.h>
int square(int side)
{
    int area = side * side;
    return area;
}
int rectangle(int len, int brd)
{
    int area = len * brd;
    return area;
}
float circle(float rad)
{
    float area = (22.0 / 7.0) * rad * rad;
    return area;
}

int main()
{
    float rad;
    int len, brd, side;
    printf("enter radius of circle:\n");
    scanf("%f", &rad);
    printf("enter length and breadth of the rectangle:\n");
    scanf("%d %d", &len, &brd);
    printf("enter the side of square\n");
    scanf("%d", &side);
    float area_of_circle = circle(rad);
    int area_of_square = square(side);
    int area_of_rectangle = rectangle(len, brd);
    printf("the area of circle is :\n %f", area_of_circle);
    printf("\nthe area of square is : \n%d", area_of_square);
    printf("\nthe area of rectangle is :\n %d", area_of_rectangle);
}
