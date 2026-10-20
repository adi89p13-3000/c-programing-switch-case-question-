#include<stdio.h>
int main()
{
	int choice;
	float value;
	printf("Unit coversion measures\n");
	printf("Kg to G\n");
	printf("g to kg\n");
	printf("C to F\n");
	printf("F to C\n");
	printf("Km to M\n");
	printf("M to Km\n");
	
	printf("Enter your choice\n");
	scanf("%d",&choice);
	printf("Enter the value\n");
	scanf("%f",&value);
	switch(choice)
	{
		case 1:
			printf("result=%.2f gram",value*1000);
			break;
			case 2:
				printf("result=%.2f kg",value/1000);
				break;
				case 3:
					printf("result=%.2f F",(value*9/5)+32);
					break;
					case 4:
						printf("result=%.2f C",(value-32)/5/9);
						break;
						case 5:
							printf("result=%.2f m",value*1000);
							break;
							case 6:
								printf("result=%.2f km",value/1000);
								break;
								default:
									printf("invalid");
			
	}
}