/* this function is to print an array*/
void Array_voidPrint (int*arr , int size)
{
    int i ;
    for (i=0;i<size;i++)
    {
        printf("%d   ",arr[i]);
    }
     printf("\n");
}

/* this function is to scan array from user */
int Array_intScan(int *arr,int size)
{
    int i,result_size;
    printf("enter N elements but not more than 100\n");
    scanf("%d",&result_size);
    if (result_size)
        result_size = size;
               printf("enter the elements\n");
    for (i=0 ; i<result_size ; i++)
    {
        scanf("%d",&arr[i]);
    }
    return result_size ;
}


 /* this function to find the min and the max  of an array */
 void Array_voidMaxMin(int *arr,int size,int*Max,int *Min)
{
    int i , max = arr[0], min = arr[0];
    for (i= 0 ; i < size ; i++)
    {
        if (arr[i]>max)
             max = arr[i] ;
        if (arr[i]<min)
             min = arr[i]  ;
    }
     *x= max;
     *y=min;
}

/* this function is to swap 2 array */
void Array_voidSwap (int *arr1,int size1 ,int *arr2, int size2)
{
    int i ,size;
	if (size1 > size2)
	size = size2;
	else 
		size=size1;
    for (i = 0 ; i < size ; i++)
    {
        arr1[i] = arr1[i] + arr2[i];
        arr2[i] = arr1[i] - arr2[i];
        arr1[i] = arr1[i] - arr2[i];
    }
}

/* this function to reverse an array */
void Array_voidReverse(int *arr , int size)
{
    int i ;
    for (i=0 ; i<size/2 ; i++)
    {
        arr[i]        = arr[i] + arr[size-1-i];
        arr[size-1-i] = arr[i] - arr[size-1-i];
        arr[i]        = arr[i] - arr[size-1-i];
    }
}



/* this function is to scan array from user */
int Array_intScanDynamic(int *arr)
{
    int i,result_size;
    printf("enter N elements but not more than 100\n");
    scanf("%d",&result_size);
	
    arr=(int*)malloc(size*sizeof(int));
               printf("enter the elements\n");
    for (i=0 ; i<result_size ; i++)
    {
        scanf("%d",&arr[i]);
    }
    return result_size ;
}

/* this function is to copy array */
void Array_voidCopy(int *source,int size_sou,int *destination,int size_des )
{
    int i ;
    if (size_sou>size_des)
        size_sou=size_des;
    for(i=0; i<size_sou;i++)
    {
        destination[i]=source[i];
    }
    return size_sou;
}



/* this function is to take 2 numbers and make array with all numbers between them*/
int Array_intCreate(int start, int end, int *arr)
{
    int i ,size;
    if (end > start)
    {
        size = end - start ;
        for (i = 0 ; i < size -1 ; i++)
        {
            arr[i]=start+1;
            start ++ ;
        }
    }
    else
    {
        size = start - end ;
        for (i = 0 ; i < size -1 ; i++)
        {
            arr[i]=end+1;
            end ++ ;
        }
    }
    return i;
}
/* function to search for no of repeates of an element in  array */
int Array_intSearch(int*arr,int size,int element,int*ElementCounter)
{

    int i,index=-1,count=0;
    for(i=0; i<size; i++)
    {
        if(arr[i]==element)
        {
            if(count==0)
            {
                index= i;
            }

            count++;
        }
    }
    *ElementCounter=count;
    return index;
}

/* function to find most repeated element in an array */
int Array_intMostRepeated(int*arr,int size)
{
    int i,j,count,max=0,element;
    for(i=0;i<size;i++)
    {
        count=0;
        for(j=i;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count>max)
        {
            max=count;
            element=arr[i];
        }
    }
    printf("%d \n",max);
    return element;
}

/* function to add two array in 1 new array */
void Array_voidAdd(int *arr1,int *arr2, int *result, int size)
{
    int i =0, j = 0 ;
    for (i = 0 ;i<size; i++)
    {
        result[j] = arr1[i];
        j++;
    }
    for (i = 0 ; i<size; i++)
    {
        result[j] = arr2[i];
        j++;
    }
	//this null to make the function stop
    
}

/* function to remove the repeated elements and return it in a new array */
int Array_intRepeatedRemovel(int*arr,int *result,int size)
{
    int i,result_size,j,count,max=0,element;
    for(i=0;i<size;i++)
    {
        j = i+1;
            if(arr[i]==arr[j])
            {
               arr[i]=0;
            }
    }
        result_size = 0;
    for (i=0 ; i<size ; i++)
    {
        if (arr[i]!=0)
        {
        result[result_size]=arr[i];
        result_size++;
        }
    }
return result_size ;
}

// find an element in array if the array iis sorted
int Array_intBinarySearch(int *arr,int size,int element)
{
    int first=0 ,last=size-1 , middle;
    while (first<=last)
    {
    middle = (last + first)/2 ;
    if (arr[middle] == element)
        return middle;
    else if (arr[middle]>element)
    {
        //this mean element in the first park
        last = middle-1 ;
    }
    else if(arr[middle]<element)
    {
         //this mean element in the second park
        first = middle+1 ;
    }
}
return -1;
}
 /* this function take an array and sort it ascending order*/
 void Array_voidSort(int *arr,int size)
{
    int i,j;

	for (int i = 0; i < size; i++)                     //Loop for ascending ordering
	{
		for (int j = 0; j < size; j++)             //Loop for comparing other values
		{
			if (arr[j] > arr[i])                //Comparing other array elements
			{
				int tmp = arr[i];         //Using temporary variable for storing last value
				arr[i] = arr[j];            //replacing value
				arr[j] = tmp;             //storing last value
			}
		}
	}
}

/* sort array using bubble sort*/
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void array_voidBubbleSort(int *arr,int size)
{
    int i,j ;
    for (j= 0 ; j < size ; j++)
    {
        for ( i = 0 ; i<size-1 ; i++)
        {
            if (arr[i]>arr[i+1])
            {
                //swab elements
                swap(&arr[i],&arr[i+1]);
            }
        }
    }
}

/* worest case O(n^2)*/
/* best case O(n)*/
/* size O(1)*/

/* sort array using slection sort*/

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void Array_voidSelectionSort(int *arr,int size)
{
    int i,j, Max = 0, index = 0;
    for (i= 0 ; i < size; i++)
    {
        Max = arr[0];
        index = 0;
        for ( j = 0 ; j <size - i; j++)
        {

            if(arr[j]> Max)
            {
                Max = arr[j];
                index = j;
            }
        }
        swap(&arr[index],&arr[size-1-i]);
    }
}
/* worest case O(n^2)*/
/* best case O(n^2)*/
/* size O(1)*/

/* sorting using countiong sort */
void Array_voidCountingSort(int *arr,int size)
{
    int i,j,k, max = arr[0],min= arr[0];
    for (i = 0 ; i < size ; i++)
    {
        if(arr[i]>max)
            max = arr[i];
        if (arr[i]<min)
            min = arr[i];
    }
    k = max - min + 1 ;
    int *count = (int*) calloc(k,sizeof(int));
    for (i=0; i<size; i++)
    {
        count[arr[i]-min]++;
    }
    i=0;
    for (j=0 ; j<k ; j++)
    {
        while (count[j])
        {
            arr[i] = j+min;
            i++;
            count[j]--;
        }
    }
    free(count);
}

/* array sorting using heap sort */
void heapify(int arr[], int n, int i) 
{ 
    int largest = i; // Initialize largest as root 
    int l = 2*i + 1; // left = 2*i + 1 
    int r = 2*i + 2; // right = 2*i + 2 
  
    // If left child is larger than root 
    if (l < n && arr[l] > arr[largest]) 
        largest = l; 
  
    // If right child is larger than largest so far 
    if (r < n && arr[r] > arr[largest]) 
        largest = r; 
  
    // If largest is not root 
    if (largest != i) 
    { 
        swap(arr[i], arr[largest]); 
  
        // Recursively heapify the affected sub-tree 
        heapify(arr, n, largest); 
    } 
}  
void heapSort(int arr[], int n) 
{ 
    // Build heap (rearrange array) 
    for (int i = n / 2 - 1; i >= 0; i--) 
        heapify(arr, n, i); 
  
    // One by one extract an element from heap 
    for (int i=n-1; i>0; i--) 
    { 
        // Move current root to end 
        swap(arr[0], arr[i]); 
  
        // call max heapify on the reduced heap 
        heapify(arr, i, 0); 
    } 
} 

/* code to reveerse 2 arraies and swap them */
 void Array_voidSwapReverse(int *arr1,int *arr2 , int size)
 {
     int temp = 0 , j = size -1;
     for (int i = 0 ; i<size ; i++)
     {
         temp = arr1[i];
         arr1[i]=arr2[j];
         arr2[j]=temp;
         j--;
     }
 }