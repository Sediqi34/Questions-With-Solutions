#include<stdio.h>

/* 5. Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches. and width of 5 inches.
Expected Output :
Perimeter of the rectangle = 24 inches
Area of the rectangle = 35 square inches*/

int main() {

	int height;
	int width;

	printf("enter the height of the rectangle: ");
	scanf_s("%d", &height);

	printf("enter the width of the rectangle: ");
	scanf_s("%d", &width);


	int perimeter = (height * 2) + (width * 2);
	int area = height * width;

	printf("\n");

	printf("Perimeter of the rectangle = %d inches\n", perimeter);
	printf("Area of the rectangle = %d square inches", area);
	printf("\n");


	return 0;
}