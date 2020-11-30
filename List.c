/*this function is to print linkedlist*/
void List_voidPrint(node_t* head)
{
		node_t*current=head;
		node_t*p1=head;
		node_t*p2=head;
		while (current !=0 && p1->next && (p2->next))
		{
			printf("%d  ",current->data);
			current = current->next;
			if(p1->next!=0)
			p1=p1->next;
			if(p1->next!=0)
			p2=p2->next->next;
			if(p1==p2)
            {
                break;
            }
		}

		printf("\n");
}
/* this function is to add node in the next location in linkedlist*/
void List_voidAddNodeToFirst(node_t**phead,int data)
{
	node_t* newnode = List_pstructCreateNode (data);
	newnode->next = *phead;
	*phead = newnode;
}
/*this function is to add note in the last position in the linked list*/
void List_voidAddNodeToLast(node_t**phead,int data)
{
	node_t* newnode = List_pstructCreateNode (data);

	if (*phead == 0 )
    {
        *phead = newnode;
        return;
    }
    node_t* current = *phead;
	while(current -> next !=0)
	{
		  current = current -> next ;
	}
       	  current -> next  = newnode;
}
/* this function is to insert node in certain location in linked list*/
int List_intInsertNodeBeforeData(node_t**phead, int OldData , int NewData)
{
	node_t* newnode = List_pstructCreateNode (NewData);
/*this codition means if you found the date in the beggining */
	if(*phead==0)
        return 0;
	if ((*phead)->data == OldData )
    {
         newnode->next = *phead;
         *phead=newnode;
         return 1;
    }
    node_t* current = *phead;
	while(current -> next !=0)
	{
	    if (current->next->data  == OldData)
          {
              newnode->next=current->next;
              current ->next = newnode;
              return 1;
          }
	     current = current -> next ;
	}
	return 0;
}
/* this function to remove the last node in linkedlist*/
int List_intRemoveListFromLast(node_t* head)
{
        node_t*current=head;
        if (current -> next == 0)
        {
            head = 0 ;
            return 0 ;
        }
		while(current -> next -> next !=0)
	{
		  current = current -> next ;
	}
       	  current -> next  = 0;
       	  return 1;
}
/*function to make push stack of linkedlist*/
int List_intPush(node_t**phead,int data)
{
    node_t*newnode=List_pstructCreateNode(data);
    if(newnode ==0)
        return -1;// no space to make stack
    newnode->next=*phead;
    *phead=newnode;

}

/*function to make pop stack of linkedlist*/
int List_intPop(node_t**phead,int data)
{
    if(*phead ==0)
        return -1;// stack is empty
   data=(*phead)->data;
   node_t*temp=*phead;
   *phead=(*phead)->next;
   free(temp);
   return 0;

}
/* function to delete node from linkedlist*/


/* this function is to edit the date in node in linkedlist*/
int List_voidEditListbyData(node_t* head,int OldData, int NewData)
{
	node_t*current=head;
	if (head == 0)
    {
        printf("no data in the list");
    }
    int i = 0;
	while(current->data!=OldData)
	{
		current = current->next;
		if(current->next == 0)
            return -1;
            i++;
	}
	current -> data = NewData;
	return i;
}