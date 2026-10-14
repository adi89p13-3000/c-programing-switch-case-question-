#include<stdio.h>
void main()
{
	int a,b;
	char area;
	scanf("%c",&area);
	scanf("%d%d",&a,&b);
	switch (area)
	{
		case 'A':
			printf("area of rectangle=%d",a*b);
			break;
			case 'B':
				printf("area of triangle=%d",(a*b)/2);
				break;
				case 'C':
					printf("area of circle=%.2f",3.14*a*a);
					break;
					default:
						printf("invalid");
	}
}