// Vowel or Consonant using switch case:

#include<stdio.h>

int main()
{
	char ch;
	printf("Enter Any Alphabet:");
	scanf("%c", &ch);
	
	switch(ch)
	{
		case 'a':
			printf("VOWEL");
			break;
			
		case 'e':
			printf("VOWEL");
			break;
			
		case 'i':
			printf("VOWEL");
			break;
			
		case 'o':
			printf("VOWEL");
			break;
			
		case 'u':
			printf("VOWEL");
			break;
			
		case 'A':
			printf("VOWEL");
			break;
			
		case 'E':
			printf("VOWEL");
			break;
			
		case 'I':
			printf("VOWEL");
			break;
			
		case 'O':
			printf("VOWEL");
			break;
			
		case 'U':
			printf("VOWEL");
			break;
			
		default:
			printf("Consonant");
			break;
	}
	return 0;
}
