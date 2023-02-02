// Q(6) solution (In C)

#include<stdio.h>
#include<math.h>

int main() {

	float radius;
	
	printf("Enter the radius of a circle: ");
	scanf_s("%f",&radius);

	float perimeter = 2 * 3.14 * radius;
	float area = 3.14 * radius * radius;

	printf("Perimeter of circle is: %f\n", perimeter);
	printf("Area of circle is: %f", area);

	return 0;
}


