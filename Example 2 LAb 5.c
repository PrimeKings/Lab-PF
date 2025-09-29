#include <stdio.h>
int main(){
	char start, end;
	printf("Enter first letter: ");
	scanf(" %c", &start);
	printf("Enter last letter: ");
	scanf(" %c", &end);
	
	switch(start)
	{
		case 'A':
		case 'a':
			switch(end)
			{
				case 'A':
				case 'a':
					printf("Albania \nAlaska");
					break;
				default:
					printf("\n no country");
		}
		break;
		case 'B':
		case 'b':
			switch(end){
				case 'a':
				case 'A':
					printf("Bulgeria \nBosnia");
					break;
				default:
					printf("no country");
			}
			break;
		default:
			printf("Enter correct letter");
	}
	return 0;
}
