#include "list.h"

void printList(struct Task* task) {
	printf("[1. ��ȸ]\n");
	
	printf("��ȣ\t�߿�\t����\n");
	for (int i = 0; i < lastIndex; i++) {
		printf("%2d\t", i + 1);
		if (task[i].isVital == 1) 
			printf("��\t");
		else
			printf("  \t");
		
		printf("%s\n", task[i].content);
		}
	}
