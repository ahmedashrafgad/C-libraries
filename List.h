typedef struct name{
	int data ;
	struct name *next;
}node_t;


node_t* List_pstructCreateNode (int data);
void List_voidAddNodeToLast(node_t** phead,int data);
void List_voidPrint(node_t* head);
void List_voidAddNodeToFirst(node_t**phead,int data); 

