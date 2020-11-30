
void IntToStr(int n,char*str)
{
    int i=0;
    if(n==0)
    {
        str[0]='0';
        str[1]=0;
        return;
    }
    if(n<0)
    {
        str[i]='-';
        i++;
        n=n*(-1);
    }
    for(; n>0; i++)
    {
        str[i]=n%10+'0';
        n=n/10;
    }
    str[i]=0;
    if(str[0]=='-')
        string_reverse(str+1);
    else
        string_reverse(str);

}

int StrToInt(char*str)//250k3
{
    int i,n=0;
    for(i=0; str[i]; i++)
    {
        if(str[i]>='0'&&str[i]<='9')
        {
            n=n*10+str[i]-'0';
        }

    }
    return n;

}

int frame(char *str,char*s1,char*s2,int *pn1,int*pn2)
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