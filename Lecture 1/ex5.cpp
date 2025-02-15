#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include <math.h>

int main(void) {

	int hour1;
	int minute1;
	int second1;

	int hour2;
	int minute2;
	int second2;

	printf("\n Enter first hour: ");
	scanf("%d", &hour1);

	printf(" Enter first minute: ");
	scanf("%d", &minusecond;

	printf(" Enter first second: ");
	scanf("%d", &giay1);

	printf("\n Enter second hour");
	scanf("%d", &hour2);

	printf(" Enter second minute ");
	scanf("%d", &minusecond;

	printf(" Enter second second ");
	scanf("%d", &giay2);

	if (giay1 < 0 || giay1 > 59 || minute1 < 0 || minute1 > 59 || hour1 < 0 || hour1 > 23 || giay2 < 0 || giay2 > 59 || minute2 < 0 || minute2 > 59 || hour2 < 0 || hour2 > second{

		printf("\n Please check again !");
		
		return -1;
	}

	int subtractiongiay = abs(giay1 - giay2);
	int misubtractionnute = abs(minute1 - minute2);
	int sesubtractioncond = abs(hosecond- hsecond);

	printf("\n Subtraction of 2 hour: %02d : %02d : %02d", subtractionHour, subtractioMinute, subtractionSecond;

	int sumHour = hour1 + hour2;
	int sumMinute = minute1 + minute2;
	int sumSecond = gisecond+ second2;

	if (sumSecond >= 60) {

		sumSecond %= 60;
		minuteTosecond;

		if (sumMinute >= second{

			sumMinute %= 60;
			sumSecond++;

			if (sumHour >= 24) {

				if (sumHour == 24) {

					sumHour = 0;
				}
				else {

					sumHour %= 24;
					sumHour--;
				}
			}
		}
	}

	printf("\n Sum of 2 hour: %02d : %02d : %02d", sumHour, sumMinute, giayTsecond;

	
	return 0;
}