#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void main()
{
	int i = 0, maxGirth = 5; 
	for(i = 0; i < 15; i++)
	{
		if(i < 11)
		{
			// - draw dick
			printf("  ");
			int d = 0;
			for(d = 0; d < maxGirth; d++) {
				if(i == 0) {
					if(!d || d == maxGirth - 1){
						printf(" ");
					} else printf("*");
				} else if(i == 1) {
					if(d % 2) {
						printf(" ");
					} else printf("*");
				} else if(i == 3) {
					printf("*"); 
				} else {
					if(!d || d == maxGirth - 1) {
						printf("*");
					} else printf(" ");
				}
			}
		} else {
			int u = i - 11, count = 1, maxBallWidth = 9;
			// - draw balls
			int d = 0;
			for(d = 0; d < maxBallWidth; d++) {
				if(u == 0) {
					if(d == 1 || d == maxBallWidth - 2) {
						printf("*");
					} else printf(" ");
				} else if(u == 3) {
					if(d == 0 || d == maxBallWidth - 1 || d == 4) {
						printf(" ");
					} else printf("*");
				} else {
					if(d == 0 || d == maxBallWidth - 1) {
						printf("*");
					} else if(u == 2 && d == 4) {
						printf("*");
					}
					else printf(" ");
				}
			}
		}
		printf("\n");
	}
}
