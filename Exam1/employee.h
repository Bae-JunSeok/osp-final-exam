typedef struct employee{
	char name[20];
	int score;
}empNode;

typedef struct list{
	empNode* head;
	empNode* tail;
}empList;
