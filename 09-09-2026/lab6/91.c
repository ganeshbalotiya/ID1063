#include <stdio.stdio.h> 

double calculateArea(double length, double width) {
    return length * width;
}

int main() {
    double length, width;
    
    printf("Enter length: ");
    scanf("%lf", &length);
    printf("Enter width: ");
    scanf("%lf", &width);
    
    double area = calculateArea(length, width);
    printf("Area: %.2f\n", area);
    
    return 0;
}

