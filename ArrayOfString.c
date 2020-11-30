
/* function to compare array of strings */
static int ArrStr_intCompare(char*str1,char*str2)
{
    int i;
    for(i =0 ; str1[i]!=0 ||str2[i] != 0 ;i++ )
    {
        if (str1[i]>str2[i])
            return 1;
        else if (str1[i]<str2[i])
            return -1;
    }
    return 0;
}

/*              */
int ArrStr                        _intArrayOfString(char **arr,int size,char*s)
{
    int i ;
    for (i=0;i<size;i++)
    {
    if (0==String_intCompare(arr[i],s))
    {
        return i;
    }
    }
    return -1;
}