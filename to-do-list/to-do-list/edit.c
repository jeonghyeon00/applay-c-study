#include "edit.h"

void addTask(struct Task* task) {
	printf("[2. �߰�]\n");
	char content[200];
	int isVital;

	printf("* ���� �Է� : ");
	scanf_s(" %[^\n]s", content, sizeof(content));

	printf("* �߿� ����(1 or 0): ");
	scanf_s("%d", &isVital);

	task[lastIndex].num = lastIndex;
	task[lastIndex].isVital = isVital;
	strcpy_s(task[lastIndex].content, sizeof(content), content);

	printf("�߰��Ǿ����ϴ�.\n");
	lastIndex++;
}

void removeTask(struct Task* task) {
	int index;
	printf("[3. ����]\n");

	printf("������ ��ȣ :");
	scanf_s("%d", &index);
	lastIndex--;
	for (int i = index - 1; i < lastIndex; i++) {
		task[i].num = task[i + 1].num;
		task[i].isVital = task[i + 1].isVital;
		strcpy_s(task[i].content, sizeof(task[i].content), task[i + 1].content);
	}
	printf("�����Ǿ����ϴ�.\n");
}