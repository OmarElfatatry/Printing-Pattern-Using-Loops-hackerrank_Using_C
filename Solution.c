#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
      int actualnumberofraws,rownumber,columnnumber,actualnumberofcolumns,numbertobeprinted,flag=0;
    actualnumberofraws=(n*2)-1;
    actualnumberofcolumns=((n-1)*2)+1;
    for(rownumber=0;rownumber<actualnumberofraws;rownumber++)
    {
        for(columnnumber=0;columnnumber<actualnumberofcolumns;columnnumber++)
        {
            if (rownumber==0) //first row
            {
                printf("%d",n);
                
                if(columnnumber!=actualnumberofcolumns-1) //in all columns print spaces after number except last column
                {
                    printf(" ");
                    
                }
            }
            else if(rownumber==(actualnumberofraws-1)) //last row
            {
                printf("%d",n);
                
                if(columnnumber!=actualnumberofcolumns-1) //in all columns print spaces after number except last column
                {
                    printf(" ");
                    
                }
            }
            else //rows between them
            {
                if(columnnumber==0) //first element in each row
                {
                    numbertobeprinted=n;
                    printf("%d ",numbertobeprinted);
                    
                }
                else if(columnnumber==actualnumberofcolumns-1) //last element in each row
                {
                    numbertobeprinted=n;
                    printf("%d",numbertobeprinted);
                    
                }
                else //columns between first and last columns
                {
                    if (flag==0)
                    {
                    numbertobeprinted-=1;
                    }
                    if(rownumber==columnnumber)
                    {
                        flag=1;
                        //numbertobeprinted-=1;
                    }
                    printf("%d ",numbertobeprinted);
                    
                    if((rownumber+columnnumber)>=(actualnumberofcolumns-1))
                    {
                        numbertobeprinted+=1;
                    }
                }
            }
        }
        printf("\n");
        
        flag=0;

    }
    return 0;
}