#include <stdio.h>

int main() {
	int c, flag;
	flag = 0;
	while((c = getchar()) != EOF) {
		if (c != ' '){
			putchar(c);
			flag = 0;
		}
		else if(flag == 0 && c == ' '){
    		putchar(c);
			flag = 1;
		}
	}
	return 0;
}
