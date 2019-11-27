#include <stdio.h>
#include "list.h"
#include "edit.h"
#include <stdlib.h>
#include "task.h"

void printMenu();
void selectMenu(struct Task* task);

int lastIndex = 0;

int main() {
	struct Task task[100];
	while (1) {
		system("cls");
		printMenu();
		selectMenu(task);
		system("pause");
	}


	return 0;
}

void printMenu() {
	printf("[To Do List]\n");
	printf("1. 조회\n");
	printf("2. 추가\n");
	printf("3. 삭제\n");
	printf("4. 종료\n");

}

void selectMenu(struct Task* task) {
	int num = 0;
	printf("선택: ");
	scanf_s("%d", &num);

	system("cls");

	switch (num) {
		case 1:
			printList(task); break;
		case 2:
			addTask(task); break;
		case 3:
			removeTask(task); break;
		case 4:
			printf("종료합니다. \n");
			exit(0);


	}

}