#include <stdio.h>
int main(){
	int n = 1;
	while (n <=10) {
		if (n % 2 == 0) {
			printf("%d / Â¦¼ö\n",n);
		}
		else {
			printf("%d / È¦¼ö\n", n);
		}
		n++;
	}
	return 0;
}