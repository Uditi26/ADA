#include <stdio.h>
#include <stdlib.h>
int a[10][10], vis[10],n, q[10], f=0, r=-1;
void bfs(int b)
{
    int i;
    for(i=1;i<=n;i++)
    {
        if(a[b][i] && !vis[i])
        q[++r] = i;
        if(f<=r)
        {
            vis[q[f]] = 1;
            bfs(q[f++]);
        }
    }

}

void DFS(int i)
{
    int j;
printf("\n%d",i);
    vis[i]=1;
for(j=0;j<n;j++)
       if(!vis[j]&&a[i][j]==1)
            DFS(j);
}

void main()
{
     int i,j,ch;
    printf("Enter number of vertices:");  
    scanf("%d",&n);
    printf("\nEnter adjecency matrix of the graph:");
  
    for(i=0;i<n;i++)
       for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)
        vis[i]=0;
    do
    {
        printf("Enter choice 1:Reachable nodes using BFS  2:Graph is connected or not using DFS  3:Exit\n");
        scanf("%d",&ch); 
        switch(ch)
        {
            case 1:
             bfs(1);
            for(int i=1; i<=n; i++)
            {   
                if(vis[i] == 1)
                    printf("%d\t", i);
                else
                    printf("Not reachable!");
            }
            break;

            case 2:
             DFS(0);
            for(i=0;i<n;i++)
            {
                if(vis[i]==0)
                break;
            }
            if(i==n)
                printf("\nConnected");
            else
                printf("\nNot connected");
            break;

            case 3:
            exit(0);
            break;

            default:
            printf("Wrong choice\n");
        }
    }while(ch!=3);
} 
    

