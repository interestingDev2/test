#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a;
	int b;
	int c;
	int d;
	
	
	// Get first digit from the user	
	printf("Enter first digit=");
	scanf("%d", &a);
	if(a != 1) {
		printf("Please enter 1");
		return 0;
	}
	
	
	// Get second digit from the user	
	printf("Enter second digit=");
	scanf("%d", &b);
	if(b != 2 && b !=3) {
		printf("Please enter 2 or 3");
		return 0;
	}
	
	
	// Get third digit from the user	
	printf("Enter third digit=");
	scanf("%d", &c);
	if(b == 2) {
		if(c != 4 && c != 5) {
			printf("Please enter 4 or 5");
			return 0;
		}
	}
	else if(b == 3) {
		if(c != 6 && c != 7) {
			printf("Please enter 6 or 7");
			return 0;
		}
	}
	
	
	// Get forth digit from the user	
	printf("Enter third digit=");
	scanf("%d", &d);
	if(c == 4) {
		if(d != 8 && d != 9) {
			printf("Please enter 8 or 9");
			return 0;
		}
	}
	else if(c == 5) {
		if(d != 10 && d != 11) {
			printf("Please enter 10 or 14");
			return 0;
		}
	}
	else if(c == 6) {
		if(d != 12 && d != 13) {
			printf("Please enter 12 or 14");
			return 0;
		}
	}
	else if(c == 7) {
		if (d != 14 && d != 15) {
			printf("Please enter 14 or 15");
			return 0;
		}
	}
	
	
	// Output the words to screen
	
	// First word
	if(a == 1) {
		printf("Ben ");
	}
	
	// Second word
	if(b == 2) {
		printf("bugun ");
	}
	else if (b == 3) {
		printf("yarin ");
	}
	
	// Third Word
	if(c == 4) {
		printf("eve ");
	}
	else if(c == 5) {
		printf("okuldan ");
	}
	else if(c == 6) {
		printf("ise ");
	}
	else if(c == 7) {
		printf("tatile ");
	}
	
	// Forth word
	if(d == 8) {
		printf("N/A");
	}
	else if(d == 9) {
		printf("gitmedim ");
	}
	else if(d == 10) {
		printf("kactim ");
	}
	else if(d == 11) {
		printf("geldim ");
	}
	else if(d == 12) {
		printf("baslayacagim ");
	}
	else if(d == 13) {
		printf("gitmeyeceigm ");
	}
	else if(d == 14) {
		printf("cikacaigm ");
	}
	else if(d == 15) {
		printf("gideceigm ");
	}
	
	
	
	return 0;
}
