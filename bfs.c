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

int main()
{
    int i,j;
    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    printf("Enter the adjacency matrix: ");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        scanf("%d", &a[i][j]);
    }
    for(int i=1; i<=n; i++)
    vis[i] = 0;

    bfs(1);
    for(int i=1; i<=n; i++)
    {
        if(vis[i] == 1)
        printf("%d\t", i);
        else
        printf("Not reachable!");
    }


    return 0;
}