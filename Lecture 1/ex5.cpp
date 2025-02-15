#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include <math.h>

int main(void) {

	int gio1;
	int phut1;
	int giay1;

	int gio2;
	int phut2;
	int giay2;

	printf("\n Nhap vao gio thu nhat: ");
	scanf("%d", &gio1);

	printf(" Nhap vao phut thu nhat: ");
	scanf("%d", &phut1);

	printf(" Nhap vao giay thu nhat: ");
	scanf("%d", &giay1);

	printf("\n Nhap vao gio thu hai: ");
	scanf("%d", &gio2);

	printf(" Nhap vao phut thu hai: ");
	scanf("%d", &phut2);

	printf(" Nhap vao giay thu hai: ");
	scanf("%d", &giay2);

	if (giay1 < 0 || giay1 > 59 || phut1 < 0 || phut1 > 59 || gio1 < 0 || gio1 > 23 || giay2 < 0 || giay2 > 59 || phut2 < 0 || phut2 > 59 || gio2 < 0 || gio2 > 23) {

		printf("\n Xin vui long kiem tra lai !");
		
		return -1;
	}

	int giayHieu = abs(giay1 - giay2);
	int phutHieu = abs(phut1 - phut2);
	int gioHieu = abs(gio1 - gio2);

	printf("\n Hieu hai gio: %02d : %02d : %02d", gioHieu, phutHieu, giayHieu);

	int gioTong = gio1 + gio2;
	int phutTong = phut1 + phut2;
	int giayTong = giay1 + giay2;

	if (giayTong >= 60) {

		giayTong %= 60;
		phutTong++;

		if (phutTong >= 60) {

			phutTong %= 60;
			gioTong++;

			if (gioTong >= 24) {

				if (gioTong == 24) {

					gioTong = 0;
				}
				else {

					gioTong %= 24;
					gioTong--;
				}
			}
		}
	}

	printf("\n Tong hai gio: %02d : %02d : %02d", gioTong, phutTong, giayTong);

	
	return 0;
}