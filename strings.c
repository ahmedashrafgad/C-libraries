// function to print string 
void String_voidPrint(char *str)
{
	int i;
	for (i = 0 ; str[i] != 0 ; i++ )
	{
		printf("%c  ",str[i]);
	}
	 printf("\n");
}

// function to scan string from user (the function is existed in C library 
void String_voidScan(char *str)
{
    int i = 0 ;
    while(str[i]<100)
    {
        scanf("%c",&str[i]);
        i++;
        if(str[i]=='\n')
            break;
    }
    str[i]=0;
}

// function to get the length of the string 
int String_intLength(char *str)
{
	int i;
	for ( i= 0 ; str[i] ; i++ );
	return i ;
}

// function to compare 2 strings 	
	int String_intCopmare( char *str1,char *str2)
{
    int i ;
   for (i=0 ; str1[i] !=0 || str2[i]!=0 ; i++)
   {
       if (str1[i] != str2[i])
        return 0 ;
   }
    return 1 ;
}
 // function to make all char of string lower case
 void String_voidUpperToLower(char *str)
{
    int i ;
    for (i = 0 ; str[i];i++)
    {
        if (str[i] >= 'A'  && str[i]<= 'Z')
            str[i] = str[i] + ('a'-'A')  ;
    }
}


// function to add 2 strings in new string 
void String_voidAdd(char *str1,char *str2, char *result)
{
    int i =0, j = 0 ;
    for (i = 0 ; str1[i]; i++)
    {
        result[j] = str1[i];
        j++;
    }
    for (i = 0 ; str2[i]; i++)
    {
        result[j] = str2[i];
        j++;
    }
	//this null to make the function stop
    result[j]=0;
}


// function to copy string 
void String_voidCopy(char *source , char *copy,int copyStrSize)
{
    int i ;
    for (i = 0 ; source[i]&& i < copyStrSize-1 ;i++ )
    {
        copy[i] = source [i];
    }
    copy[i]= 0 ;
}


// function to reverse string 
void String_voidReverse(char *str)
{
    int i ;
    int x = String_intLength(str) ;
    for (i=0 ; i<x/2 ; i++)
    {
        str[i] = str[i] + str[x-1-i];        
        str[x-1-i] = str[i] - str[x-1-i];
        str[i] = str[i] - str[x-1-i];
    }
}

// function to take intger number and make it array of char 
void String_voidIntgerToString(int num , char*str)
{
    int i=0;
    if (num == 0)
    {
        str[0]='0';
        str[1]=0;
        return;
    }
    if (num<0)
    {
        str[i]='-';
        i++;
        num = num*(-1);
    }
    for (;num>0;i++)
    {
        str[i]= num%10+'0';
        num=num/10;
    }
    str[i]=0;
    if (str[0]=='-')
        String_voidReverse(str+1);
    else
        String_voidReverse(str);
}


// function to take string of 3 parts between them ' ' and split it in 3 new strings 
void String_voidSplit(char *str,char *str1,char *str2, char *str3)
{
    int i, j ;
    for (i = 0 ; str[i] ; i++)
    {
        if (str[i]==' ')
        {
            i++;
            break;
        }
        else
            str1[i]=str[i];
    }
    j = 0;
    for (i ; str[i] ; i++)
    {
        if (str[i]==' ')
        {
            i++;
            break;
        }
        else
        {
            str2[j]=str[i];
            j++;
        }
    }
    j = 0;
    for (i ; str[i] ; i++)
    {
        if (str[i]==' ')
        {
            i++;
            break;
        }
        else
        {
            str3[j]=str[i];
            j++;
        }
    }
}


//function to take like (“hi,5,hello,12” ) and split it into numbers and string 
int String_intSplitFrame(char *str,char*s1,char*s2,int *pn1,int*pn2)
{
    int i,flag=0,j=0,k=0,n1=0,n2=0;
    for(i=0; str[i]; i++)
    {
        if(str[i]==',')
        {
            flag++;
        }
        else
        {
            if(flag==0)
            {
                s1[j]=str[i];
                j++;
            }
            else if(flag==1)
            {
                if(str[i]>='0'&&str[i]<='9')
                {
                    n1=n1*10+str[i]-'0';
                }

            }
            else if(flag==2)
            {
                s2[k]=str[i];
                k++;
            }
            else if(flag==3)
            {
                if(str[i]>='0'&&str[i]<='9')
                {
                    n2=n2*10+str[i]-'0';
                }
                else
                    return 0;

            }
        }
    }
    s1[j]=0;
    s2[k]=0;
    *pn1=n1;
    *pn2=n2;
    if(flag!=3)
    {
        return 0;
    }

}


