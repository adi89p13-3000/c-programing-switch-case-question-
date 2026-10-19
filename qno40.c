#include<stdio.h>
void main()
{
	float a,b,r,ar;
	char ch;
	printf("Choose to find the area\n");
	printf("A.Circle\n");
	printf("B.Rectangle\n");
	printf("C.Square\n");
	printf("D.Triangle\n");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'A': 
			printf("Enter the radius");
			scanf("%f",&r);
			ar=3.14*r*r;
			printf("area: %.2f ",ar);
			break;
		case 'B':
			printf("area of rectangle");
			scanf("%f%f",&a,&b);
			ar=a*b;
			printf("area: %.2f ",ar);
			break;
			
			case 'C':
			printf("area of Square");
			scanf("%f",&a);
			ar=a*a;
			printf("area: %.2f ",ar);
			break;
			case 'D':
			printf("area of Triangle");
			scanf("%f%f",&a,&b);
			ar=(a*b)/2;
			printf("area: %.2f ",ar);
			break;
			
			default:
				printf("invalid");
		}
	
}