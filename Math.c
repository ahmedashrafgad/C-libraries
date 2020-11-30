//macro function for rotate no to the left 
#define CSHIFT(num,shifts,size)   ((num << shifts) | (num >> (size*8) - shifts))

//macro function for rotate no to the right 
#define CSHIFT(num,shifts,size)   ((num >> shifts) | (num << (size*8) - shifts))

/* function to swap 2 numbers */
void Math_voidSwapNumber(int* p1 , int* p2)
{
    *p1 = *p1 + *p2;
    *p2 = *p1 - *p2;
    *p1 = *p1 - *p2;
}
/* binary rep */
int Math_intBinaryNum(int n)
{
    int  c, k;
    for (c = 31; c >= 0; c--)
  {
    k = n >> c;

    if (k & 1)
      printf("1");
    else
      printf("0");
  }

  printf("\n");
  return n ;
}

/* to find prime number */
int Math_intIsPrime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
  //  printf("prime");

    return 1;
}

/* function to get prime numbers between to numbers */
int Math_intPrimeBetween2Numbers(int n1 ,int n2)
{
    int i,count=0;
    for(i=n1;i<=n2;i++)
    {
        if(Math_intIsPrime(i))
        {
            printf("%d ",i);
            count++;
        }
    }
    return count;
}

/* this function to get factorial of a number */
int Math_intFactorial(int n)
{
    int i,result=1;
   for(i=1;i<=n;i++)
  {
      result=result*i;
  }
    return result;
}

/* the function to find if the num power 3 or not */
int Math_intPowerThree(int Num)
{
    int mul=0;
    for (int i = 0 ; i < Num ; i++)
    {
        mul = i*i*i ;
        if (mul == i)
            return 0;
        else
            return 1 ;
    }
}

/*function to take 3 integers and find if they make triangle or not and type of triangle*/
int Math_intIsTriangle(int L1,int L2,int L3)
{
    if (L1+L2>L3 && L1+L3>L2 && L2+L3>L1)
    {
        if (L1 = L2 && L1==L3)
        {
            printf("Equilateral triangle");
            return 1;
        }
        else if (L1==L2 || L1==L3 || L2==L3)
        {
            printf("Equilateral triangle");
            return 2;
        }
        else
        {
            printf("Scalene triangle");
            return 3 ;
        }

    }
    else
    {
        printf("this is not triangle\n");
        return -1;
    }
    return 0 ;
}