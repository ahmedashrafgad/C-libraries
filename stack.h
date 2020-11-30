
#define STACK_SIZE   4
#define Q_SIZE   4
typedef enum{
STACK_EMPTY=0,
STACK_FULL=0,
STACK_DONE=1
}StackStatus_t;

typedef enum{
Q_EMPTY=0,
Q_FULL=0,
DONE=1
}QStatus_t;

typedef struct{
	int *dataArray;
	int size;
	int sp
}stack_t;