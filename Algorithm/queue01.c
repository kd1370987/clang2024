#include<stdio.h>
#define QS 8
int queue[QS];
int head = 0;
int tail = 0;

void display(void);
int enqueue(int d);
int dequeue(int* pd);

main() {
	int key, data, result;
	do {
		printf("\n◆円キューはi、でキューはoを入力して＞");
		key = getche();
		printf("\n");

		//エンキュー処理
		if (key == 'i') {
			printf("データ入力＞");
			scanf("%d", &data);
			result = enqueue(data);
			if (result == -1) {
				printf("\n※※※キューが一杯です※※※\n");
			}
			else {
				display();
			}
		}
		
		//デキュー処理
		if (key == 'o') {
			result = dequeue(&data);
			if (result == -1) {
				printf("\n※※※キューが空です※※※\n");
			}
			else {
				printf("キューがデータ(%d)を取り出しました\n", data);
				display();
			}
		}
	}while (key != 'e');
}


void display(void) {
	int i;
	printf("\n＝＝＝現在のキューの内容＝＝＝\n");
	for (i = 0; i<QS; i++) {
		printf("queue[%2d]は%5d", i, queue[i]);
		if (i == head) {
			printf("←headが示している所(現在headは%d)", head);
		}
		if (i == tail) {
			printf("←tailが示している所(現在tailは%d)", tail);
		}
		printf("\n");
	}
}


//キューにデータを入れる(エンキューする)関数
int enqueue(int d) {
	if ((tail + 1) % QS == head) {
		return -1;
	}
	queue[tail] = d;
	tail += 1;
	tail = tail % QS;
	return 0;
}


int dequeue(int* pd) {
	if (head == tail) {
		return -1;
	}
	*pd = queue[head];
	queue[head] = 0;
	head += 1;
	head = head % QS;
	return 0;
}