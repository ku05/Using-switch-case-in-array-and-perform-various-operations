#include<stdio.h>
int main()
{
    int a[5],i,sw,choice=1;
    printf("enter the array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
while(choice)
{
printf("If u want to display the array press 1 \n");
printf("If u want to print the reverse array press 2\n");
printf("If u want to print the sum of array press 3\n");
printf("If u want to copy the first array into second array press 4\n");
printf("If u want to print the number of duplicate variable in the array press 5\n");
printf("If u want to print the maximum and minimum value of the array press 6\n");
scanf("%d",&sw);
switch(sw)
{
    case 1:
    {
        printf("\n The Array is :\n");
        for(i=0;i<5;i++)
        {
            printf("%d",a[i]);
            printf("\n");
        }
        
        break;
    }
    case 2:
    {
        printf("\n Reverse order print the array\n");
        for(i=4;i>=0;i--)
        {
            printf("%d \n",a[i]);
        }
        break;
    }
    case 3:
    {
        int sum=0;
        for(i=0;i<5;i++)
        {
            sum=sum+a[i];
        }
        printf("\n sum is %d",sum);
        break;
    }
    case 4:
    {
        int b[i];
        for(i=0;i<5;i++)
        {
            b[i]=a[i];
        }
        printf("\n Second array variable is :\n");
        for(i=0;i<5;i++)
        {
            printf("%d",b[i]);
            printf("\n");
        }
        break;
    }
    case 5:
    {
        int j,count=0;
        for(i=0;i<5;i++)
        {
            for(j=1+i;j<5;j++)
            {
                if(a[i]==a[j])
                {
                    count++;
                }                
            }
        }

        printf("\n duplicate variable is %d",count);
        break;
    }
    case 6:
    {
        int min,max;
        max=a[0];
        min=a[1];
        for(i=0;i<5;i++)
        {
            if(a[i]>max)
            {
                max=a[i];
            }
            if(a[i]<min)
            {
                min=a[i];
            }
        }
        printf("\n max value is %d",max);
        printf("\n min value is %d",min);
    }
    default :printf("\n Invalid number");
}
    printf("\n do u want to continue press 1 otherwise press 0\n");
    scanf("%d",&choice);

}
}