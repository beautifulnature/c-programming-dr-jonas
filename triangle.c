/* triangle.c */
#include <stdio.h>

int area_triangle(int base, int height){
    int area;
    area = (base * height)/2;
    return area;
}

int main(){
    
    int base, height, area;
    
    printf("base: ");
    fflush(stdout);
    scanf("%d", &base);

    printf("height: ");
    fflush(stdout);
    scanf("%d", &height);
 
    area = area_triangle(base, height);
    printf("the area of the triangle is %d\n", area);

    return 0;
}
