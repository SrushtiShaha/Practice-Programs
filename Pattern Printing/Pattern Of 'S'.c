#include <stdio.h>
#include <conio.h>

int main()
{
        int i = 0, j= 0, N = 0;
        
        printf("\t Enter Any Size To Print Pattern Of 'S' -> ");
        scanf("%d",&N);
        
        printf("\n \t Pattern Is -> \n");
        
        printf("\n \t====================================================\n\n");
      
        for( i = 1; i <= N; i++) //S
        {
              for( j = 1; j <= N; j++)
              {
                    if(i == 1 || j == 1 && i <= (N+1)/2 || i == (N+1)/2 || (j == N && i >= (N+1)/2) || i == N)
                    {
                          printf(" * ");
                    }
                    else
                    {
                          printf("   ");
                    }                                     
              }
              
              printf("\n");
        }
        
        printf("\n \t====================================================\n\n");
        
        getch();
        return 0;
}