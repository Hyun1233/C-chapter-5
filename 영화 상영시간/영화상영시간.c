#include <stdio.h>

void convert_time(int minutes);

int main(void) {
	int time = 118; // �� �ð�(�� ����)
	convert_time(time); // �Լ� ȣ��
	return 0;
}

void convert_time(int minutes) { //�Լ� ����
	int hour = minutes / 60; // �ð� : �� �ð��� 60���� ���� ��
	int min = minutes % 60; // �� : �� �ð��� 60���� ���� ������
	printf("%d�ð� %d��\n", hour, min); // ��� ���
}