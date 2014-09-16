/* Programming Assignment 1 - SEBASTIAN ROJAS
   */
#include<stdio.h>
#include<math.h>

int main() {
    double xcoora, ycoora, xcoorb, ycoorb, xcoorc, ycoorc, lengthAB, lengthCA, lengthBC, circumference, area, s;

    printf("Enter the x-coordinate of point A:-");
    scanf("%lf", &xcoora);
    printf("Enter the y-coordinate of point A:-");
    scanf("%lf", &ycoora);
    printf("Enter the x-coordinate of point B:-");
    scanf("%lf", &xcoorb);
    printf("Enter the y-coordinate of point B:-");
    scanf("%lf", &ycoorb);
    printf("Enter the x-coordinate of point C:-");
    scanf("%lf", &xcoorc);
    printf("Enter the y-coordinate of point C:-");
    scanf("%lf", &ycoorc);

    lengthAB = sqrt(pow((xcoora-xcoorb),2)+pow((ycoora-ycoorb),2));
    lengthCA = sqrt(pow((xcoorc-xcoora),2)+pow((ycoorc-ycoora),2));
    lengthBC = sqrt(pow((xcoorb-xcoorc),2)+pow((ycoorb-ycoorc),2));
    circumference = lengthAB + lengthCA + lengthBC;
    s = circumference / 2;
    area = sqrt(s*(s-lengthAB)*(s-lengthBC)*(s-lengthCA));

    printf("Lenght of AB is %f \n Length of BC is %f \n Length of CA is %f \n Cicumference is %f \n Area is %f.", lengthAB, lengthCA, lengthBC, circumference, area);

    return 0;

     

}
