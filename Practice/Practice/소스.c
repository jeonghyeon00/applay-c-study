#include <stdio.h>
int main(){
	int n = 1;
	while (n <=10) {
		if (n % 2 == 0) {
			printf("%d / ¦��\n",n);
		}
		else {
			printf("%d / Ȧ��\n", n);
		}
		n++;
	}
	return 0;
}