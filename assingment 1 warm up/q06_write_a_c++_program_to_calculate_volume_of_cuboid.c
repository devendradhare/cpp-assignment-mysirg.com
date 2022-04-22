// calculete volume of cuboid
#include<stdio.h>
#include<conio.h>
int main()
{
    float l,h,w;
    printf("\nenter length height and width of cuboid : ");
    scanf("%f%f%f", &l,&h,&w);
    printf("\nvolume of the cuboid = %f",l*h*w);
    getch();
}