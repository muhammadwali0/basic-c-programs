#include <stdio.h>

int main(){

	int choice;

	printf("---- Menu ----\n1.Kilometer to Miles\n2.Meters to Feet\n3.Centimeters to Inches\nYour choice: ");
	
	scanf("%d", &choice);

	switch(choice){
		case 1:
			float km, mi;
			printf("Enter distance in Kilometers: ");
			scanf("%f", &km);
			mi = km * 0.6213271;
			printf("%.2fkm is %.2fmi.\n", km, mi);
			break;
		case 2:
			float m, ft;
			printf("Enter distance in Meters: ");
			scanf("%f", &m);
			ft = m * 3.28084;
			printf("%.2fm is %.2fft.\n", m, ft);
			break;
		case 3:
			float cm, in;
			printf("Enter distance in Centimeters: ");
			scanf("%f", &cm);
			in = cm / 2.54;
			printf("%.2fcm is %.2fin.\n", cm, in);
			break;
		default:
			printf("Invalid Option.\n");
	}

	return 0;
}


