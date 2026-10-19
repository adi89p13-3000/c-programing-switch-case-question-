
					
				
				
		
	#include<stdio.h>
void main()
{
	char p;
	scanf("%c",&p);
	if ((p>='a'&& p<='z')||(p>='A'&&p<='Z'))
	{
	
	switch(p)
	{
		case 'A':
			case 'a':
				printf("Vowel");
				break;
				
		case 'E':
			case 'e':
				printf("Vowel");
				break;
				
		case 'I':
			case 'i':
				printf("Vowel");
				break;
				
		case 'O':
			case 'o':
				printf("Vowel");
				break;
				
		case 'U':
			case 'u':
				printf("Vowel");
				break;
				
		default:
				printf("consonant");
				break;
			}
		}
			
			else
		
				printf("not a alphabet");
	}

