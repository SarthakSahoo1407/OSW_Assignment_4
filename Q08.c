#include<stdio.h>
#include<math.h>
int main(){
    float p,b,h;
    printf("Enter two legs of triangle: ");
    scanf("%f %f", &p, &b);

    h = sqrt(pow(p,2)+pow(b,2) );
    printf("Hypotenuse of triangle is: %.2f", h);
}