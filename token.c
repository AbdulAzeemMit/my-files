#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{

    int t,i,n=0,cons=0,count=0,count2=0,k,j=0,a[100];
    char exp[100],temp[100],keyword[32][10]={"tni","rof","od","elihw","otua","kaerb","esac","rahc","tsnoc","eunitnoc","tluafed","elbuod","esle","mune"};
printf("enter the expression\n");
fgets(exp,20,stdin);


  j=0;
for(i = 0; exp[i]!='\0'; i++)
  {
    if(exp[i]=='>'||exp[i]=='<'||exp[i]=='%'||exp[i]=='/'||exp[i]=='*'||exp[i]=='-'||exp[i]=='+'||exp[i]==')'||exp[i]=='='||exp[i]==' '||exp[i]=='('||exp[i]=='{'||exp[i]==';'||exp[i]==',')
   { 
     a[j]=i;
     j++; 
     n++;
   }
  }
    
  // for(i=0;i<n;i++)
  //   printf("\n%d ",a[i]);

printf("\n....................");
 for (i = 0; i < n; i++)
   {
    k = a[i];
    t = 0;
    while(k!=0&&exp[k-1]!=' '&&exp[k-1]!='='&&exp[k-1]!='('&&exp[k-1]!=')'&&exp[k-1]!='+'&&exp[k-1]!='-'&&exp[k-1]!='*'&&exp[k-1]!='/'&&exp[k-1]!='%'&&exp[k-1]!=';'&&exp[k-1]!='<'&&exp[k-1]!='>')
      {
        temp[t]=exp[k-1];
        k--;
        t++;
      }
        temp[t]='\0';
         //printf("\n%s",temp);
        int f=0;
    
    if(temp[0]!='\0')
      {
      for(j=0;j<3;j++)
       {
         if(strcmp(temp,keyword[j])==0) 
         {
          count++;
          f=1;
         }
       }
      
     if(f==0)
      count2++;
      }


   }

printf("\nKEYWORDS:%d",count);
printf("\nIDENTIFIERS:%d\n",count2);
}
