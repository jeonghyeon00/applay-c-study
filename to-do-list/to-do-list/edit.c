#include "edit.h"

void addTask(struct Task* task) {
	printf("[2. 추가]\n");
	char content[200];
	int isVital;

	printf("* 내용 입력 : ");
	scanf_s(" %[^\n]s", content, sizeof(content));

	printf("* 중요 여부(1 or 0): ");
	scanf_s("%d", &isVital);

	task[lastIndex].num = lastIndex;
	task[lastIndex].isVital = isVital;
	strcpy_s(task[lastIndex].content, sizeof(content), content);

	printf("추가되었습니다.\n");
	lastIndex++;
}

void removeTask(struct Task* task) {
	int index;
	printf("[3. 삭제]\n");

	printf("삭제할 번호 :");
	scanf_s("%d", &index);
	lastIndex--;
	for (int i = index - 1; i < lastIndex; i++) {
		task[i].num = task[i + 1].num;
		task[i].isVital = task[i + 1].isVital;
		strcpy_s(task[i].content, sizeof(task[i].content), task[i + 1].content);
	}
	printf("삭제되었습니다.\n");
}