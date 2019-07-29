#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10001

typedef struct {
	int queue[MAX];
	int front, rear;
} QueueType;

void init(QueueType *q) {
	q->front = q->rear = 0;
}

int is_empty(QueueType *q) {
	if (q->front == q->rear)
		return 1;
	else
		return 0;
}

void enqueue(QueueType *q, int item) {

	q->queue[q->rear] = item;
	q->rear += 1;
}

int dequeue(QueueType *q) {
	if (is_empty(q)) {
		return -1;
	}
	else {
		q->front += 1;
		return q->queue[q->front-1];
	}
}

int size(QueueType *q) {
	return q->rear - q->front;
}

int front(QueueType *q) {
	if (q->front == q->rear)
		return -1;
	else
		return q->queue[q->front];
}

int back(QueueType *q) {
	if (q->front == q->rear)
		return -1;
	else
		return q->queue[q->rear-1];
}

int main(void) {
	QueueType q;

	init(&q);

	int N, data;
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		char cmd[10];
		scanf("%s", cmd);
		if (strcmp(cmd, "push") == 0) {
			scanf("%d", &data);
			enqueue(&q, data);
		}
		else if (strcmp(cmd, "pop") == 0) {
			printf("%d\n", dequeue(&q));
		}
		else if (strcmp(cmd, "size") == 0) {
			printf("%d\n", size(&q));
		}
		else if (strcmp(cmd, "empty") == 0) {
			printf("%d\n", is_empty(&q));
		}
		else if (strcmp(cmd, "front") == 0) {
			printf("%d\n", front(&q));
		}
		else if (strcmp(cmd, "back") == 0) {
			printf("%d\n", back(&q));
		}
	}

	return 0;
}