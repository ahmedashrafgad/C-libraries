#include "stack.h"


static int stack[STACK_SIZE];
static int sp=0;

static int Queue[Q_SIZE];
static int in=0;
static int out=0;
static Q_flag=0;




StackStatus_t push(int data)
{
    if(sp<STACK_SIZE)
    {
        stack[sp]=data;
        sp++;
        return DONE;
    }
    else
    {
        return STACK_FULL;
    }

}
StackStatus_t pop(int* data)
{
    if(sp>0)
    {
        sp--;
       *data=stack[sp];
        return DONE;
    }
    else
    {
        return STACK_EMPTY;
    }

}


QStatus_t C_inqueue(int data)
{
   if(in==Q_SIZE)
   {
       in=0;
       Q_flag=1;
   }
   if((in==out)&&(Q_flag==1))
   {
       return Q_FULL;
   }
   else{
     Queue[in]=data;
    in++;
    return DONE;
   }

}

QStatus_t C_dequeue(int *data)
{
   if(out==Q_SIZE)
   {
      out=0;
       Q_flag=0;
   }
   if((out==in)&&(Q_flag==0))
   {
       return Q_EMPTY;
   }
   else
    {
    *data=Queue[out];
    out++;
    return DONE;
   }
}


QStatus_t inqueue(int data)
{
   if(in==Q_SIZE)
   {
       return Q_FULL;
   }
   else{
     Queue[in]=data;
    in++;
    return DONE;
   }

}
