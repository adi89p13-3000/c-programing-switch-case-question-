#include<stdio.h>
void main()

{
    char digit;

    printf("Enter any digit = ");
    scanf(" %c", &digit);

    switch (digit)
	{
		
		case'0':
			printf("Zero");
			break;
			
				case '1':
				printf("One");
				break;
				
					case '2':
						printf("Two");
						break;
						case '3':
							
								printf("Three");
								break;
								default:
									printf("invalid");
	}
}