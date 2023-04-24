#include <stdio.h>
#include <stdio.h>

void bubblesort(int []);
int binarysearch(int [],int);

int main()
{
  int arr[5] = {32,5,7,3,72};
  int num, result, i;
  bubblesort(arr);
  
  
   for(i=0;i<=4;i++)
    {
        printf("%d \n",arr[i]);
    }
  printf("Enter number to be searched \n");
  scanf("%d",&num);
  
  result = binarysearch(arr,num);
  if(result == -1)
  {
            printf("Not found \n");
  }
  else
  {
      printf("Found at index %d \n",result);
  }
  
  return 0;
}

void bubblesort(int arr[])
{
    int i,j; 
    int comparisons=4; 
    int temp;
    for(i=0; i < 4; i++)
    {
             for(j=0; j < comparisons-i; j++)
             {
                    if(arr[j] > arr[j+1])
                     {
                        temp=arr[j];
                        arr[j]=arr[j+1];
                        arr[j+1]=temp;
                     }
             }
    }
   
}

int binarysearch(int arr[], int num)
{
    int low=0, up=4, mid;

    while(low <= up)
    {
              mid = (low+up)/2;
              if(arr[mid] == arr[num])
              {
                          return mid;
              }
              if(arr[mid] < arr[num])
              {
                          low = mid+1;
              }
             else if(arr[mid] > arr[num])
              {
                          up = mid+1;
              }
     return -1;
    }
}
