#include<stdio.h>
#include<stdbool.h>
#define n 4

void printIt(int b[n][n])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
}

bool noNeigh(int b[n][n],int r,int c)
{
    int i,j;
    
    for(i=0;i<c;i++)
    {
        if(b[r][i])
        {
            return false;
        }
        
    }
    
    for(i=r,j=c;i>=0 && j>=0;i--,j--)
    {
        if(b[i][j])
        {
            return false;
        }
    }
    
    for(i=r,j=c;j>=0 && i<n;i++,j--)
    {
        if(b[i][j])
        {
            return false;
        }
    }
    
    return true;
}

bool solveIt(int b[n][n],int c)
{
    if(c>=n)
    {
        return true;
    }
    for(int i=0;i<n;i++)
    {
        if(noNeigh(b,i,c))
        {
            b[i][c] = 1;
            
            if(solveIt(b,c+1))
            {
                return true;
            }
            b[i][c] = 0;
        }
    }
    return false;
}

int main()
{
    int board[n][n] = {{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
    
    if(solveIt(board,0) == false)
    {
        printf("Solution does not exist\n");
    }
    else
    {
        printf("Solution is\n");
        printIt(board);
    }
}

/* OUTPUT

Solution is                                                                                                                                     
0 0 1 0                                                                                                                                         
1 0 0 0                                                                                                                                         
0 0 0 1                                                                                                                                         
0 1 0 0 

*/
