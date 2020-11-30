/* find char in 2d array*/
int array_2dfind(char arr[][100],int size ,char element,int *x,int *y)
{
    int i,j,c=0;
    for (i=0;i<size;i++)
    {
        for (j=0;j<100;j++)
        {
            if(arr[i][j]==element)
            {
                c++;
                *x=i;
                *y=j;
            }
        }
            
    }
    return c;
}


/*semitric array or not */
int matrix_intSemtric(int arr[][100],int row, int col)
{
    int i, j,d1=0,d2=0;
    if (row != col)
        return 0;
    else
    {
        for (int i = 0, j = 0  ; i < row ; i++,j++)
        {
            d1 += arr[i][j];
        }
        for (int j = 0, i = col -1 ; i >= 0 ; i--, j++)
        {
            d2 += arr[i][j];
        }
        if (d1 == d2)
        {
            return 1;
        }
        else return 2;
    }

}