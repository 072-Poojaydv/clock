#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int h, m,s;
	system("cls");
	printf("ENTER THE CURRENT TIME IN HH:MM:SS: = ");
	scanf("%d%d%d",&h,&m,&s);
	start: ;
	for(h; h<24; h++)
	{
		for(m; m<60; m++)
		{
			for(s; s<60; s++)
			{
				system("cls");
				printf("\033[1;31m");   // for red color
				printf("%d : %d : %d\t",h,m,s);
				if(h<12)
				{
					printf("\033[1;33m");   // yellow color
					printf("AM");
				}
				else
				{
					printf("\033[1;33m");
					printf("PM");
				}
				for( double i=0; i<4900000; i++)
				{
				}
			}
			s=0;
		}
		m=0;
	}
	h=0;
	goto start;
	printf("\033[0m");
	getch();
	return 0;
}

				
	